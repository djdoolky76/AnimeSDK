#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferActionState.h"
#include "unitysdk/System/Object.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class ScrTrfActPerformanceGroup; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFrame; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FMCCIGPKDEK_ANNGMGJIKHF_OFFSET UNITYSDK_OFFSET(0x1584DA40)
#define FMCCIGPKDEK_CHLFKCMHAIO_OFFSET UNITYSDK_OFFSET(0x1584D5B0)
#define FMCCIGPKDEK_CTOR_OFFSET UNITYSDK_OFFSET(0x1584CB70)
#define FMCCIGPKDEK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1584CBC0)
#define FMCCIGPKDEK_FEBOEKIGABF_OFFSET UNITYSDK_OFFSET(0x1584CC20)
#define FMCCIGPKDEK_FHAPAJLOHEI_OFFSET UNITYSDK_OFFSET(0x1584DAA0)
#define FMCCIGPKDEK_HFPHDNNLLPD_OFFSET UNITYSDK_OFFSET(0x1584D980)
#define FMCCIGPKDEK_HHFMHCCAGCM_OFFSET UNITYSDK_OFFSET(0x1584DC40)
#define FMCCIGPKDEK_IIAEBNELMON_OFFSET UNITYSDK_OFFSET(0x1584D2B0)
#define FMCCIGPKDEK_JBIPBMFGHFL_OFFSET UNITYSDK_OFFSET(0x1584CDE0)
#define FMCCIGPKDEK_JFJALLPCLBJ_OFFSET UNITYSDK_OFFSET(0x1584CD00)
#define FMCCIGPKDEK_MCLPLCDBLGD_OFFSET UNITYSDK_OFFSET(0x1584D170)
#define FMCCIGPKDEK_PHJELNCJEKL_OFFSET UNITYSDK_OFFSET(0x1584D1B0)
#define FMCCIGPKDEK_TICK_OFFSET UNITYSDK_OFFSET(0x1584CF90)

	class FMCCIGPKDEK : public ::System::Object
	{
	public:
		::KFELGAIGHAP* DFPELEEAMOL; // 0x10
		::KFELGAIGHAP* LPGMOLOFLOP; // 0x18
		::RPG::GameCore::WaitFrame* FLCFNDDCKOC; // 0x20
		::RPG::GameCore::ScrTrfActPerformanceGroup* IGHAHBNLIJA; // 0x28
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x30
		::RPG::GameCore::ScreenTransferActionState NJJCEADBFOH; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ScrTrfActPerformanceGroup* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ScrTrfActPerformanceGroup*))((::PBYTE)hIl2Cpp + FMCCIGPKDEK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMCCIGPKDEK_DISPOSE_OFFSET))(this);
		}

		::System::Void FEBOEKIGABF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMCCIGPKDEK_FEBOEKIGABF_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FMCCIGPKDEK_TICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::ScreenTransferActionState MCLPLCDBLGD()
		{
			return ((::RPG::GameCore::ScreenTransferActionState(*)(::PVOID))((::PBYTE)hIl2Cpp + FMCCIGPKDEK_MCLPLCDBLGD_OFFSET))(this);
		}

		::System::Void PHJELNCJEKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMCCIGPKDEK_PHJELNCJEKL_OFFSET))(this);
		}

		::System::Void HFPHDNNLLPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMCCIGPKDEK_HFPHDNNLLPD_OFFSET))(this);
		}

		::System::Boolean ANNGMGJIKHF(::RPG::GameCore::TaskConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + FMCCIGPKDEK_ANNGMGJIKHF_OFFSET))(this, a1);
		}

		::System::Void FHAPAJLOHEI(::RPG::GameCore::TaskConfig* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskConfig*, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + FMCCIGPKDEK_FHAPAJLOHEI_OFFSET))(this, a1, a2);
		}

		::System::Void HHFMHCCAGCM(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + FMCCIGPKDEK_HHFMHCCAGCM_OFFSET))(this, a1, a2);
		}

		::System::Void CHLFKCMHAIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMCCIGPKDEK_CHLFKCMHAIO_OFFSET))(this);
		}

		::System::Void JBIPBMFGHFL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FMCCIGPKDEK_JBIPBMFGHFL_OFFSET))(this, a1);
		}

		::System::Void IIAEBNELMON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMCCIGPKDEK_IIAEBNELMON_OFFSET))(this);
		}

		::System::Void JFJALLPCLBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMCCIGPKDEK_JFJALLPCLBJ_OFFSET))(this);
		}

	};
