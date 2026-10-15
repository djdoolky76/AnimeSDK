#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMPGIJPAGBL;
class LMKDIBLJBOG;
namespace RPG::Client::CakeRace { class CakeRaceGameFlow; }
namespace RPG::Client::CakeRace { class CakeRaceGameplayContext; }
namespace System { class Action; }

#define HMPGIJPAGBL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15D8A850)
#define HMPGIJPAGBL_CTOR_OFFSET UNITYSDK_OFFSET(0x15D8A8C0)
#define HMPGIJPAGBL_GGBMPEBBHHB_OFFSET UNITYSDK_OFFSET(0x15D8A630)
#define HMPGIJPAGBL_GHKIPINMDNE_OFFSET UNITYSDK_OFFSET(0x15D8A910)
#define HMPGIJPAGBL_GJKNNAANGFA_OFFSET UNITYSDK_OFFSET(0x15D8A8D0)
#define HMPGIJPAGBL_ICEGNJONKIB_OFFSET UNITYSDK_OFFSET(0x15D8A590)
#define HMPGIJPAGBL_LAHEAEFEFIA_OFFSET UNITYSDK_OFFSET(0x15D8AAA0)
#define HMPGIJPAGBL_MAHCNMHMPAI_OFFSET UNITYSDK_OFFSET(0x15D8A710)
#define HMPGIJPAGBL_MCKGCIOFEDI_OFFSET UNITYSDK_OFFSET(0x15D8A990)
#define HMPGIJPAGBL_NNAGLJCMMGD_OFFSET UNITYSDK_OFFSET(0x15D8AA60)
#define HMPGIJPAGBL_NONJDKKDDLE_OFFSET UNITYSDK_OFFSET(0x15D8A950)

inline static constexpr unsigned int HMPGIJPAGBL_TypeDefinitionIndex = 76426;

	class HMPGIJPAGBL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMPGIJPAGBL_CTOR_OFFSET))(this);
		}

		::RPG::Client::CakeRace::CakeRaceGameFlow* ICEGNJONKIB()
		{
			return ((::RPG::Client::CakeRace::CakeRaceGameFlow*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMPGIJPAGBL_ICEGNJONKIB_OFFSET))(this);
		}

		::RPG::Client::CakeRace::CakeRaceGameplayContext* GGBMPEBBHHB()
		{
			return ((::RPG::Client::CakeRace::CakeRaceGameplayContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMPGIJPAGBL_GGBMPEBBHHB_OFFSET))(this);
		}

		::LMKDIBLJBOG* MAHCNMHMPAI()
		{
			return ((::LMKDIBLJBOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMPGIJPAGBL_MAHCNMHMPAI_OFFSET))(this);
		}

		static ::HMPGIJPAGBL* BPLPBPMEODA()
		{
			return ((::HMPGIJPAGBL*(*)())((::PBYTE)hIl2Cpp + HMPGIJPAGBL_BPLPBPMEODA_OFFSET))();
		}

		::System::Boolean GJKNNAANGFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HMPGIJPAGBL_GJKNNAANGFA_OFFSET))(this);
		}

		::System::Void GHKIPINMDNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMPGIJPAGBL_GHKIPINMDNE_OFFSET))(this);
		}

		::System::Void NONJDKKDDLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMPGIJPAGBL_NONJDKKDDLE_OFFSET))(this);
		}

		::System::Void MCKGCIOFEDI(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HMPGIJPAGBL_MCKGCIOFEDI_OFFSET))(this, a1);
		}

		::System::Void NNAGLJCMMGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMPGIJPAGBL_NNAGLJCMMGD_OFFSET))(this);
		}

		::System::Void LAHEAEFEFIA(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HMPGIJPAGBL_LAHEAEFEFIA_OFFSET))(this, a1);
		}

	};
