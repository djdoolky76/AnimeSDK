#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KDPMPGNABPF;
namespace System { class String; }

#define KDPMPGNABPF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D087870)
#define KDPMPGNABPF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D087880)
#define KDPMPGNABPF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D087840)

	class KDPMPGNABPF : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* MMMJJJOGBBI; // 0x18
		::System::Boolean GEOPPFCKACN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPMPGNABPF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KDPMPGNABPF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KDPMPGNABPF*))((::PBYTE)hIl2Cpp + KDPMPGNABPF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KDPMPGNABPF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KDPMPGNABPF*))((::PBYTE)hIl2Cpp + KDPMPGNABPF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
