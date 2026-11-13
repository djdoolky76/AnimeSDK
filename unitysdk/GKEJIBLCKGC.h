#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKEJIBLCKGC;
namespace RPG::Client { class UIController; }
namespace System { class Action; }

#define GKEJIBLCKGC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1A8D1570)
#define GKEJIBLCKGC_CTOR_OFFSET UNITYSDK_OFFSET(0x1A8D1560)
#define GKEJIBLCKGC_GHKIPINMDNE_OFFSET UNITYSDK_OFFSET(0x1A8D1620)
#define GKEJIBLCKGC_GJKNNAANGFA_OFFSET UNITYSDK_OFFSET(0x1A8D15E0)
#define GKEJIBLCKGC_LAHEAEFEFIA_OFFSET UNITYSDK_OFFSET(0x1A8D1890)
#define GKEJIBLCKGC_MCKGCIOFEDI_OFFSET UNITYSDK_OFFSET(0x1A8D17F0)
#define GKEJIBLCKGC_NNAGLJCMMGD_OFFSET UNITYSDK_OFFSET(0x1A8D1850)
#define GKEJIBLCKGC_NONJDKKDDLE_OFFSET UNITYSDK_OFFSET(0x1A8D1720)

inline static constexpr unsigned int GKEJIBLCKGC_TypeDefinitionIndex = 61767;

	class GKEJIBLCKGC : public ::System::Object
	{
	public:
		::RPG::Client::UIController* JONJFNGDLKI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEJIBLCKGC_CTOR_OFFSET))(this);
		}

		static ::GKEJIBLCKGC* BPLPBPMEODA()
		{
			return ((::GKEJIBLCKGC*(*)())((::PBYTE)hIl2Cpp + GKEJIBLCKGC_BPLPBPMEODA_OFFSET))();
		}

		::System::Boolean GJKNNAANGFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEJIBLCKGC_GJKNNAANGFA_OFFSET))(this);
		}

		::System::Void GHKIPINMDNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEJIBLCKGC_GHKIPINMDNE_OFFSET))(this);
		}

		::System::Void NONJDKKDDLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEJIBLCKGC_NONJDKKDDLE_OFFSET))(this);
		}

		::System::Void MCKGCIOFEDI(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GKEJIBLCKGC_MCKGCIOFEDI_OFFSET))(this, a1);
		}

		::System::Void NNAGLJCMMGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEJIBLCKGC_NNAGLJCMMGD_OFFSET))(this);
		}

		::System::Void LAHEAEFEFIA(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GKEJIBLCKGC_LAHEAEFEFIA_OFFSET))(this, a1);
		}

	};
