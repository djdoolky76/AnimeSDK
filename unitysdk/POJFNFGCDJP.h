#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferActionState.h"
#include "unitysdk/System/Object.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class ScrTrfActTaskList; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFrame; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define POJFNFGCDJP_ANNGMGJIKHF_OFFSET UNITYSDK_OFFSET(0xCCA00F0)
#define POJFNFGCDJP_CHLFKCMHAIO_OFFSET UNITYSDK_OFFSET(0xCC9FF60)
#define POJFNFGCDJP_CTOR_OFFSET UNITYSDK_OFFSET(0xCC9FBD0)
#define POJFNFGCDJP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCC9FC20)
#define POJFNFGCDJP_FEBOEKIGABF_OFFSET UNITYSDK_OFFSET(0xCC9FC80)
#define POJFNFGCDJP_FHAPAJLOHEI_OFFSET UNITYSDK_OFFSET(0xCCA0150)
#define POJFNFGCDJP_HFPHDNNLLPD_OFFSET UNITYSDK_OFFSET(0xCCA0080)
#define POJFNFGCDJP_MCLPLCDBLGD_OFFSET UNITYSDK_OFFSET(0xCC9FE30)
#define POJFNFGCDJP_PHJELNCJEKL_OFFSET UNITYSDK_OFFSET(0xCC9FE70)
#define POJFNFGCDJP_TICK_OFFSET UNITYSDK_OFFSET(0xCC9FD60)

inline static constexpr unsigned int POJFNFGCDJP_TypeDefinitionIndex = 54726;

	class POJFNFGCDJP : public ::System::Object
	{
	public:
		::RPG::GameCore::WaitFrame* FLCFNDDCKOC; // 0x10
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::KFELGAIGHAP* LPGMOLOFLOP; // 0x20
		::RPG::GameCore::ScrTrfActTaskList* IGHAHBNLIJA; // 0x28
		::RPG::GameCore::ScreenTransferActionState NJJCEADBFOH; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ScrTrfActTaskList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ScrTrfActTaskList*))((::PBYTE)hIl2Cpp + POJFNFGCDJP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POJFNFGCDJP_DISPOSE_OFFSET))(this);
		}

		::System::Void FEBOEKIGABF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POJFNFGCDJP_FEBOEKIGABF_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + POJFNFGCDJP_TICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::ScreenTransferActionState MCLPLCDBLGD()
		{
			return ((::RPG::GameCore::ScreenTransferActionState(*)(::PVOID))((::PBYTE)hIl2Cpp + POJFNFGCDJP_MCLPLCDBLGD_OFFSET))(this);
		}

		::System::Void PHJELNCJEKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POJFNFGCDJP_PHJELNCJEKL_OFFSET))(this);
		}

		::System::Void HFPHDNNLLPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POJFNFGCDJP_HFPHDNNLLPD_OFFSET))(this);
		}

		::System::Boolean ANNGMGJIKHF(::RPG::GameCore::TaskConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + POJFNFGCDJP_ANNGMGJIKHF_OFFSET))(this, a1);
		}

		::System::Void FHAPAJLOHEI(::RPG::GameCore::TaskConfig* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskConfig*, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + POJFNFGCDJP_FHAPAJLOHEI_OFFSET))(this, a1, a2);
		}

		::System::Void CHLFKCMHAIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POJFNFGCDJP_CHLFKCMHAIO_OFFSET))(this);
		}

	};
