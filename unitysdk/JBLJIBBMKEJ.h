#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DamageTextTeamPoolConfig; }

#define JBLJIBBMKEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16572B30)
#define JBLJIBBMKEJ_GFPOBHCKLIA_OFFSET UNITYSDK_OFFSET(0x16572870)
#define JBLJIBBMKEJ_JFDIIACPHPL_OFFSET UNITYSDK_OFFSET(0x16572A50)
#define JBLJIBBMKEJ_KLMEAMADDCJ_OFFSET UNITYSDK_OFFSET(0x165729C0)

inline static constexpr unsigned int JBLJIBBMKEJ_TypeDefinitionIndex = 72127;

	class JBLJIBBMKEJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBLJIBBMKEJ_CTOR_OFFSET))(this);
		}

		static ::System::Void GFPOBHCKLIA(::System::Boolean a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JBLJIBBMKEJ_GFPOBHCKLIA_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 KLMEAMADDCJ()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + JBLJIBBMKEJ_KLMEAMADDCJ_OFFSET))();
		}

		static ::RPG::GameCore::DamageTextTeamPoolConfig* JFDIIACPHPL(::System::Boolean a1)
		{
			return ((::RPG::GameCore::DamageTextTeamPoolConfig*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + JBLJIBBMKEJ_JFDIIACPHPL_OFFSET))(a1);
		}

	};
