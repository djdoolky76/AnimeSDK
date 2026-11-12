#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCILMJOBEAD.h"
#include "unitysdk/JJDFGMMMCMI.h"
namespace RPG::Client { class GridFightTraitChimeraTraitEffect; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define KNALDPLDONB_CTOR_OFFSET UNITYSDK_OFFSET(0xBDC4860)
#define KNALDPLDONB_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xBDC48B0)
#define KNALDPLDONB_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0xBDC4E50)
#define KNALDPLDONB_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0xBDC4B60)

inline static constexpr unsigned int KNALDPLDONB_TypeDefinitionIndex = 67149;

	class KNALDPLDONB : public ::BCILMJOBEAD
	{
	public:
		::RPG::Client::GridFightTraitChimeraTraitEffect* LBNBPMIFDHI; // 0x18
		::System::UInt32 FNKHKLGGHIB; // 0x20
		::System::Void _ctor(::RPG::Client::GridFightTraitChimeraTraitEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitChimeraTraitEffect*))((::PBYTE)hIl2Cpp + KNALDPLDONB_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + KNALDPLDONB_ISCONCERNEDWITH_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + KNALDPLDONB_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + KNALDPLDONB_UPDATEAFTER_OFFSET))(this, a1);
		}

	};
