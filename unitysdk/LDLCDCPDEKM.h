#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class MOGBCMFMAGC;
namespace RPG::GameCore { class ShowFrameCaptureUI; }
namespace RPG::GameCore { class TaskContext; }

#define LDLCDCPDEKM_CTOR_OFFSET UNITYSDK_OFFSET(0x1AC92590)
#define LDLCDCPDEKM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AC925A0)
#define LDLCDCPDEKM_FCOFMNEHHOG_OFFSET UNITYSDK_OFFSET(0x1AC92790)
#define LDLCDCPDEKM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AC925E0)
#define LDLCDCPDEKM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1AC928D0)
#define LDLCDCPDEKM_TICK_OFFSET UNITYSDK_OFFSET(0x1AC92920)

inline static constexpr unsigned int LDLCDCPDEKM_TypeDefinitionIndex = 57674;

	class LDLCDCPDEKM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ShowFrameCaptureUI* OFKGLJOAMLD; // 0x20
		::MOGBCMFMAGC* LCNCPBDIKKK; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowFrameCaptureUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowFrameCaptureUI*))((::PBYTE)hIl2Cpp + LDLCDCPDEKM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLCDCPDEKM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLCDCPDEKM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLCDCPDEKM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LDLCDCPDEKM_TICK_OFFSET))(this, a1);
		}

		::System::Void FCOFMNEHHOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLCDCPDEKM_FCOFMNEHHOG_OFFSET))(this);
		}

	};
