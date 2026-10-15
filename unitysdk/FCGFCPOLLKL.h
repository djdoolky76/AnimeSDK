#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCGFCPOLLKL;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }

#define FCGFCPOLLKL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDD0E00)
#define FCGFCPOLLKL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDD0E20)
#define FCGFCPOLLKL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDD0DA0)

	class FCGFCPOLLKL : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::Single DJFOFCKCEED; // 0x20
		::System::Boolean HAOKIGJPEII; // 0x24
		::System::Byte _padding0[0x3];
		::System::Int32 CNENJELDIFD; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGFCPOLLKL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FCGFCPOLLKL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FCGFCPOLLKL*))((::PBYTE)hIl2Cpp + FCGFCPOLLKL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FCGFCPOLLKL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FCGFCPOLLKL*))((::PBYTE)hIl2Cpp + FCGFCPOLLKL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
