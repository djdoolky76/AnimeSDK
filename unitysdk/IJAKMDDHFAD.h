#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferActionState.h"
#include "unitysdk/System/Object.h"
class KFELGAIGHAP;
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class ScrTrfActPerformance; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFrame; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IJAKMDDHFAD_ANNGMGJIKHF_OFFSET UNITYSDK_OFFSET(0x16458030)
#define IJAKMDDHFAD_CHLFKCMHAIO_OFFSET UNITYSDK_OFFSET(0x16457AD0)
#define IJAKMDDHFAD_CTOR_OFFSET UNITYSDK_OFFSET(0x16457070)
#define IJAKMDDHFAD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164570C0)
#define IJAKMDDHFAD_FEBOEKIGABF_OFFSET UNITYSDK_OFFSET(0x16457120)
#define IJAKMDDHFAD_FHAPAJLOHEI_OFFSET UNITYSDK_OFFSET(0x16458090)
#define IJAKMDDHFAD_HFPHDNNLLPD_OFFSET UNITYSDK_OFFSET(0x16457F70)
#define IJAKMDDHFAD_HHFMHCCAGCM_OFFSET UNITYSDK_OFFSET(0x16458230)
#define IJAKMDDHFAD_IIAEBNELMON_OFFSET UNITYSDK_OFFSET(0x164577D0)
#define IJAKMDDHFAD_JBIPBMFGHFL_OFFSET UNITYSDK_OFFSET(0x164572E0)
#define IJAKMDDHFAD_JFJALLPCLBJ_OFFSET UNITYSDK_OFFSET(0x16457200)
#define IJAKMDDHFAD_MCLPLCDBLGD_OFFSET UNITYSDK_OFFSET(0x16457640)
#define IJAKMDDHFAD_PHJELNCJEKL_OFFSET UNITYSDK_OFFSET(0x16457680)
#define IJAKMDDHFAD_TICK_OFFSET UNITYSDK_OFFSET(0x16457460)

	class IJAKMDDHFAD : public ::System::Object
	{
	public:
		::RPG::GameCore::WaitFrame* FLCFNDDCKOC; // 0x10
		::KFELGAIGHAP* LPGMOLOFLOP; // 0x18
		::RPG::GameCore::ScrTrfActPerformance* IGHAHBNLIJA; // 0x20
		::KFELGAIGHAP* DFPELEEAMOL; // 0x28
		::RPG::Client::Stage* PDAIGLPEMEE; // 0x30
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x38
		::RPG::GameCore::ScreenTransferActionState NJJCEADBFOH; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ScrTrfActPerformance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ScrTrfActPerformance*))((::PBYTE)hIl2Cpp + IJAKMDDHFAD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJAKMDDHFAD_DISPOSE_OFFSET))(this);
		}

		::System::Void FEBOEKIGABF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJAKMDDHFAD_FEBOEKIGABF_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IJAKMDDHFAD_TICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::ScreenTransferActionState MCLPLCDBLGD()
		{
			return ((::RPG::GameCore::ScreenTransferActionState(*)(::PVOID))((::PBYTE)hIl2Cpp + IJAKMDDHFAD_MCLPLCDBLGD_OFFSET))(this);
		}

		::System::Void PHJELNCJEKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJAKMDDHFAD_PHJELNCJEKL_OFFSET))(this);
		}

		::System::Void HFPHDNNLLPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJAKMDDHFAD_HFPHDNNLLPD_OFFSET))(this);
		}

		::System::Boolean ANNGMGJIKHF(::RPG::GameCore::TaskConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + IJAKMDDHFAD_ANNGMGJIKHF_OFFSET))(this, a1);
		}

		::System::Void FHAPAJLOHEI(::RPG::GameCore::TaskConfig* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskConfig*, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + IJAKMDDHFAD_FHAPAJLOHEI_OFFSET))(this, a1, a2);
		}

		::System::Void HHFMHCCAGCM(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + IJAKMDDHFAD_HHFMHCCAGCM_OFFSET))(this, a1, a2);
		}

		::System::Void CHLFKCMHAIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJAKMDDHFAD_CHLFKCMHAIO_OFFSET))(this);
		}

		::System::Void JBIPBMFGHFL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IJAKMDDHFAD_JBIPBMFGHFL_OFFSET))(this, a1);
		}

		::System::Void IIAEBNELMON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJAKMDDHFAD_IIAEBNELMON_OFFSET))(this);
		}

		::System::Void JFJALLPCLBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJAKMDDHFAD_JFJALLPCLBJ_OFFSET))(this);
		}

	};
