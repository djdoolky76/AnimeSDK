#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/Client/TutorialBlockType.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
#include "unitysdk/UnityEngine/Rect.h"
class CKJALKLPNKB;
class GHPJHIMKMPF;
class KDJNAAOFMMJ;
class KKIJDPKIIKL;
namespace RPG::Client { class TutorialGuideConfigWrapper; }
namespace RPG::GameCore { class ShowGuideHintWithText; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define BHNJCLDGONG_BLBGBLLHDAB_OFFSET UNITYSDK_OFFSET(0xB48CAD0)
#define BHNJCLDGONG_BNBLIBLDHLI_OFFSET UNITYSDK_OFFSET(0xB48DE00)
#define BHNJCLDGONG_CTOR_OFFSET UNITYSDK_OFFSET(0xB48B110)
#define BHNJCLDGONG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB48B120)
#define BHNJCLDGONG_DJEBPFFBMPB_OFFSET UNITYSDK_OFFSET(0xB48D4D0)
#define BHNJCLDGONG_EDBPHODBFCP_OFFSET UNITYSDK_OFFSET(0xB48C1B0)
#define BHNJCLDGONG_FBGHGOFHLAA_OFFSET UNITYSDK_OFFSET(0xB48E250)
#define BHNJCLDGONG_FDEFNMJBGML_OFFSET UNITYSDK_OFFSET(0xB48B240)
#define BHNJCLDGONG_FHDOJIOBGPA_OFFSET UNITYSDK_OFFSET(0xB48D6F0)
#define BHNJCLDGONG_GCDKHNCONJA_OFFSET UNITYSDK_OFFSET(0xB48B540)
#define BHNJCLDGONG_GLHGHJKPHKO_OFFSET UNITYSDK_OFFSET(0xB48DFF0)
#define BHNJCLDGONG_GMNBJOEOLOA_OFFSET UNITYSDK_OFFSET(0xB48DB70)
#define BHNJCLDGONG_HIBDPCBEKIN_OFFSET UNITYSDK_OFFSET(0xB48B640)
#define BHNJCLDGONG_IGDGPHGHLCO_OFFSET UNITYSDK_OFFSET(0xB48D2B0)
#define BHNJCLDGONG_KEBCMOIBNAG_OFFSET UNITYSDK_OFFSET(0xB48CED0)
#define BHNJCLDGONG_NBDKILMKILK_OFFSET UNITYSDK_OFFSET(0xB48D090)
#define BHNJCLDGONG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB48B290)
#define BHNJCLDGONG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB48BDE0)
#define BHNJCLDGONG_POADJINDKPH_OFFSET UNITYSDK_OFFSET(0xB48CC60)
#define BHNJCLDGONG_TICK_OFFSET UNITYSDK_OFFSET(0xB48BE80)

inline static constexpr unsigned int BHNJCLDGONG_TypeDefinitionIndex = 58657;

	class BHNJCLDGONG : public ::GELIALJDFBL
	{
	public:
		::CKJALKLPNKB* GNEFMGHCILF; // 0x18
		::GHPJHIMKMPF* EIFGEIFAGNM; // 0x20
		::RPG::GameCore::ShowGuideHintWithText* OFKGLJOAMLD; // 0x28
		::KDJNAAOFMMJ* NNFJKIPMAAI; // 0x30
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
		::KKIJDPKIIKL* EMCDEOIEFEA; // 0x40
		::System::Collections::Generic::IList_1<::System::String*>* EGINIHPMDGE; // 0x48
		::System::Single IJAJOGNGEIK; // 0x50
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowGuideHintWithText* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowGuideHintWithText*))((::PBYTE)hIl2Cpp + BHNJCLDGONG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHNJCLDGONG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHNJCLDGONG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHNJCLDGONG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BHNJCLDGONG_TICK_OFFSET))(this, a1);
		}

		::System::Void EDBPHODBFCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHNJCLDGONG_EDBPHODBFCP_OFFSET))(this);
		}

		::System::Void BLBGBLLHDAB(::RPG::GameCore::TaskState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskState))((::PBYTE)hIl2Cpp + BHNJCLDGONG_BLBGBLLHDAB_OFFSET))(this, a1);
		}

		::System::Void FHDOJIOBGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHNJCLDGONG_FHDOJIOBGPA_OFFSET))(this);
		}

		::System::Void FDEFNMJBGML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHNJCLDGONG_FDEFNMJBGML_OFFSET))(this);
		}

		::System::Void KEBCMOIBNAG(::UnityEngine::Rect a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + BHNJCLDGONG_KEBCMOIBNAG_OFFSET))(this, a1, a2);
		}

		::System::Void DJEBPFFBMPB(::UnityEngine::Rect a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + BHNJCLDGONG_DJEBPFFBMPB_OFFSET))(this, a1, a2);
		}

		::System::Void NBDKILMKILK(::UnityEngine::Rect a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + BHNJCLDGONG_NBDKILMKILK_OFFSET))(this, a1, a2);
		}

		::System::Void POADJINDKPH(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + BHNJCLDGONG_POADJINDKPH_OFFSET))(this, a1);
		}

		::System::Void IGDGPHGHLCO(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + BHNJCLDGONG_IGDGPHGHLCO_OFFSET))(this, a1);
		}

		::System::String* GMNBJOEOLOA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHNJCLDGONG_GMNBJOEOLOA_OFFSET))(this);
		}

		::System::String* GLHGHJKPHKO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHNJCLDGONG_GLHGHJKPHKO_OFFSET))(this);
		}

		::System::Void BNBLIBLDHLI(::RPG::Client::TutorialGuideConfigWrapper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TutorialGuideConfigWrapper*))((::PBYTE)hIl2Cpp + BHNJCLDGONG_BNBLIBLDHLI_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IList_1<::System::String*>* HIBDPCBEKIN(::System::Collections::Generic::IList_1<::System::String*>* a1)
		{
			return ((::System::Collections::Generic::IList_1<::System::String*>*(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + BHNJCLDGONG_HIBDPCBEKIN_OFFSET))(this, a1);
		}

		::RPG::Client::TutorialBlockType GCDKHNCONJA()
		{
			return ((::RPG::Client::TutorialBlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + BHNJCLDGONG_GCDKHNCONJA_OFFSET))(this);
		}

		::System::Void FBGHGOFHLAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHNJCLDGONG_FBGHGOFHLAA_OFFSET))(this);
		}

	};
