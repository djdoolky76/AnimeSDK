#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KDPMPGNABPF;
namespace System { class String; }

#define KDPMPGNABPF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0598F0)
#define KDPMPGNABPF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D059900)
#define KDPMPGNABPF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0598C0)

inline static constexpr unsigned int KDPMPGNABPF_TypeDefinitionIndex = 22385;

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
