#pragma once
#include "unitysdk/unitysdk.h"
class NGFHCJIAOLH;
class OOJNDHEMKCN;
namespace RPG::GameCore { class TaskContext; }

#define CNMDLBDENDC_ADJLGBKAPJP_OFFSET UNITYSDK_OFFSET(0xE5F1FB0)
#define CNMDLBDENDC_CTOR_OFFSET UNITYSDK_OFFSET(0xE5F1DE0)
#define CNMDLBDENDC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE5F1E10)
#define CNMDLBDENDC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE5F1ED0)
#define CNMDLBDENDC_TICK_OFFSET UNITYSDK_OFFSET(0xE5F1F20)

inline static constexpr unsigned int CNMDLBDENDC_TypeDefinitionIndex = 53244;

	class CNMDLBDENDC
	{
	public:
		::NGFHCJIAOLH* DPOJGPNDPMD; // 0x28
		::System::Single NKLBMFBABGC; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OOJNDHEMKCN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OOJNDHEMKCN*))((::PBYTE)hIl2Cpp + CNMDLBDENDC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMDLBDENDC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMDLBDENDC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CNMDLBDENDC_TICK_OFFSET))(this, a1);
		}

		::System::Boolean ADJLGBKAPJP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMDLBDENDC_ADJLGBKAPJP_OFFSET))(this);
		}

	};
