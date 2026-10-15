#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class QuestData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define JKIMOPHBJCI_ALMJOFLGNKF_OFFSET UNITYSDK_OFFSET(0xB21DF50)
#define JKIMOPHBJCI_CTOR_OFFSET UNITYSDK_OFFSET(0xB21DD10)
#define JKIMOPHBJCI_JHAGLGHIPIA_OFFSET UNITYSDK_OFFSET(0xB21E270)
#define JKIMOPHBJCI_MPBPPONPAHF_OFFSET UNITYSDK_OFFSET(0xB21E220)
#define JKIMOPHBJCI_OFANBDMFMED_OFFSET UNITYSDK_OFFSET(0xB21E4A0)

inline static constexpr unsigned int JKIMOPHBJCI_TypeDefinitionIndex = 80731;

	class JKIMOPHBJCI : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* CLDMPGEBPKN; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::System::UInt32>*>* LHCJLCMMLKK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKIMOPHBJCI_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::QuestData*>* ALMJOFLGNKF()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKIMOPHBJCI_ALMJOFLGNKF_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::QuestData*>* MPBPPONPAHF()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKIMOPHBJCI_MPBPPONPAHF_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::QuestData*>*>* JHAGLGHIPIA()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::QuestData*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKIMOPHBJCI_JHAGLGHIPIA_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::QuestData*>* OFANBDMFMED(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::QuestData*>*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + JKIMOPHBJCI_OFANBDMFMED_OFFSET))(this, a1);
		}

	};
