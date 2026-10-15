#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNGDJDEGOJE_HKBFBKMNIGA.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/GameCore/BattleOperationType.h"
namespace System { class Object; }

#define DNGDJDEGOJE_GBHLFGFBMPC_BOHEGOONIFJ_OFFSET UNITYSDK_OFFSET(0x1194E9D0)
#define DNGDJDEGOJE_GBHLFGFBMPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1194E8A0)
#define DNGDJDEGOJE_GBHLFGFBMPC_HLHAKABEAFI_OFFSET UNITYSDK_OFFSET(0x1194E8E0)
#define DNGDJDEGOJE_GBHLFGFBMPC_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0x1194E980)
#define DNGDJDEGOJE_GBHLFGFBMPC_MOOJDEGGECP_OFFSET UNITYSDK_OFFSET(0x1194EA20)

inline static constexpr unsigned int DNGDJDEGOJE_GBHLFGFBMPC_TypeDefinitionIndex = 58870;

	class DNGDJDEGOJE_GBHLFGFBMPC : public ::DNGDJDEGOJE_HKBFBKMNIGA
	{
	public:
		::System::Int32 FFNBLDFFMCN; // 0x20
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_GBHLFGFBMPC_CTOR_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::BattleOperationType>* HLHAKABEAFI()
		{
			return ((::Il2CppArray<::RPG::GameCore::BattleOperationType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_GBHLFGFBMPC_HLHAKABEAFI_OFFSET))(this);
		}

		::System::Boolean KKKIONIDKFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_GBHLFGFBMPC_KKKIONIDKFA_OFFSET))(this);
		}

		::RPG::Client::NotifyType BOHEGOONIFJ()
		{
			return ((::RPG::Client::NotifyType(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_GBHLFGFBMPC_BOHEGOONIFJ_OFFSET))(this);
		}

		::System::Boolean MOOJDEGGECP(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_GBHLFGFBMPC_MOOJDEGGECP_OFFSET))(this, a1);
		}

	};
