#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GLHMMLODNHN;
namespace RPG::GameCore { class DynamicFloat; }

#define GLHMMLODNHN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E656B30)
#define GLHMMLODNHN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E656B40)
#define GLHMMLODNHN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E656B00)

inline static constexpr unsigned int GLHMMLODNHN_TypeDefinitionIndex = 23673;

	class GLHMMLODNHN : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ACCJKGEKHKP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLHMMLODNHN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GLHMMLODNHN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GLHMMLODNHN*))((::PBYTE)hIl2Cpp + GLHMMLODNHN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GLHMMLODNHN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GLHMMLODNHN*))((::PBYTE)hIl2Cpp + GLHMMLODNHN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
