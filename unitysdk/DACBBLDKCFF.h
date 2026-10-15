#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/MechCraftExamItemState.h"
#include "unitysdk/System/Object.h"
class FABNLDDIMIG;
class FJFNJCPHFDM;
class FKNABMFHPCN;
class FKNABMFHPCN_IOKMEDMMGCI;
class HFAAONKNLFM;
class KCJNGDLDKFG;
class MNJKHKCHKLI;
class MPEOLIBNMGE;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define DACBBLDKCFF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xDFBBFF0)
#define DACBBLDKCFF_CTOR_OFFSET UNITYSDK_OFFSET(0xDFBBFC0)
#define DACBBLDKCFF_DMOOFECJDCD_OFFSET UNITYSDK_OFFSET(0xDFBC4D0)
#define DACBBLDKCFF_JIFKINHMFHE_OFFSET UNITYSDK_OFFSET(0xDFBC340)

	class DACBBLDKCFF : public ::System::Object
	{
	public:
		::MPEOLIBNMGE* MOOEPGBJJAF; // 0x10
		::KCJNGDLDKFG* JGJPOOFDENC; // 0x18
		::HFAAONKNLFM* AFBDJPILCFH; // 0x20
		::FKNABMFHPCN_IOKMEDMMGCI* EGIKGLEBHDL; // 0x28
		::FABNLDDIMIG* DGAFKAIOAFO; // 0x30
		::System::Void _ctor(::HFAAONKNLFM* a1, ::FABNLDDIMIG* a2, ::FJFNJCPHFDM* a3, ::MPEOLIBNMGE* a4, ::FKNABMFHPCN_IOKMEDMMGCI* a5, ::KCJNGDLDKFG* a6)
		{
			return ((::System::Void(*)(::PVOID, ::HFAAONKNLFM*, ::FABNLDDIMIG*, ::FJFNJCPHFDM*, ::MPEOLIBNMGE*, ::FKNABMFHPCN_IOKMEDMMGCI*, ::KCJNGDLDKFG*))((::PBYTE)hIl2Cpp + DACBBLDKCFF_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::MNJKHKCHKLI* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::MNJKHKCHKLI*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DACBBLDKCFF_BPLPBPMEODA_OFFSET))(this, a1);
		}

		::FKNABMFHPCN* JIFKINHMFHE(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a3)
		{
			return ((::FKNABMFHPCN*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + DACBBLDKCFF_JIFKINHMFHE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftExamItemState DMOOFECJDCD(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a3)
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftExamItemState(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + DACBBLDKCFF_DMOOFECJDCD_OFFSET))(this, a1, a2, a3);
		}

	};
