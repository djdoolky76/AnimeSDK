#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMEIKAGDIFC.h"
#include "unitysdk/System/Object.h"
class BMCNDLNONMO;
class GKGJFFDKJNF;
class PHIJCHDILDJ;

#define PHIJCHDILDJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC2445A0)
#define PHIJCHDILDJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC244630)
#define PHIJCHDILDJ_GET_DOORSTATUS_OFFSET UNITYSDK_OFFSET(0xC2447B0)
#define PHIJCHDILDJ_GET_MODIFIERID_OFFSET UNITYSDK_OFFSET(0xC244770)
#define PHIJCHDILDJ_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0xC244790)
#define PHIJCHDILDJ_LLBFBLIGNDG_OFFSET UNITYSDK_OFFSET(0xC244640)
#define PHIJCHDILDJ_SET_DOORSTATUS_OFFSET UNITYSDK_OFFSET(0xC2447C0)
#define PHIJCHDILDJ_SET_MODIFIERID_OFFSET UNITYSDK_OFFSET(0xC244780)
#define PHIJCHDILDJ_SET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0xC2447A0)
#define PHIJCHDILDJ_UPDATE_OFFSET UNITYSDK_OFFSET(0xC244720)

inline static constexpr unsigned int PHIJCHDILDJ_TypeDefinitionIndex = 67695;

	class PHIJCHDILDJ : public ::System::Object
	{
	public:
		::GKGJFFDKJNF* _DoorStatus_k__BackingField; // 0x10
		::System::UInt64 _ModifierID_k__BackingField; // 0x18
		::AMEIKAGDIFC _SourceType_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHIJCHDILDJ_CTOR_OFFSET))(this);
		}

		static ::PHIJCHDILDJ* BPLPBPMEODA(::BMCNDLNONMO* a1)
		{
			return ((::PHIJCHDILDJ*(*)(::BMCNDLNONMO*))((::PBYTE)hIl2Cpp + PHIJCHDILDJ_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void Update(::BMCNDLNONMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMCNDLNONMO*))((::PBYTE)hIl2Cpp + PHIJCHDILDJ_UPDATE_OFFSET))(this, a1);
		}

		::System::Void LLBFBLIGNDG(::BMCNDLNONMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMCNDLNONMO*))((::PBYTE)hIl2Cpp + PHIJCHDILDJ_LLBFBLIGNDG_OFFSET))(this, a1);
		}

		::System::UInt64 get_ModifierID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + PHIJCHDILDJ_GET_MODIFIERID_OFFSET))(this);
		}

		::System::Void set_ModifierID(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + PHIJCHDILDJ_SET_MODIFIERID_OFFSET))(this, a1);
		}

		::AMEIKAGDIFC get_SourceType()
		{
			return ((::AMEIKAGDIFC(*)(::PVOID))((::PBYTE)hIl2Cpp + PHIJCHDILDJ_GET_SOURCETYPE_OFFSET))(this);
		}

		::System::Void set_SourceType(::AMEIKAGDIFC a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMEIKAGDIFC))((::PBYTE)hIl2Cpp + PHIJCHDILDJ_SET_SOURCETYPE_OFFSET))(this, a1);
		}

		::GKGJFFDKJNF* get_DoorStatus()
		{
			return ((::GKGJFFDKJNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHIJCHDILDJ_GET_DOORSTATUS_OFFSET))(this);
		}

		::System::Void set_DoorStatus(::GKGJFFDKJNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKGJFFDKJNF*))((::PBYTE)hIl2Cpp + PHIJCHDILDJ_SET_DOORSTATUS_OFFSET))(this, a1);
		}

	};
