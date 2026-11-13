#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KCMEDJEKHAD;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class UIImageNode; }
namespace RPG::GameCore { class UITextNode; }
namespace System { class String; }

#define KCMEDJEKHAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1F407FB0)
#define KCMEDJEKHAD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F407FF0)
#define KCMEDJEKHAD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F407F50)

inline static constexpr unsigned int KCMEDJEKHAD_TypeDefinitionIndex = 23583;

	class KCMEDJEKHAD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* IFNAGLOMHBK; // 0x18
		::System::String* JKMABBEGEAH; // 0x20
		::Il2CppArray<::RPG::GameCore::UITextNode*>* KDIAKCHPLMN; // 0x28
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x30
		::Il2CppArray<::RPG::GameCore::UIImageNode*>* NMHFBCPCMOK; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMEDJEKHAD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KCMEDJEKHAD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KCMEDJEKHAD*))((::PBYTE)hIl2Cpp + KCMEDJEKHAD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KCMEDJEKHAD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KCMEDJEKHAD*))((::PBYTE)hIl2Cpp + KCMEDJEKHAD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
