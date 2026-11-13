#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJJODAICACC;
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertSceneRoot; }

#define CBEHFOHEBJA_CTOR_OFFSET UNITYSDK_OFFSET(0x18FD69E0)
#define CBEHFOHEBJA_GMMPDHKEENL_OFFSET UNITYSDK_OFFSET(0x18FD68E0)
#define CBEHFOHEBJA_HKGGOFJDBCH_OFFSET UNITYSDK_OFFSET(0x18FD6960)

inline static constexpr unsigned int CBEHFOHEBJA_TypeDefinitionIndex = 79939;

	class CBEHFOHEBJA : public ::System::Object
	{
	public:
		::PJJODAICACC* ENHJNFHIKJA; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEHFOHEBJA_CTOR_OFFSET))(this);
		}

		::System::Void GMMPDHKEENL(::RPG::Client::LittleGame::ComicDessert::ComicDessertSceneRoot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertSceneRoot*))((::PBYTE)hIl2Cpp + CBEHFOHEBJA_GMMPDHKEENL_OFFSET))(this, a1);
		}

		::System::Void HKGGOFJDBCH(::RPG::Client::LittleGame::ComicDessert::ComicDessertSceneRoot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertSceneRoot*))((::PBYTE)hIl2Cpp + CBEHFOHEBJA_HKGGOFJDBCH_OFFSET))(this, a1);
		}

	};
