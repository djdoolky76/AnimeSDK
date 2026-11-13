#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBPBANMMLMF;
class EAGPPDDBBIM;
class FEFLMKBBDLO;
class FKFGNAHIOPO;
class HLJNBBHKKMI;
class IIDHAJDAMDE;
class JKOOAIOBGHP;
class KBPCJPHHOPC;
class LPHINGPIEAJ;
namespace RPG::Client::LittleGame::ComicDessert { template <typename T1, typename T2> class ISourceAnchorSelector_2; }
namespace RPG::Client::LittleGame::ComicDessert { template <typename T1, typename T2> class ITargetAnchorCandidateProvider_2; }
namespace RPG::Client::LittleGame::ComicDessert { template <typename T1, typename T2> class ITargetAnchorSelector_2; }
namespace RPG::Client::LittleGame::ComicDessert { template <typename T> class ISourceAnchorCandidateProvider_1; }
namespace RPG::Client::LittleGame::ComicDessert { template <typename T> class ITransportEmitPrecondition_1; }

#define FBEOIDJHJMG_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA46370)
#define FBEOIDJHJMG_GET_PRECONDITION_OFFSET UNITYSDK_OFFSET(0x1BA463F0)
#define FBEOIDJHJMG_GET_SOURCECANDIDATEPROVIDER_OFFSET UNITYSDK_OFFSET(0x1BA463B0)
#define FBEOIDJHJMG_GET_SOURCESELECTOR_OFFSET UNITYSDK_OFFSET(0x1BA463C0)
#define FBEOIDJHJMG_GET_TARGETCANDIDATEPROVIDER_OFFSET UNITYSDK_OFFSET(0x1BA463D0)
#define FBEOIDJHJMG_GET_TARGETSELECTOR_OFFSET UNITYSDK_OFFSET(0x1BA463E0)
#define FBEOIDJHJMG_GHJDJJOKEPE_OFFSET UNITYSDK_OFFSET(0x1BA46C90)
#define FBEOIDJHJMG_NFKMMJMFANC_OFFSET UNITYSDK_OFFSET(0x1BA46CE0)
#define FBEOIDJHJMG_TRYBUILDPLAN_OFFSET UNITYSDK_OFFSET(0x1BA46400)

