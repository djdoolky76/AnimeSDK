#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }

#define AOMNEOOEKNL_CTOR_OFFSET UNITYSDK_OFFSET(0x158C3E60)
#define AOMNEOOEKNL_DJFGBABPKKK_OFFSET UNITYSDK_OFFSET(0x158C3D10)
#define AOMNEOOEKNL_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x158C3D20)
#define AOMNEOOEKNL_OBIHLGBEOPP_OFFSET UNITYSDK_OFFSET(0x158C3D90)

inline static constexpr unsigned int AOMNEOOEKNL_TypeDefinitionIndex = 49531;

	class AOMNEOOEKNL : public ::System::Object
	{
	public:
		::System::Int32 LHKNGNILNLO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOMNEOOEKNL_CTOR_OFFSET))(this);
		}

		::System::Int32 DJFGBABPKKK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOMNEOOEKNL_DJFGBABPKKK_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOMNEOOEKNL_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void OBIHLGBEOPP(::System::String* a1, ::RPG::Client::CachedAssetLogicType a2, ::System::Action_1<::UnityEngine::Object*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::CachedAssetLogicType, ::System::Action_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + AOMNEOOEKNL_OBIHLGBEOPP_OFFSET))(this, a1, a2, a3);
		}

	};
