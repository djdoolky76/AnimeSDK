#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMPICAPOOFD.h"
#include "unitysdk/RPG/Client/FateGameStateType.h"
class OFKKIMABHJD;
namespace RPG::Client { class UIController; }
namespace System { class Object; }

#define FJDAIGNBAMP_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0x157C2A40)
#define FJDAIGNBAMP_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x157C28E0)
#define FJDAIGNBAMP_CTOR_OFFSET UNITYSDK_OFFSET(0x157C28D0)
#define FJDAIGNBAMP_HMLAIMFHKLI_OFFSET UNITYSDK_OFFSET(0x157C2B40)
#define FJDAIGNBAMP_KCNDJOIPEFE_OFFSET UNITYSDK_OFFSET(0x157C2D00)

	class FJDAIGNBAMP : public ::BMPICAPOOFD
	{
	public:
		::RPG::Client::UIController* NJGMENOFECG; // 0x18
		::RPG::Client::UIController* BCPBNJGFPEA; // 0x20
		::RPG::Client::UIController* FAJFHDCOEGE; // 0x28
		::System::Void _ctor(::OFKKIMABHJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFKKIMABHJD*))((::PBYTE)hIl2Cpp + FJDAIGNBAMP_CTOR_OFFSET))(this, a1);
		}

		::System::Void CLJEBKODGHK(::RPG::Client::FateGameStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + FJDAIGNBAMP_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void AHEEAFKFALM(::RPG::Client::FateGameStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + FJDAIGNBAMP_AHEEAFKFALM_OFFSET))(this, a1);
		}

		::System::Void HMLAIMFHKLI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJDAIGNBAMP_HMLAIMFHKLI_OFFSET))(this, a1);
		}

		::System::Void KCNDJOIPEFE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJDAIGNBAMP_KCNDJOIPEFE_OFFSET))(this, a1);
		}

	};
