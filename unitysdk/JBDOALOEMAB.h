#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OCFMCBFNLND.h"
class HAJDFCHFBGN;
class KAKADGHNMFK;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JBDOALOEMAB_CTOR_OFFSET UNITYSDK_OFFSET(0x16568BD0)
#define JBDOALOEMAB_GGHFLIPKBNH_OFFSET UNITYSDK_OFFSET(0x16568E10)
#define JBDOALOEMAB_LEEPJIGMNDK_OFFSET UNITYSDK_OFFSET(0x16568C70)
#define JBDOALOEMAB_NODPBIKOJCF_OFFSET UNITYSDK_OFFSET(0x16568CB0)
#define JBDOALOEMAB_OCABBBNJKLD_OFFSET UNITYSDK_OFFSET(0x16569580)

	class JBDOALOEMAB : public ::OCFMCBFNLND
	{
	public:
		::KAKADGHNMFK* PFHKDKKPBMF; // 0x30
		::System::Collections::Generic::List_1<::KAKADGHNMFK*>* MLDNIJNNEAB; // 0x38
		::System::Collections::Generic::List_1<::KAKADGHNMFK*>* FAGBDHNDLBO; // 0x40
		::System::Void _ctor(::KAKADGHNMFK* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a3, ::HAJDFCHFBGN* a4)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::HAJDFCHFBGN*))((::PBYTE)hIl2Cpp + JBDOALOEMAB_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::KAKADGHNMFK* LEEPJIGMNDK()
		{
			return ((::KAKADGHNMFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBDOALOEMAB_LEEPJIGMNDK_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* NODPBIKOJCF(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + JBDOALOEMAB_NODPBIKOJCF_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::KAKADGHNMFK*>* GGHFLIPKBNH(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
		{
			return ((::System::Collections::Generic::List_1<::KAKADGHNMFK*>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + JBDOALOEMAB_GGHFLIPKBNH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::KAKADGHNMFK*>* OCABBBNJKLD(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::KAKADGHNMFK*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>*))((::PBYTE)hIl2Cpp + JBDOALOEMAB_OCABBBNJKLD_OFFSET))(this, a1);
		}

	};
