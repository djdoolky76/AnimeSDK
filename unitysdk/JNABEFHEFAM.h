#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPEPPDMLPLG.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class BEMKNPIFMBI;
namespace RPG::GameCore { class AIDecisionBaseConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JNABEFHEFAM_CTOR_OFFSET UNITYSDK_OFFSET(0xB2744E0)
#define JNABEFHEFAM_HOIEGOENFHG_OFFSET UNITYSDK_OFFSET(0xB274670)
#define JNABEFHEFAM_MNAKIEOGPDK_OFFSET UNITYSDK_OFFSET(0xB274740)

inline static constexpr unsigned int JNABEFHEFAM_TypeDefinitionIndex = 54390;

	class JNABEFHEFAM : public ::JPEPPDMLPLG
	{
	public:
		::RPG::GameCore::AIDecisionBaseConfig* IGHAHBNLIJA; // 0x10
		::System::Collections::Generic::List_1<::BEMKNPIFMBI*>* JGNOCCOBAGF; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::AIDecisionBaseConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AIDecisionBaseConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + JNABEFHEFAM_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint HOIEGOENFHG(::RPG::GameCore::FixPoint a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::Int32))((::PBYTE)hIl2Cpp + JNABEFHEFAM_HOIEGOENFHG_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint MNAKIEOGPDK()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JNABEFHEFAM_MNAKIEOGPDK_OFFSET))(this);
		}

	};
