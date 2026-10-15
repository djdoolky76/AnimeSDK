#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJHHFMBOCEN.h"
class DLFINJBAEIG;
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCatMonoView; }
namespace System { class String; }

#define DLFINJBAEIG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xF89ED40)
#define DLFINJBAEIG_CTOR_OFFSET UNITYSDK_OFFSET(0xF89EEC0)
#define DLFINJBAEIG_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xF89EE50)
#define DLFINJBAEIG_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xF89EDD0)

inline static constexpr unsigned int DLFINJBAEIG_TypeDefinitionIndex = 78173;

	class DLFINJBAEIG : public ::AJHHFMBOCEN
	{
	public:
		::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* FOIJHDEGJMM; // 0x20
		::System::String* GLGOFGALBHP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLFINJBAEIG_CTOR_OFFSET))(this);
		}

		static ::DLFINJBAEIG* BPLPBPMEODA(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* a1, ::System::String* a2)
		{
			return ((::DLFINJBAEIG*(*)(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView*, ::System::String*))((::PBYTE)hIl2Cpp + DLFINJBAEIG_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLFINJBAEIG_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLFINJBAEIG_ONCLEAR_OFFSET))(this);
		}

	};
