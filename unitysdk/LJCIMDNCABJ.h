#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LJCIMDNCABJ;
namespace System { class String; }

#define LJCIMDNCABJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F7610)
#define LJCIMDNCABJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E3F7620)
#define LJCIMDNCABJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E3F75E0)

inline static constexpr unsigned int LJCIMDNCABJ_TypeDefinitionIndex = 21834;

	class LJCIMDNCABJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* GFNAPNFFGPJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJCIMDNCABJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LJCIMDNCABJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LJCIMDNCABJ*))((::PBYTE)hIl2Cpp + LJCIMDNCABJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LJCIMDNCABJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LJCIMDNCABJ*))((::PBYTE)hIl2Cpp + LJCIMDNCABJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
