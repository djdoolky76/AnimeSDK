#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class PMOJMJFBDFB;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define PMOJMJFBDFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2DF120)
#define PMOJMJFBDFB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2DF130)
#define PMOJMJFBDFB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2DF0F0)

inline static constexpr unsigned int PMOJMJFBDFB_TypeDefinitionIndex = 21433;

	class PMOJMJFBDFB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* KIGPKLGPDDD; // 0x18
		::System::String* KLHGAHCLCKA; // 0x20
		::RPG::GameCore::DynamicString* MNMHMECGDAK; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMOJMJFBDFB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PMOJMJFBDFB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PMOJMJFBDFB*))((::PBYTE)hIl2Cpp + PMOJMJFBDFB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PMOJMJFBDFB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PMOJMJFBDFB*))((::PBYTE)hIl2Cpp + PMOJMJFBDFB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
