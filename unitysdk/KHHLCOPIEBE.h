#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KHHLCOPIEBE;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define KHHLCOPIEBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D092300)
#define KHHLCOPIEBE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D092310)
#define KHHLCOPIEBE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0922D0)

	class KHHLCOPIEBE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* FMLGGKAFMKC; // 0x18
		::System::String* GFNAPNFFGPJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHHLCOPIEBE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KHHLCOPIEBE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KHHLCOPIEBE*))((::PBYTE)hIl2Cpp + KHHLCOPIEBE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KHHLCOPIEBE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KHHLCOPIEBE*))((::PBYTE)hIl2Cpp + KHHLCOPIEBE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
