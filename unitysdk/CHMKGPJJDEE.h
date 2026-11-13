#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
class JLKCBOIFJKC;
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CHMKGPJJDEE_CTOR_OFFSET UNITYSDK_OFFSET(0x16E2DBA0)
#define CHMKGPJJDEE_DBAPOHAJPHL_OFFSET UNITYSDK_OFFSET(0x16E2D930)
#define CHMKGPJJDEE_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x16E2D280)
#define CHMKGPJJDEE_KOIKFPMHKBE_OFFSET UNITYSDK_OFFSET(0x16E2D470)
#define CHMKGPJJDEE_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x16E2DB20)
#define CHMKGPJJDEE_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x16E2D6C0)
#define CHMKGPJJDEE_UPDATETRAITEFFECT_OFFSET UNITYSDK_OFFSET(0x16E2DAB0)

inline static constexpr unsigned int CHMKGPJJDEE_TypeDefinitionIndex = 66894;

	class CHMKGPJJDEE : public ::RPG::Client::GridFightUpdateSummarizer
	{
	public:
		::System::Boolean BFIFKGPGMNE; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 LNMBALGMBID; // 0x14
		::System::UInt32 MJHMLPBHOMJ; // 0x18
		::System::UInt32 BIAJDBEMNBL; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMKGPJJDEE_CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CHMKGPJJDEE_ISCONCERNEDWITH_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CHMKGPJJDEE_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateTraitEffect(::JLKCBOIFJKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLKCBOIFJKC*))((::PBYTE)hIl2Cpp + CHMKGPJJDEE_UPDATETRAITEFFECT_OFFSET))(this, a1);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + CHMKGPJJDEE_UPDATEAFTER_OFFSET))(this, a1);
		}

		static ::System::Boolean KOIKFPMHKBE(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CHMKGPJJDEE_KOIKFPMHKBE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::GridFightRole* DBAPOHAJPHL(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CHMKGPJJDEE_DBAPOHAJPHL_OFFSET))(a1);
		}

	};
