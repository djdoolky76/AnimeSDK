#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesTargetType.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class PFCDAPDAHNH;
namespace RPG::GameCore { class ChenLingFesTargetConfig; }
namespace System { class String; }

#define PFCDAPDAHNH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2D9E70)
#define PFCDAPDAHNH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2D9E80)
#define PFCDAPDAHNH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2D9E40)

	class PFCDAPDAHNH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ChenLingFesTargetConfig* GMJKHCGCNKA; // 0x18
		::System::String* IEHPFADHJFD; // 0x20
		::RPG::GameCore::ChenLingFesTargetType HILNFHCPEAD; // 0x28
		::RPG::GameCore::LittleGameEntityType EAMICGDAKCN; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFCDAPDAHNH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PFCDAPDAHNH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PFCDAPDAHNH*))((::PBYTE)hIl2Cpp + PFCDAPDAHNH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PFCDAPDAHNH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PFCDAPDAHNH*))((::PBYTE)hIl2Cpp + PFCDAPDAHNH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
