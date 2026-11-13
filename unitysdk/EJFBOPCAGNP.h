#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class EJFBOPCAGNP;
class FCOEMCEDLNL;

#define EJFBOPCAGNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1199D0)
#define EJFBOPCAGNP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F1199E0)
#define EJFBOPCAGNP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F1199A0)

inline static constexpr unsigned int EJFBOPCAGNP_TypeDefinitionIndex = 21881;

	class EJFBOPCAGNP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single IEHPFADHJFD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFBOPCAGNP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EJFBOPCAGNP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EJFBOPCAGNP*))((::PBYTE)hIl2Cpp + EJFBOPCAGNP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EJFBOPCAGNP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EJFBOPCAGNP*))((::PBYTE)hIl2Cpp + EJFBOPCAGNP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
