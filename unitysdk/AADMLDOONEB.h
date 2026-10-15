#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFrame; }

#define AADMLDOONEB_CTOR_OFFSET UNITYSDK_OFFSET(0xB0C0560)
#define AADMLDOONEB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB0C0570)
#define AADMLDOONEB_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB0C05B0)
#define AADMLDOONEB_ONSKIP_OFFSET UNITYSDK_OFFSET(0xB0C0730)
#define AADMLDOONEB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB0C05C0)
#define AADMLDOONEB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB0C0630)
#define AADMLDOONEB_TICK_OFFSET UNITYSDK_OFFSET(0xB0C0680)

inline static constexpr unsigned int AADMLDOONEB_TypeDefinitionIndex = 58896;

	class AADMLDOONEB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::WaitFrame* OFKGLJOAMLD; // 0x20
		::System::Int32 PFAKDIHJNEF; // 0x28
		::System::Int32 JFMEEDGDMKP; // 0x2C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitFrame* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitFrame*))((::PBYTE)hIl2Cpp + AADMLDOONEB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AADMLDOONEB_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AADMLDOONEB_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AADMLDOONEB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AADMLDOONEB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AADMLDOONEB_TICK_OFFSET))(this, a1);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AADMLDOONEB_ONSKIP_OFFSET))(this);
		}

	};
