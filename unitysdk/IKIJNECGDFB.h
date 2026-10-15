#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GOCOEDLLDFP;
class IKIJNECGDFB;
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define IKIJNECGDFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEEE7A0)
#define IKIJNECGDFB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CEEE7B0)
#define IKIJNECGDFB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEEE770)

inline static constexpr unsigned int IKIJNECGDFB_TypeDefinitionIndex = 22409;

	class IKIJNECGDFB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::GOCOEDLLDFP*>* FCPLACGGGKP; // 0x18
		::System::String* FKODHMAJOAB; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* JMBDGIALBEN; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKIJNECGDFB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IKIJNECGDFB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IKIJNECGDFB*))((::PBYTE)hIl2Cpp + IKIJNECGDFB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::IKIJNECGDFB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IKIJNECGDFB*))((::PBYTE)hIl2Cpp + IKIJNECGDFB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
