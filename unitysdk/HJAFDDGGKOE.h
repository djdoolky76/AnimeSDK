#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
class HJAFDDGGKOE;
namespace System { class String; }

#define HJAFDDGGKOE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE873E0)
#define HJAFDDGGKOE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE87110)

inline static constexpr unsigned int HJAFDDGGKOE_TypeDefinitionIndex = 22867;

	class HJAFDDGGKOE : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* JGHAOCCGGPD; // 0x10
		::RPG::MVector3 PPAEKJBDKAD; // 0x18
		::RPG::MVector3 BNGJDBHHMFO; // 0x24
		::System::Single LAJKDIGIBOF; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAFDDGGKOE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HJAFDDGGKOE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HJAFDDGGKOE*))((::PBYTE)hIl2Cpp + HJAFDDGGKOE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
