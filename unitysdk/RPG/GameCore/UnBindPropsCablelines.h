#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UnBindPropsCablelines; }

#define RPG_GAMECORE_UNBINDPROPSCABLELINES_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC449D0)
#define RPG_GAMECORE_UNBINDPROPSCABLELINES_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC449E0)
#define RPG_GAMECORE_UNBINDPROPSCABLELINES_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC449A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnBindPropsCablelines_TypeDefinitionIndex = 21270;

	class UnBindPropsCablelines : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 LinePropInstanceID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNBINDPROPSCABLELINES_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UnBindPropsCablelines* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UnBindPropsCablelines*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNBINDPROPSCABLELINES_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UnBindPropsCablelines* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UnBindPropsCablelines*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNBINDPROPSCABLELINES_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
