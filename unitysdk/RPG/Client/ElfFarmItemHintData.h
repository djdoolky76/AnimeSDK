#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEKMLMOCLHF;
class ECGKEKKAHGN;
class NKEGPAOCGCJ;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class ElfCellGetItemData; }
namespace RPG::Client { class ElfFarmItemHintData; }
namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFFARMITEMHINTDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xCD8F000)
#define RPG_CLIENT_ELFFARMITEMHINTDATA_CREATE_2_OFFSET UNITYSDK_OFFSET(0xCD8F4E0)
#define RPG_CLIENT_ELFFARMITEMHINTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xCD8E040)
#define RPG_CLIENT_ELFFARMITEMHINTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xCD8EFB0)
#define RPG_CLIENT_ELFFARMITEMHINTDATA_GET_MERGEDRESULT_OFFSET UNITYSDK_OFFSET(0xCD8F9C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfFarmItemHintData_TypeDefinitionIndex = 63682;

	class ElfFarmItemHintData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _MergedResult; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ElfCellGetItemData*>* CellRewards; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMITEMHINTDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfFarmItemHintData* Create(::Google::Protobuf::Collections::RepeatedField_1<::CEKMLMOCLHF*>* a1)
		{
			return ((::RPG::Client::ElfFarmItemHintData*(*)(::Google::Protobuf::Collections::RepeatedField_1<::CEKMLMOCLHF*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMITEMHINTDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::ElfFarmItemHintData* Create_1(::Google::Protobuf::Collections::RepeatedField_1<::ECGKEKKAHGN*>* a1)
		{
			return ((::RPG::Client::ElfFarmItemHintData*(*)(::Google::Protobuf::Collections::RepeatedField_1<::ECGKEKKAHGN*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMITEMHINTDATA_CREATE_1_OFFSET))(a1);
		}

		static ::RPG::Client::ElfFarmItemHintData* Create_2(::Google::Protobuf::Collections::RepeatedField_1<::NKEGPAOCGCJ*>* a1)
		{
			return ((::RPG::Client::ElfFarmItemHintData*(*)(::Google::Protobuf::Collections::RepeatedField_1<::NKEGPAOCGCJ*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMITEMHINTDATA_CREATE_2_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_MergedResult()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMITEMHINTDATA_GET_MERGEDRESULT_OFFSET))(this);
		}

	};
}
