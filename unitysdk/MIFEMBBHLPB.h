#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LimaoNewsIssueHintPopupShowType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class MIFEMBBHLPB;

#define MIFEMBBHLPB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D185070)
#define MIFEMBBHLPB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D184DD0)

inline static constexpr unsigned int MIFEMBBHLPB_TypeDefinitionIndex = 13909;

	class MIFEMBBHLPB : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BDKECJFBAJJ; // 0x10
		::Il2CppArray<::System::UInt32>* OOKJNEGICEI; // 0x18
		::Il2CppArray<::System::UInt32>* OMLFNLJDHKG; // 0x20
		::Il2CppArray<::System::UInt32>* LIDHGBEAJMA; // 0x28
		::RPG::GameCore::LimaoNewsIssueHintPopupShowType CFKKNEHABHH; // 0x30
		::System::UInt32 AEONKNDCDKN; // 0x34
		::System::UInt32 IHALCLABNOJ; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIFEMBBHLPB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MIFEMBBHLPB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MIFEMBBHLPB*))((::PBYTE)hIl2Cpp + MIFEMBBHLPB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
