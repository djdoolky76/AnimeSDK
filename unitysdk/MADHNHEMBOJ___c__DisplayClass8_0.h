#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ShowAttackTimeParam; }

#define MADHNHEMBOJ___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB844CC0)
#define MADHNHEMBOJ___C__DISPLAYCLASS8_0__GETATTACKTIME_B__0_OFFSET UNITYSDK_OFFSET(0xB844CD0)

inline static constexpr unsigned int MADHNHEMBOJ___c__DisplayClass8_0_TypeDefinitionIndex = 71208;

	class MADHNHEMBOJ___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::UInt32 runtimeID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAttackTime_b__0(::RPG::Client::ShowAttackTimeParam* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ShowAttackTimeParam*))((::PBYTE)hIl2Cpp + MADHNHEMBOJ___C__DISPLAYCLASS8_0__GETATTACKTIME_B__0_OFFSET))(this, a1);
		}

	};
