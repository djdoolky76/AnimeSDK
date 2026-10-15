#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropSetVisibility; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_PROPSETVISIBILITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D954690)
#define RPG_GAMECORE_PROPSETVISIBILITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9546C0)
#define RPG_GAMECORE_PROPSETVISIBILITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D954640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSetVisibility_TypeDefinitionIndex = 20397;

	class PropSetVisibility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Visible; // 0x18
		::System::Byte _padding0[0x7];
		::Il2CppArray<::System::String*>* SpecifiedRelativePaths; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETVISIBILITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropSetVisibility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropSetVisibility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETVISIBILITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropSetVisibility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropSetVisibility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETVISIBILITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
