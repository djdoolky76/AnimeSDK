#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class MGCHPMCOENF;

#define MGCHPMCOENF_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBADD20)
#define MGCHPMCOENF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1BBADBA0)

inline static constexpr unsigned int MGCHPMCOENF_TypeDefinitionIndex = 11220;

	class MGCHPMCOENF : public ::System::Object
	{
	public:
		::System::Single EBJKJAGJGPK; // 0x10
		::System::Single KIBPKPGDECO; // 0x14
		::System::Single GAOAMKBNDPN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGCHPMCOENF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MGCHPMCOENF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MGCHPMCOENF*))((::PBYTE)hIl2Cpp + MGCHPMCOENF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
