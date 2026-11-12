#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertGamePhase.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DPFEPCCHCND.h"
#include "unitysdk/System/Nullable_1.h"

#define MABIMOFMCGI_DPHIJJOIAFA_OFFSET UNITYSDK_OFFSET(0xC09FAD0)
#define MABIMOFMCGI_EPDIKIBENOL_1_OFFSET UNITYSDK_OFFSET(0xC09F920)
#define MABIMOFMCGI_EPDIKIBENOL_OFFSET UNITYSDK_OFFSET(0xC09F8D0)
#define MABIMOFMCGI_FCJACPAGLHE_OFFSET UNITYSDK_OFFSET(0xC09FA10)
#define MABIMOFMCGI_HOLNLGABBPP_1_OFFSET UNITYSDK_OFFSET(0xC09F7D0)
#define MABIMOFMCGI_HOLNLGABBPP_OFFSET UNITYSDK_OFFSET(0xC09F780)
#define MABIMOFMCGI_JKHHJMDNIFO_OFFSET UNITYSDK_OFFSET(0xC09FB60)
#define MABIMOFMCGI_LMNAICFJPJJ_OFFSET UNITYSDK_OFFSET(0xC09FB10)

inline static constexpr unsigned int MABIMOFMCGI_TypeDefinitionIndex = 79817;

	class MABIMOFMCGI : public ::System::Object
	{
	public:
		static ::System::Boolean HOLNLGABBPP(::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase))((::PBYTE)hIl2Cpp + MABIMOFMCGI_HOLNLGABBPP_OFFSET))(a1);
		}

		static ::System::Boolean HOLNLGABBPP_1(::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase a1, ::System::Nullable_1<::DPFEPCCHCND> a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase, ::System::Nullable_1<::DPFEPCCHCND>))((::PBYTE)hIl2Cpp + MABIMOFMCGI_HOLNLGABBPP_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean EPDIKIBENOL(::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase))((::PBYTE)hIl2Cpp + MABIMOFMCGI_EPDIKIBENOL_OFFSET))(a1);
		}

		static ::System::Boolean EPDIKIBENOL_1(::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase a1, ::System::Nullable_1<::DPFEPCCHCND> a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase, ::System::Nullable_1<::DPFEPCCHCND>))((::PBYTE)hIl2Cpp + MABIMOFMCGI_EPDIKIBENOL_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean FCJACPAGLHE(::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase a1, ::System::Nullable_1<::DPFEPCCHCND> a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase, ::System::Nullable_1<::DPFEPCCHCND>))((::PBYTE)hIl2Cpp + MABIMOFMCGI_FCJACPAGLHE_OFFSET))(a1, a2);
		}

		static ::System::Boolean DPHIJJOIAFA(::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase))((::PBYTE)hIl2Cpp + MABIMOFMCGI_DPHIJJOIAFA_OFFSET))(a1);
		}

		static ::System::Boolean LMNAICFJPJJ(::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase))((::PBYTE)hIl2Cpp + MABIMOFMCGI_LMNAICFJPJJ_OFFSET))(a1);
		}

		static ::System::Boolean JKHHJMDNIFO(::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase))((::PBYTE)hIl2Cpp + MABIMOFMCGI_JKHHJMDNIFO_OFFSET))(a1);
		}

	};
