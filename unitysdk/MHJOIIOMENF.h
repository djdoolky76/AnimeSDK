#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MHJOIIOMENF;
namespace System { class String; }

#define MHJOIIOMENF_CTOR_OFFSET UNITYSDK_OFFSET(0x1F583F20)
#define MHJOIIOMENF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F583F30)
#define MHJOIIOMENF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F583EF0)

inline static constexpr unsigned int MHJOIIOMENF_TypeDefinitionIndex = 24055;

	class MHJOIIOMENF : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CIDCEJCGOGB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJOIIOMENF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MHJOIIOMENF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MHJOIIOMENF*))((::PBYTE)hIl2Cpp + MHJOIIOMENF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MHJOIIOMENF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MHJOIIOMENF*))((::PBYTE)hIl2Cpp + MHJOIIOMENF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
