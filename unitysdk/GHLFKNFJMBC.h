#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Nullable_1.h"
class NDCLBAKBEIP;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define GHLFKNFJMBC_CJDNCBHLOGD_1_OFFSET UNITYSDK_OFFSET(0x1C528780)
#define GHLFKNFJMBC_CJDNCBHLOGD_2_OFFSET UNITYSDK_OFFSET(0x1C528B50)
#define GHLFKNFJMBC_CJDNCBHLOGD_OFFSET UNITYSDK_OFFSET(0x1C528640)
#define GHLFKNFJMBC_IPNKEKFJFLI_OFFSET UNITYSDK_OFFSET(0x1C528DB0)

inline static constexpr unsigned int GHLFKNFJMBC_TypeDefinitionIndex = 41888;

	class GHLFKNFJMBC : public ::System::Object
	{
	public:
		static ::System::Int32 CJDNCBHLOGD(::NDCLBAKBEIP* a1, ::RPG::Client::MechCraft::MechCraftAttributeType a2, ::RPG::Client::MechCraft::MechCraftAttributeType a3)
		{
			return ((::System::Int32(*)(::NDCLBAKBEIP*, ::RPG::Client::MechCraft::MechCraftAttributeType, ::RPG::Client::MechCraft::MechCraftAttributeType))((::PBYTE)hIl2Cpp + GHLFKNFJMBC_CJDNCBHLOGD_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 CJDNCBHLOGD_1(::NDCLBAKBEIP* a1, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType> a2, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType> a3)
		{
			return ((::System::Int32(*)(::NDCLBAKBEIP*, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType>, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType>))((::PBYTE)hIl2Cpp + GHLFKNFJMBC_CJDNCBHLOGD_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 CJDNCBHLOGD_2(::NDCLBAKBEIP* a1, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> a2, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> a3)
		{
			return ((::System::Int32(*)(::NDCLBAKBEIP*, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>))((::PBYTE)hIl2Cpp + GHLFKNFJMBC_CJDNCBHLOGD_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::MechCraftAttributeType>* IPNKEKFJFLI(::NDCLBAKBEIP* a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::MechCraftAttributeType>*(*)(::NDCLBAKBEIP*, ::System::Boolean))((::PBYTE)hIl2Cpp + GHLFKNFJMBC_IPNKEKFJFLI_OFFSET))(a1, a2);
		}

	};
