#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChimeraEvaluationData; }
namespace RPG::Client { class ChimeraEvaluationDisplayData; }
namespace RPG::Client { class ChimeraEvaluationManager; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MCHDFGLEMCD_BKIJADGMLOI_OFFSET UNITYSDK_OFFSET(0xB876480)
#define MCHDFGLEMCD_CGKBNLGAPKN_OFFSET UNITYSDK_OFFSET(0xB876EC0)
#define MCHDFGLEMCD_CKKLFABIJKF_OFFSET UNITYSDK_OFFSET(0xB876420)
#define MCHDFGLEMCD_CTOR_OFFSET UNITYSDK_OFFSET(0xB8762A0)
#define MCHDFGLEMCD_EGPOPPDFDLD_OFFSET UNITYSDK_OFFSET(0xB8766B0)
#define MCHDFGLEMCD_GET_CHIMERAEVALUATIONDICT_OFFSET UNITYSDK_OFFSET(0xB8773B0)
#define MCHDFGLEMCD_GET_CHIMERAEVALUATIONDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xB8773F0)
#define MCHDFGLEMCD_GET_CHIMERASATISFYEVALUATIONDICT_OFFSET UNITYSDK_OFFSET(0xB8773D0)
#define MCHDFGLEMCD_GKMHMAAPHIH_OFFSET UNITYSDK_OFFSET(0xB876CA0)
#define MCHDFGLEMCD_HBBOGCNJMOI_OFFSET UNITYSDK_OFFSET(0xB876940)
#define MCHDFGLEMCD_OMKMIIJLDAJ_OFFSET UNITYSDK_OFFSET(0xB8762B0)
#define MCHDFGLEMCD_SET_CHIMERAEVALUATIONDICT_OFFSET UNITYSDK_OFFSET(0xB8773C0)
#define MCHDFGLEMCD_SET_CHIMERAEVALUATIONDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xB877400)
#define MCHDFGLEMCD_SET_CHIMERASATISFYEVALUATIONDICT_OFFSET UNITYSDK_OFFSET(0xB8773E0)

inline static constexpr unsigned int MCHDFGLEMCD_TypeDefinitionIndex = 63494;

	class MCHDFGLEMCD : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>* _ChimeraEvaluationDisplayData_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*>* _ChimeraEvaluationDict_k__BackingField; // 0x18
		::RPG::Client::ChimeraEvaluationManager* CFKHNPGEAJA; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _ChimeraSatisfyEvaluationDict_k__BackingField; // 0x28
		::System::Void _ctor(::RPG::Client::ChimeraEvaluationManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraEvaluationManager*))((::PBYTE)hIl2Cpp + MCHDFGLEMCD_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>* OMKMIIJLDAJ(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MCHDFGLEMCD_OMKMIIJLDAJ_OFFSET))(this, a1);
		}

		::System::Boolean BKIJADGMLOI(::System::UInt32 a1, ::RPG::Client::ChimeraEvaluationData* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::ChimeraEvaluationData*))((::PBYTE)hIl2Cpp + MCHDFGLEMCD_BKIJADGMLOI_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>* CKKLFABIJKF(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MCHDFGLEMCD_CKKLFABIJKF_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*>* EGPOPPDFDLD(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MCHDFGLEMCD_EGPOPPDFDLD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>* GKMHMAAPHIH(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MCHDFGLEMCD_GKMHMAAPHIH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>* HBBOGCNJMOI(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*>*))((::PBYTE)hIl2Cpp + MCHDFGLEMCD_HBBOGCNJMOI_OFFSET))(this, a1);
		}

		::System::UInt32 CGKBNLGAPKN(::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*))((::PBYTE)hIl2Cpp + MCHDFGLEMCD_CGKBNLGAPKN_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*>* get_ChimeraEvaluationDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHDFGLEMCD_GET_CHIMERAEVALUATIONDICT_OFFSET))(this);
		}

		::System::Void set_ChimeraEvaluationDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*>*))((::PBYTE)hIl2Cpp + MCHDFGLEMCD_SET_CHIMERAEVALUATIONDICT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_ChimeraSatisfyEvaluationDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHDFGLEMCD_GET_CHIMERASATISFYEVALUATIONDICT_OFFSET))(this);
		}

		::System::Void set_ChimeraSatisfyEvaluationDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + MCHDFGLEMCD_SET_CHIMERASATISFYEVALUATIONDICT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>* get_ChimeraEvaluationDisplayData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHDFGLEMCD_GET_CHIMERAEVALUATIONDISPLAYDATA_OFFSET))(this);
		}

		::System::Void set_ChimeraEvaluationDisplayData(::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>*))((::PBYTE)hIl2Cpp + MCHDFGLEMCD_SET_CHIMERAEVALUATIONDISPLAYDATA_OFFSET))(this, a1);
		}

	};
