#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"
class BHHPHPGCODJ;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define IOJNNBAILBC_CTOR_OFFSET UNITYSDK_OFFSET(0x165035A0)
#define IOJNNBAILBC_DOAHPCLPJII_OFFSET UNITYSDK_OFFSET(0x16503440)
#define IOJNNBAILBC_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x165032C0)
#define IOJNNBAILBC_NLIMDCDAPPA_OFFSET UNITYSDK_OFFSET(0x165032E0)
#define IOJNNBAILBC_SET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x165032D0)

	class IOJNNBAILBC : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::BHHPHPGCODJ*>* _Attributes_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJNNBAILBC_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::BHHPHPGCODJ*>* get_Attributes()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::BHHPHPGCODJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJNNBAILBC_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Void set_Attributes(::System::Collections::Generic::IReadOnlyList_1<::BHHPHPGCODJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::BHHPHPGCODJ*>*))((::PBYTE)hIl2Cpp + IOJNNBAILBC_SET_ATTRIBUTES_OFFSET))(this, a1);
		}

		::System::Void NLIMDCDAPPA(::RPG::Client::MechCraft::MechCraftAttributeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType))((::PBYTE)hIl2Cpp + IOJNNBAILBC_NLIMDCDAPPA_OFFSET))(this, a1);
		}

		::System::Void DOAHPCLPJII(::RPG::Client::MechCraft::MechCraftAttributeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType))((::PBYTE)hIl2Cpp + IOJNNBAILBC_DOAHPCLPJII_OFFSET))(this, a1);
		}

	};
