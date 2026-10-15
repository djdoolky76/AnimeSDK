#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"
class NDCLBAKBEIP;
namespace System { class Nullable; }
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define GHLFKNFJMBC_CJDNCBHLOGD_1_OFFSET UNITYSDK_OFFSET(0x1C556C40)
#define GHLFKNFJMBC_CJDNCBHLOGD_2_OFFSET UNITYSDK_OFFSET(0x1C557010)
#define GHLFKNFJMBC_CJDNCBHLOGD_OFFSET UNITYSDK_OFFSET(0x1C556B00)
#define GHLFKNFJMBC_IPNKEKFJFLI_OFFSET UNITYSDK_OFFSET(0x1C557270)

	class GHLFKNFJMBC : public ::System::Object
	{
	public:
		static ::System::Int32 CJDNCBHLOGD(::NDCLBAKBEIP* a1, ::RPG::Client::MechCraft::MechCraftAttributeType a2, ::RPG::Client::MechCraft::MechCraftAttributeType a3)
		{
			return ((::System::Int32(*)(::NDCLBAKBEIP*, ::RPG::Client::MechCraft::MechCraftAttributeType, ::RPG::Client::MechCraft::MechCraftAttributeType))((::PBYTE)hIl2Cpp + GHLFKNFJMBC_CJDNCBHLOGD_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 CJDNCBHLOGD_1(::NDCLBAKBEIP* a1, ::System::Nullable* a2, ::System::Nullable* a3)
		{
			return ((::System::Int32(*)(::NDCLBAKBEIP*, ::System::Nullable*, ::System::Nullable*))((::PBYTE)hIl2Cpp + GHLFKNFJMBC_CJDNCBHLOGD_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 CJDNCBHLOGD_2(::NDCLBAKBEIP* a1, ::System::Collections::Generic::KeyValuePair* a2, ::System::Collections::Generic::KeyValuePair* a3)
		{
			return ((::System::Int32(*)(::NDCLBAKBEIP*, ::System::Collections::Generic::KeyValuePair*, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + GHLFKNFJMBC_CJDNCBHLOGD_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::MechCraftAttributeType>* IPNKEKFJFLI(::NDCLBAKBEIP* a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::MechCraftAttributeType>*(*)(::NDCLBAKBEIP*, ::System::Boolean))((::PBYTE)hIl2Cpp + GHLFKNFJMBC_IPNKEKFJFLI_OFFSET))(a1, a2);
		}

	};
