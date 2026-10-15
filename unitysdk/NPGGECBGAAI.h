#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NPGGECBGAAI;
namespace RPG::GameCore { class ChenLingFesTargetConfig; }
namespace System { class String; }

#define NPGGECBGAAI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D246020)
#define NPGGECBGAAI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D246030)
#define NPGGECBGAAI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D245FF0)

	class NPGGECBGAAI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ChenLingFesTargetConfig* GMJKHCGCNKA; // 0x18
		::System::String* KHCGJGHEGOC; // 0x20
		::System::String* DFPHHJLDMBG; // 0x28
		::System::String* PBCOKCDEACK; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGGECBGAAI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NPGGECBGAAI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NPGGECBGAAI*))((::PBYTE)hIl2Cpp + NPGGECBGAAI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NPGGECBGAAI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NPGGECBGAAI*))((::PBYTE)hIl2Cpp + NPGGECBGAAI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
