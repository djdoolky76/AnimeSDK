#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class JLBEBAMLGPB;

#define JLBEBAMLGPB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5BF710)
#define JLBEBAMLGPB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E5BF720)
#define JLBEBAMLGPB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E5BF6E0)

inline static constexpr unsigned int JLBEBAMLGPB_TypeDefinitionIndex = 21499;

	class JLBEBAMLGPB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 HIIONDCNIDL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBEBAMLGPB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JLBEBAMLGPB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JLBEBAMLGPB*))((::PBYTE)hIl2Cpp + JLBEBAMLGPB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JLBEBAMLGPB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JLBEBAMLGPB*))((::PBYTE)hIl2Cpp + JLBEBAMLGPB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
