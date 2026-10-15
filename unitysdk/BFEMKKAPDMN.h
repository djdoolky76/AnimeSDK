#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamTowersGameOperationType.h"
class BFEMKKAPDMN;
class FCOEMCEDLNL;
namespace System { class String; }

#define BFEMKKAPDMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D64D1D0)
#define BFEMKKAPDMN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D64D1E0)
#define BFEMKKAPDMN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D671CB0)

	class BFEMKKAPDMN : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* NNACKOBKFGE; // 0x18
		::RPG::GameCore::TeamTowersGameOperationType NDJKPABPJHO; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFEMKKAPDMN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BFEMKKAPDMN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BFEMKKAPDMN*))((::PBYTE)hIl2Cpp + BFEMKKAPDMN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BFEMKKAPDMN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BFEMKKAPDMN*))((::PBYTE)hIl2Cpp + BFEMKKAPDMN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
