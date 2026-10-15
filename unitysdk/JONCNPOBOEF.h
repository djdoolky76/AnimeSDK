#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NativeString.h"
namespace HoudiniEngineUnity { class JSONObject; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace XLua { class LuaTable; }

#define JONCNPOBOEF_AIGJICBKNJP_OFFSET UNITYSDK_OFFSET(0xB2ADBD0)
#define JONCNPOBOEF_AMEKECLOMMM_1_OFFSET UNITYSDK_OFFSET(0xB2AD130)
#define JONCNPOBOEF_AMEKECLOMMM_OFFSET UNITYSDK_OFFSET(0xB2ACDF0)
#define JONCNPOBOEF_CJNDJIEGDOJ_OFFSET UNITYSDK_OFFSET(0xB2AD500)
#define JONCNPOBOEF_CTOR_OFFSET UNITYSDK_OFFSET(0xB2AE6D0)
#define JONCNPOBOEF_NILIPFGFPOM_OFFSET UNITYSDK_OFFSET(0xB2AE2F0)

inline static constexpr unsigned int JONCNPOBOEF_TypeDefinitionIndex = 59997;

	class JONCNPOBOEF : public ::System::Object
	{
	public:
		::RPG::Client::RPGProfilerMarker* AABOMBAEELI; // 0x10
		::RPG::Client::RPGProfilerMarker* NBCPAOCIHEL; // 0x18
		::RPG::Client::RPGProfilerMarker* FALLNHJEKLL; // 0x20
		::System::String* BOIJNHAFIDH; // 0x28
		::RPG::Client::RPGProfilerMarker* MHNHCBNCFPD; // 0x30
		::HoudiniEngineUnity::JSONObject* EOCNNGBKFAN; // 0x38
		::RPG::Client::RPGProfilerMarker* PBPAADBDKIO; // 0x40
		::RPG::Client::RPGProfilerMarker* DPBGHAPJHKC; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JONCNPOBOEF_CTOR_OFFSET))(this);
		}

		::System::Void AMEKECLOMMM(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + JONCNPOBOEF_AMEKECLOMMM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AMEKECLOMMM_1(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NativeString>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NativeString>*))((::PBYTE)hIl2Cpp + JONCNPOBOEF_AMEKECLOMMM_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CJNDJIEGDOJ(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::XLua::LuaTable* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + JONCNPOBOEF_CJNDJIEGDOJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AIGJICBKNJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JONCNPOBOEF_AIGJICBKNJP_OFFSET))(this);
		}

		::System::Void NILIPFGFPOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JONCNPOBOEF_NILIPFGFPOM_OFFSET))(this);
		}

	};
