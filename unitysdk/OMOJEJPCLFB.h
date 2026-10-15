#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class OMOJEJPCLFB;
namespace RPG::GameCore { class TaskConfig; }

#define OMOJEJPCLFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D29E490)
#define OMOJEJPCLFB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D29E4A0)
#define OMOJEJPCLFB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D29E460)

	class OMOJEJPCLFB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* PAHHNMLMNLN; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* DNCFBGANPCD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMOJEJPCLFB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OMOJEJPCLFB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OMOJEJPCLFB*))((::PBYTE)hIl2Cpp + OMOJEJPCLFB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OMOJEJPCLFB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OMOJEJPCLFB*))((::PBYTE)hIl2Cpp + OMOJEJPCLFB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
