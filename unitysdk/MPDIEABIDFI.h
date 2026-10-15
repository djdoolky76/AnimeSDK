#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MPDIEABIDFI;

#define MPDIEABIDFI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1DDCD0)
#define MPDIEABIDFI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1DDCE0)
#define MPDIEABIDFI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1DDC90)

	class MPDIEABIDFI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean EHEIJCAOOKO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDIEABIDFI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MPDIEABIDFI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MPDIEABIDFI*))((::PBYTE)hIl2Cpp + MPDIEABIDFI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MPDIEABIDFI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MPDIEABIDFI*))((::PBYTE)hIl2Cpp + MPDIEABIDFI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
