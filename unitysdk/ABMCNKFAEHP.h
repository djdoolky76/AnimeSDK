#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPEPPDMLPLG.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class BEMKNPIFMBI;
namespace RPG::GameCore { class AIDecisionBaseConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ABMCNKFAEHP_CTOR_OFFSET UNITYSDK_OFFSET(0xB1086D0)
#define ABMCNKFAEHP_HOIEGOENFHG_OFFSET UNITYSDK_OFFSET(0xB108860)
#define ABMCNKFAEHP_MNAKIEOGPDK_OFFSET UNITYSDK_OFFSET(0xB1088F0)

inline static constexpr unsigned int ABMCNKFAEHP_TypeDefinitionIndex = 54391;

	class ABMCNKFAEHP : public ::JPEPPDMLPLG
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x10
		::System::Collections::Generic::List_1<::BEMKNPIFMBI*>* JGNOCCOBAGF; // 0x18
		::RPG::GameCore::AIDecisionBaseConfig* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::AIDecisionBaseConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AIDecisionBaseConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + ABMCNKFAEHP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single HOIEGOENFHG(::System::Single a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + ABMCNKFAEHP_HOIEGOENFHG_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint MNAKIEOGPDK()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMCNKFAEHP_MNAKIEOGPDK_OFFSET))(this);
		}

	};
