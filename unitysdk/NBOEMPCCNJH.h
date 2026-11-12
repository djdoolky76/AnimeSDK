#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMEIKAGDIFC.h"
#include "unitysdk/System/Object.h"
class BMCNDLNONMO;
class NBOEMPCCNJH;

#define NBOEMPCCNJH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC37BA60)
#define NBOEMPCCNJH_CTOR_OFFSET UNITYSDK_OFFSET(0xC37BB00)
#define NBOEMPCCNJH_GET_MODIFIERID_OFFSET UNITYSDK_OFFSET(0xC37BBF0)
#define NBOEMPCCNJH_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0xC37BC10)
#define NBOEMPCCNJH_LLBFBLIGNDG_OFFSET UNITYSDK_OFFSET(0xC37BB10)
#define NBOEMPCCNJH_SET_MODIFIERID_OFFSET UNITYSDK_OFFSET(0xC37BC00)
#define NBOEMPCCNJH_SET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0xC37BC20)
#define NBOEMPCCNJH_UPDATE_OFFSET UNITYSDK_OFFSET(0xC37BB70)

inline static constexpr unsigned int NBOEMPCCNJH_TypeDefinitionIndex = 69642;

	class NBOEMPCCNJH : public ::System::Object
	{
	public:
		::AMEIKAGDIFC _SourceType_k__BackingField; // 0x10
		::System::Byte _padding0[0x4];
		::System::UInt64 _ModifierID_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBOEMPCCNJH_CTOR_OFFSET))(this);
		}

		static ::NBOEMPCCNJH* BPLPBPMEODA(::BMCNDLNONMO* a1)
		{
			return ((::NBOEMPCCNJH*(*)(::BMCNDLNONMO*))((::PBYTE)hIl2Cpp + NBOEMPCCNJH_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void Update(::BMCNDLNONMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMCNDLNONMO*))((::PBYTE)hIl2Cpp + NBOEMPCCNJH_UPDATE_OFFSET))(this, a1);
		}

		::System::Void LLBFBLIGNDG(::BMCNDLNONMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMCNDLNONMO*))((::PBYTE)hIl2Cpp + NBOEMPCCNJH_LLBFBLIGNDG_OFFSET))(this, a1);
		}

		::System::UInt64 get_ModifierID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + NBOEMPCCNJH_GET_MODIFIERID_OFFSET))(this);
		}

		::System::Void set_ModifierID(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + NBOEMPCCNJH_SET_MODIFIERID_OFFSET))(this, a1);
		}

		::AMEIKAGDIFC get_SourceType()
		{
			return ((::AMEIKAGDIFC(*)(::PVOID))((::PBYTE)hIl2Cpp + NBOEMPCCNJH_GET_SOURCETYPE_OFFSET))(this);
		}

		::System::Void set_SourceType(::AMEIKAGDIFC a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMEIKAGDIFC))((::PBYTE)hIl2Cpp + NBOEMPCCNJH_SET_SOURCETYPE_OFFSET))(this, a1);
		}

	};
