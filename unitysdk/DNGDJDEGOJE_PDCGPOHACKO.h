#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNGDJDEGOJE_HKBFBKMNIGA.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/GameCore/BattleOperationType.h"
namespace System { class Object; }

#define DNGDJDEGOJE_PDCGPOHACKO_BOHEGOONIFJ_OFFSET UNITYSDK_OFFSET(0x126E1780)
#define DNGDJDEGOJE_PDCGPOHACKO_CTOR_OFFSET UNITYSDK_OFFSET(0x126E07E0)
#define DNGDJDEGOJE_PDCGPOHACKO_HLHAKABEAFI_OFFSET UNITYSDK_OFFSET(0x126E1660)
#define DNGDJDEGOJE_PDCGPOHACKO_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0x126E16F0)
#define DNGDJDEGOJE_PDCGPOHACKO_MOOJDEGGECP_OFFSET UNITYSDK_OFFSET(0x126E1730)

inline static constexpr unsigned int DNGDJDEGOJE_PDCGPOHACKO_TypeDefinitionIndex = 60145;

	class DNGDJDEGOJE_PDCGPOHACKO : public ::DNGDJDEGOJE_HKBFBKMNIGA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_PDCGPOHACKO_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::BattleOperationType>* HLHAKABEAFI()
		{
			return ((::Il2CppArray<::RPG::GameCore::BattleOperationType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_PDCGPOHACKO_HLHAKABEAFI_OFFSET))(this);
		}

		::System::Boolean KKKIONIDKFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_PDCGPOHACKO_KKKIONIDKFA_OFFSET))(this);
		}

		::System::Boolean MOOJDEGGECP(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_PDCGPOHACKO_MOOJDEGGECP_OFFSET))(this, a1);
		}

		::RPG::Client::NotifyType BOHEGOONIFJ()
		{
			return ((::RPG::Client::NotifyType(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_PDCGPOHACKO_BOHEGOONIFJ_OFFSET))(this);
		}

	};