inline static constexpr unsigned int FBEOIDJHJMG_TypeDefinitionIndex = 80063;

	class FBEOIDJHJMG : public ::System::Object
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x10
		::RPG::Client::LittleGame::ComicDessert::ISourceAnchorSelector_2<::KBPCJPHHOPC*, ::FEFLMKBBDLO*>* _SourceSelector_k__BackingField; // 0x18
		::BBPBANMMLMF* GMOJMIHGJHL; // 0x20
		::RPG::Client::LittleGame::ComicDessert::ITransportEmitPrecondition_1<::EAGPPDDBBIM*>* _Precondition_k__BackingField; // 0x28
		::RPG::Client::LittleGame::ComicDessert::ITargetAnchorSelector_2<::JKOOAIOBGHP*, ::EAGPPDDBBIM*>* _TargetSelector_k__BackingField; // 0x30
		::RPG::Client::LittleGame::ComicDessert::ITargetAnchorCandidateProvider_2<::FEFLMKBBDLO*, ::JKOOAIOBGHP*>* _TargetCandidateProvider_k__BackingField; // 0x38
		::RPG::Client::LittleGame::ComicDessert::ISourceAnchorCandidateProvider_1<::KBPCJPHHOPC*>* _SourceCandidateProvider_k__BackingField; // 0x40
		::LPHINGPIEAJ* EDADPGAAKNI; // 0x48
		::System::Void _ctor(::HLJNBBHKKMI* a1, ::LPHINGPIEAJ* a2, ::RPG::Client::LittleGame::ComicDessert::ISourceAnchorCandidateProvider_1<::KBPCJPHHOPC*>* a3, ::RPG::Client::LittleGame::ComicDessert::ISourceAnchorSelector_2<::KBPCJPHHOPC*, ::FEFLMKBBDLO*>* a4, ::RPG::Client::LittleGame::ComicDessert::ITargetAnchorCandidateProvider_2<::FEFLMKBBDLO*, ::JKOOAIOBGHP*>* a5, ::RPG::Client::LittleGame::ComicDessert::ITargetAnchorSelector_2<::JKOOAIOBGHP*, ::EAGPPDDBBIM*>* a6, ::RPG::Client::LittleGame::ComicDessert::ITransportEmitPrecondition_1<::EAGPPDDBBIM*>* a7, ::BBPBANMMLMF* a8)
		{
			return ((::System::Void(*)(::PVOID, ::HLJNBBHKKMI*, ::LPHINGPIEAJ*, ::RPG::Client::LittleGame::ComicDessert::ISourceAnchorCandidateProvider_1<::KBPCJPHHOPC*>*, ::RPG::Client::LittleGame::ComicDessert::ISourceAnchorSelector_2<::KBPCJPHHOPC*, ::FEFLMKBBDLO*>*, ::RPG::Client::LittleGame::ComicDessert::ITargetAnchorCandidateProvider_2<::FEFLMKBBDLO*, ::JKOOAIOBGHP*>*, ::RPG::Client::LittleGame::ComicDessert::ITargetAnchorSelector_2<::JKOOAIOBGHP*, ::EAGPPDDBBIM*>*, ::RPG::Client::LittleGame::ComicDessert::ITransportEmitPrecondition_1<::EAGPPDDBBIM*>*, ::BBPBANMMLMF*))((::PBYTE)hIl2Cpp + FBEOIDJHJMG_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::RPG::Client::LittleGame::ComicDessert::ISourceAnchorCandidateProvider_1<::KBPCJPHHOPC*>* get_SourceCandidateProvider()
		{
			return ((::RPG::Client::LittleGame::ComicDessert::ISourceAnchorCandidateProvider_1<::KBPCJPHHOPC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEOIDJHJMG_GET_SOURCECANDIDATEPROVIDER_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ComicDessert::ISourceAnchorSelector_2<::KBPCJPHHOPC*, ::FEFLMKBBDLO*>* get_SourceSelector()
		{
			return ((::RPG::Client::LittleGame::ComicDessert::ISourceAnchorSelector_2<::KBPCJPHHOPC*, ::FEFLMKBBDLO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEOIDJHJMG_GET_SOURCESELECTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ComicDessert::ITargetAnchorCandidateProvider_2<::FEFLMKBBDLO*, ::JKOOAIOBGHP*>* get_TargetCandidateProvider()
		{
			return ((::RPG::Client::LittleGame::ComicDessert::ITargetAnchorCandidateProvider_2<::FEFLMKBBDLO*, ::JKOOAIOBGHP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEOIDJHJMG_GET_TARGETCANDIDATEPROVIDER_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ComicDessert::ITargetAnchorSelector_2<::JKOOAIOBGHP*, ::EAGPPDDBBIM*>* get_TargetSelector()
		{
			return ((::RPG::Client::LittleGame::ComicDessert::ITargetAnchorSelector_2<::JKOOAIOBGHP*, ::EAGPPDDBBIM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEOIDJHJMG_GET_TARGETSELECTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ComicDessert::ITransportEmitPrecondition_1<::EAGPPDDBBIM*>* get_Precondition()
		{
			return ((::RPG::Client::LittleGame::ComicDessert::ITransportEmitPrecondition_1<::EAGPPDDBBIM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEOIDJHJMG_GET_PRECONDITION_OFFSET))(this);
		}

		::System::Boolean TryBuildPlan(::EAGPPDDBBIM* a1, ::IIDHAJDAMDE* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::EAGPPDDBBIM*, ::IIDHAJDAMDE*))((::PBYTE)hIl2Cpp + FBEOIDJHJMG_TRYBUILDPLAN_OFFSET))(this, a1, a2);
		}

		::LPHINGPIEAJ* GHJDJJOKEPE(::EAGPPDDBBIM* a1)
		{
			return ((::LPHINGPIEAJ*(*)(::PVOID, ::EAGPPDDBBIM*))((::PBYTE)hIl2Cpp + FBEOIDJHJMG_GHJDJJOKEPE_OFFSET))(this, a1);
		}

		::FKFGNAHIOPO* NFKMMJMFANC()
		{
			return ((::FKFGNAHIOPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEOIDJHJMG_NFKMMJMFANC_OFFSET))(this);
		}

	};
