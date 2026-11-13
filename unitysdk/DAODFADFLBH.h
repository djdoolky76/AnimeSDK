#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
class AOFOEOIJEHF;
namespace RPG::Client { class GridFightTraitElationLaughPointEffect; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DAODFADFLBH_CTOR_OFFSET UNITYSDK_OFFSET(0x19948840)
#define DAODFADFLBH_HPFANEEJCBM_OFFSET UNITYSDK_OFFSET(0x19949150)
#define DAODFADFLBH_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x19949200)
#define DAODFADFLBH_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x199488C0)
#define DAODFADFLBH_UPDATEITEM_OFFSET UNITYSDK_OFFSET(0x199489D0)

inline static constexpr unsigned int DAODFADFLBH_TypeDefinitionIndex = 67187;

	class DAODFADFLBH : public ::RPG::Client::GridFightUpdateSummarizer
	{
	public:
		::RPG::Client::GridFightTraitElationLaughPointEffect* LBNBPMIFDHI; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* PHDHADDNFPI; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* OLMBFGGHPJM; // 0x20
		::System::Void _ctor(::RPG::Client::GridFightTraitElationLaughPointEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitElationLaughPointEffect*))((::PBYTE)hIl2Cpp + DAODFADFLBH_CTOR_OFFSET))(this, a1);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + DAODFADFLBH_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateItem(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + DAODFADFLBH_UPDATEITEM_OFFSET))(this, a1);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + DAODFADFLBH_UPDATEAFTER_OFFSET))(this, a1);
		}

		::System::Int32 HPFANEEJCBM(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DAODFADFLBH_HPFANEEJCBM_OFFSET))(this, a1);
		}

	};
