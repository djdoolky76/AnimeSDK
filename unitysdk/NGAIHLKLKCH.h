#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NGAIHLKLKCH;

#define NGAIHLKLKCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2049F0)
#define NGAIHLKLKCH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D204A00)
#define NGAIHLKLKCH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2049C0)

	class NGAIHLKLKCH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::FixPoint IEHPFADHJFD; // 0x18
		::System::Boolean PIFAKJFLGFH; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAIHLKLKCH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NGAIHLKLKCH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NGAIHLKLKCH*))((::PBYTE)hIl2Cpp + NGAIHLKLKCH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NGAIHLKLKCH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NGAIHLKLKCH*))((::PBYTE)hIl2Cpp + NGAIHLKLKCH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
