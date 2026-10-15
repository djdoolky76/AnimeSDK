#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }

#define ANNIAPOEFGG_BKHIOCIFADE_OFFSET UNITYSDK_OFFSET(0x2E794E0)
#define ANNIAPOEFGG_CDOBIIKAFGD_OFFSET UNITYSDK_OFFSET(0x2E79410)
#define ANNIAPOEFGG_CTOR_OFFSET UNITYSDK_OFFSET(0xB310)
#define ANNIAPOEFGG_IHELHEBDBJF_OFFSET UNITYSDK_OFFSET(0x2E79550)
#define ANNIAPOEFGG_KFGPKEIENDC_OFFSET UNITYSDK_OFFSET(0x2E79470)

inline static constexpr unsigned int ANNIAPOEFGG_TypeDefinitionIndex = 53519;

	struct alignas(8) ANNIAPOEFGG
	{
		::Il2CppArray<::RPG::GameCore::GameEntity*>* JAPBDCBHCKN; // 0x10
		::Il2CppArray<::System::Boolean>* IBOPFHFMCPL; // 0x18
		::Il2CppArray<::System::Boolean>* JKFGHPCJKAE; // 0x20
		::System::Void _ctor(::Il2CppArray<::RPG::GameCore::GameEntity*>* a1, ::Il2CppArray<::System::Boolean>* a2, ::Il2CppArray<::System::Boolean>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::GameEntity*>*, ::Il2CppArray<::System::Boolean>*, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + ANNIAPOEFGG_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 CDOBIIKAFGD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNIAPOEFGG_CDOBIIKAFGD_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* KFGPKEIENDC(::System::Int32 a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ANNIAPOEFGG_KFGPKEIENDC_OFFSET))(this, a1);
		}

		::System::Boolean BKHIOCIFADE(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ANNIAPOEFGG_BKHIOCIFADE_OFFSET))(this, a1);
		}

		::System::Boolean IHELHEBDBJF(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ANNIAPOEFGG_IHELHEBDBJF_OFFSET))(this, a1);
		}

	};
