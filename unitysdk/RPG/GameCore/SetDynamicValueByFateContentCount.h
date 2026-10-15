#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByFateContentCount; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYFATECONTENTCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA76D80)
#define RPG_GAMECORE_SETDYNAMICVALUEBYFATECONTENTCOUNT_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DA76F70)
#define RPG_GAMECORE_SETDYNAMICVALUEBYFATECONTENTCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA76D90)
#define RPG_GAMECORE_SETDYNAMICVALUEBYFATECONTENTCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA76D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByFateContentCount_TypeDefinitionIndex = 23286;

	class SetDynamicValueByFateContentCount : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::UInt32 HouguID; // 0x18
		::System::UInt32 AffixID; // 0x1C
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* DynamicKey; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYFATECONTENTCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByFateContentCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByFateContentCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYFATECONTENTCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByFateContentCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByFateContentCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYFATECONTENTCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYFATECONTENTCOUNT_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
