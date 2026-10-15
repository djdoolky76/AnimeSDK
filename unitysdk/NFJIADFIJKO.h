#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HEAIEBHLCMJ.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define NFJIADFIJKO_CTOR_OFFSET UNITYSDK_OFFSET(0xBB92430)
#define NFJIADFIJKO_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBB918F0)
#define NFJIADFIJKO_HHKGFILKNAC_OFFSET UNITYSDK_OFFSET(0xBB921B0)
#define NFJIADFIJKO_IGPPKKOALDE_OFFSET UNITYSDK_OFFSET(0xBB91990)
#define NFJIADFIJKO_KPMAJCLMOKK_OFFSET UNITYSDK_OFFSET(0xBB91C90)
#define NFJIADFIJKO_OHBNKHOOIAB_OFFSET UNITYSDK_OFFSET(0xBB91F00)

inline static constexpr unsigned int NFJIADFIJKO_TypeDefinitionIndex = 59920;

	class NFJIADFIJKO : public ::HEAIEBHLCMJ
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* CPJKJIPGHAD; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJIADFIJKO_CTOR_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJIADFIJKO_HADOHLNHHGB_OFFSET))(this);
		}

		::UnityEngine::Object* IGPPKKOALDE(::System::String* a1, ::RPG::Client::CachedAssetLogicType a2)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::String*, ::RPG::Client::CachedAssetLogicType))((::PBYTE)hIl2Cpp + NFJIADFIJKO_IGPPKKOALDE_OFFSET))(this, a1, a2);
		}

		::System::Int32 KPMAJCLMOKK(::System::String* a1, ::RPG::Client::CachedAssetLogicType a2, ::System::Action_1<::UnityEngine::Object*>* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::RPG::Client::CachedAssetLogicType, ::System::Action_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + NFJIADFIJKO_KPMAJCLMOKK_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean OHBNKHOOIAB(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NFJIADFIJKO_OHBNKHOOIAB_OFFSET))(this, a1);
		}

		::System::Boolean HHKGFILKNAC(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + NFJIADFIJKO_HHKGFILKNAC_OFFSET))(this, a1, a2);
		}

	};
