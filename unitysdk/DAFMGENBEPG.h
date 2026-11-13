#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCILMJOBEAD.h"
#include "unitysdk/JJDFGMMMCMI.h"
class AOFOEOIJEHF;
namespace RPG::Client { class GridFightTraitElationLaughPointEffect; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define DAFMGENBEPG_CTOR_OFFSET UNITYSDK_OFFSET(0x19943560)
#define DAFMGENBEPG_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x199435B0)
#define DAFMGENBEPG_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0x19943900)
#define DAFMGENBEPG_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x19943B90)
#define DAFMGENBEPG_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x19943820)
#define DAFMGENBEPG_UPDATEITEM_OFFSET UNITYSDK_OFFSET(0x199438B0)

inline static constexpr unsigned int DAFMGENBEPG_TypeDefinitionIndex = 67181;

	class DAFMGENBEPG : public ::BCILMJOBEAD
	{
	public:
		::RPG::Client::GridFightTraitElationLaughPointEffect* LBNBPMIFDHI; // 0x18
		::System::Void _ctor(::RPG::Client::GridFightTraitElationLaughPointEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitElationLaughPointEffect*))((::PBYTE)hIl2Cpp + DAFMGENBEPG_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + DAFMGENBEPG_ISCONCERNEDWITH_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + DAFMGENBEPG_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateItem(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + DAFMGENBEPG_UPDATEITEM_OFFSET))(this, a1);
		}

		::System::Void UpdateAddItem(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + DAFMGENBEPG_UPDATEADDITEM_OFFSET))(this, a1);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + DAFMGENBEPG_UPDATEAFTER_OFFSET))(this, a1);
		}

	};
