#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class MOGBCMFMAGC;
namespace RPG::GameCore { class ShowFrameCaptureUI; }
namespace RPG::GameCore { class TaskContext; }

#define LDLCDCPDEKM_CTOR_OFFSET UNITYSDK_OFFSET(0xB630320)
#define LDLCDCPDEKM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB630330)
#define LDLCDCPDEKM_FCOFMNEHHOG_OFFSET UNITYSDK_OFFSET(0xB630750)
#define LDLCDCPDEKM_JMOKODNFEPG_OFFSET UNITYSDK_OFFSET(0xB630610)
#define LDLCDCPDEKM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB630370)
#define LDLCDCPDEKM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB630890)
#define LDLCDCPDEKM_TICK_OFFSET UNITYSDK_OFFSET(0xB6308E0)

inline static constexpr unsigned int LDLCDCPDEKM_TypeDefinitionIndex = 56456;

	class LDLCDCPDEKM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowFrameCaptureUI* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
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

		::System::Void JMOKODNFEPG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLCDCPDEKM_JMOKODNFEPG_OFFSET))(this);
		}

	};
