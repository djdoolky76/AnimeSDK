#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ChimeraDuelTriggerEventRow; }
namespace System { class String; }

#define EPHAGINCKNI_CTOR_OFFSET UNITYSDK_OFFSET(0x155D4A40)
#define EPHAGINCKNI_GET__ROW_OFFSET UNITYSDK_OFFSET(0x155D4A50)
#define EPHAGINCKNI_HCPPLMGGPBJ_OFFSET UNITYSDK_OFFSET(0x155D4AB0)
#define EPHAGINCKNI_HONGLJECAAC_OFFSET UNITYSDK_OFFSET(0x155D4B50)
#define EPHAGINCKNI_MJGKNFEILLI_OFFSET UNITYSDK_OFFSET(0x155D4A60)
#define EPHAGINCKNI_PLNCKLJOJME_OFFSET UNITYSDK_OFFSET(0x155D4B00)

inline static constexpr unsigned int EPHAGINCKNI_TypeDefinitionIndex = 63392;

	class EPHAGINCKNI : public ::System::Object
	{
	public:
		::RPG::GameCore::ChimeraDuelTriggerEventRow* __Row_k__BackingField; // 0x10
		::System::Void _ctor(::RPG::GameCore::ChimeraDuelTriggerEventRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelTriggerEventRow*))((::PBYTE)hIl2Cpp + EPHAGINCKNI_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChimeraDuelTriggerEventRow* get__Row()
		{
			return ((::RPG::GameCore::ChimeraDuelTriggerEventRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHAGINCKNI_GET__ROW_OFFSET))(this);
		}

		::System::UInt32 MJGKNFEILLI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHAGINCKNI_MJGKNFEILLI_OFFSET))(this);
		}

		::System::String* HCPPLMGGPBJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHAGINCKNI_HCPPLMGGPBJ_OFFSET))(this);
		}

		::System::UInt32 PLNCKLJOJME()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHAGINCKNI_PLNCKLJOJME_OFFSET))(this);
		}

		::Il2CppArray<::System::Single>* HONGLJECAAC()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHAGINCKNI_HONGLJECAAC_OFFSET))(this);
		}

	};
