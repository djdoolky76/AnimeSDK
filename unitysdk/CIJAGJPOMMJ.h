#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/MJKLAEILHPK.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class RandomSelector; }
namespace RPG::GameCore { class RandomSelectorCase; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CIJAGJPOMMJ_AEMILEDDCIP_OFFSET UNITYSDK_OFFSET(0xCF84620)
#define CIJAGJPOMMJ_CTOR_OFFSET UNITYSDK_OFFSET(0xCF84280)
#define CIJAGJPOMMJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF84290)
#define CIJAGJPOMMJ_IMANALPNPDM_OFFSET UNITYSDK_OFFSET(0xCF84A60)
#define CIJAGJPOMMJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF845B0)
#define CIJAGJPOMMJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCF84BF0)
#define CIJAGJPOMMJ_TICK_OFFSET UNITYSDK_OFFSET(0xCF843B0)

inline static constexpr unsigned int CIJAGJPOMMJ_TypeDefinitionIndex = 53196;

	class CIJAGJPOMMJ : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* JJODLPFGBHE; // 0x18
		::RPG::GameCore::RandomSelector* OFKGLJOAMLD; // 0x20
		::MJKLAEILHPK OLMFJLICIIA; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x58
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RandomSelector* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RandomSelector*))((::PBYTE)hIl2Cpp + CIJAGJPOMMJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIJAGJPOMMJ_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CIJAGJPOMMJ_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIJAGJPOMMJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIJAGJPOMMJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void IMANALPNPDM(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CIJAGJPOMMJ_IMANALPNPDM_OFFSET))(this, a1);
		}

		::RPG::GameCore::RandomSelectorCase* AEMILEDDCIP()
		{
			return ((::RPG::GameCore::RandomSelectorCase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIJAGJPOMMJ_AEMILEDDCIP_OFFSET))(this);
		}

	};
