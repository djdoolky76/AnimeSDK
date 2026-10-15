#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOAKKHJBMHJ.h"
#include "unitysdk/JKMJGCFCMMC.h"
class FCOEMCEDLNL;
class IKDAKCBKFAB;
namespace RPG::GameCore { class DynamicFloat; }

#define IKDAKCBKFAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CF1ACF0)
#define IKDAKCBKFAB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CF1AD00)
#define IKDAKCBKFAB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CF1ACC0)

	class IKDAKCBKFAB : public ::JKMJGCFCMMC
	{
	public:
		::RPG::GameCore::DynamicFloat* HOCMHABKLGJ; // 0x10
		::FOAKKHJBMHJ GMPGDEINODK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDAKCBKFAB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IKDAKCBKFAB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IKDAKCBKFAB*))((::PBYTE)hIl2Cpp + IKDAKCBKFAB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::IKDAKCBKFAB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IKDAKCBKFAB*))((::PBYTE)hIl2Cpp + IKDAKCBKFAB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
