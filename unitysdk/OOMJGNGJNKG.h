#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/FloatMessageType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class BDOHIOEMGCI;
class GOJNGCCBOGI;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define OOMJGNGJNKG_CIHHGOBGMHL_OFFSET UNITYSDK_OFFSET(0x196AD520)
#define OOMJGNGJNKG_CIINAMIMDIL_OFFSET UNITYSDK_OFFSET(0x196AE310)
#define OOMJGNGJNKG_CTOR_OFFSET UNITYSDK_OFFSET(0x196AF5A0)
#define OOMJGNGJNKG_FDFIBKPPJDK_OFFSET UNITYSDK_OFFSET(0x196AF070)
#define OOMJGNGJNKG_GGCICHJMHGF_OFFSET UNITYSDK_OFFSET(0x196AE0C0)
#define OOMJGNGJNKG_GHJLPMLKGND_OFFSET UNITYSDK_OFFSET(0x196AECA0)
#define OOMJGNGJNKG_HDNEDLNJHOK_OFFSET UNITYSDK_OFFSET(0x196AE5F0)
#define OOMJGNGJNKG_HEDGLAKMADJ_OFFSET UNITYSDK_OFFSET(0x196AD630)
#define OOMJGNGJNKG_HKDOAMCHBAH_OFFSET UNITYSDK_OFFSET(0x196AD7B0)
#define OOMJGNGJNKG_JFLFJBIEIHC_OFFSET UNITYSDK_OFFSET(0x196AED90)
#define OOMJGNGJNKG_KBIJIMAMBAO_OFFSET UNITYSDK_OFFSET(0x196AE4A0)
#define OOMJGNGJNKG_KBPMCFICODM_OFFSET UNITYSDK_OFFSET(0x196AEE60)
#define OOMJGNGJNKG_KEHGBFPICDD_OFFSET UNITYSDK_OFFSET(0x196AE530)
#define OOMJGNGJNKG_LEHOPPJEFEM_OFFSET UNITYSDK_OFFSET(0x196AEAA0)
#define OOMJGNGJNKG_OEEJKKMDDCG_OFFSET UNITYSDK_OFFSET(0x196AE590)
#define OOMJGNGJNKG__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x196ADF80)
#define OOMJGNGJNKG__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x196ADFF0)
#define OOMJGNGJNKG__ONTICK_OFFSET UNITYSDK_OFFSET(0x196AE110)
#define OOMJGNGJNKG__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x196AE050)

inline static constexpr unsigned int OOMJGNGJNKG_TypeDefinitionIndex = 73536;

	class OOMJGNGJNKG : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::Queue_1<::GOJNGCCBOGI*>* MEDBLPBLCIH; // 0x60
		::System::String* JAHEBAJDKNG; // 0x68
		::System::Collections::Generic::List_1<::BDOHIOEMGCI*>* FEILNLDDMPM; // 0x70
		::System::Collections::Generic::List_1<::GOJNGCCBOGI*>* PGDHHJDONEM; // 0x78
		::System::Single HCDJDENDDHE; // 0x80
		::System::Boolean KJDACHFDOAH; // 0x84
		::System::Byte _padding0[0x3];
		::System::Single OCNLFGLEPKG; // 0x88
		// static const ::System::Object IAHBADPADHG; // 0x0
		// static const ::System::Object EAAFCPMNJNE; // 0x0
		// static const ::System::Object CIKPHGLKJPF; // 0x0
		// static const ::System::Object CDKOHBJEBCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMJGNGJNKG_CTOR_OFFSET))(this);
		}

		::System::Void CIHHGOBGMHL(::GOJNGCCBOGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOJNGCCBOGI*))((::PBYTE)hIl2Cpp + OOMJGNGJNKG_CIHHGOBGMHL_OFFSET))(this, a1);
		}

		::System::Void HKDOAMCHBAH(::RPG::GameCore::FloatMessageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FloatMessageType))((::PBYTE)hIl2Cpp + OOMJGNGJNKG_HKDOAMCHBAH_OFFSET))(this, a1);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMJGNGJNKG__INITVARONCE_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + OOMJGNGJNKG__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMJGNGJNKG__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OOMJGNGJNKG__ONTICK_OFFSET))(this, a1);
		}

		::BDOHIOEMGCI* KEHGBFPICDD(::RPG::GameCore::FloatMessageType a1)
		{
			return ((::BDOHIOEMGCI*(*)(::PVOID, ::RPG::GameCore::FloatMessageType))((::PBYTE)hIl2Cpp + OOMJGNGJNKG_KEHGBFPICDD_OFFSET))(this, a1);
		}

		::System::Void HDNEDLNJHOK(::BDOHIOEMGCI* a1, ::GOJNGCCBOGI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BDOHIOEMGCI*, ::GOJNGCCBOGI*))((::PBYTE)hIl2Cpp + OOMJGNGJNKG_HDNEDLNJHOK_OFFSET))(this, a1, a2);
		}

		::System::Void KBPMCFICODM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OOMJGNGJNKG_KBPMCFICODM_OFFSET))(this, a1);
		}

		::System::Boolean JFLFJBIEIHC(::GOJNGCCBOGI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GOJNGCCBOGI*))((::PBYTE)hIl2Cpp + OOMJGNGJNKG_JFLFJBIEIHC_OFFSET))(this, a1);
		}

		::BDOHIOEMGCI* LEHOPPJEFEM(::RPG::GameCore::FloatMessageType a1)
		{
			return ((::BDOHIOEMGCI*(*)(::PVOID, ::RPG::GameCore::FloatMessageType))((::PBYTE)hIl2Cpp + OOMJGNGJNKG_LEHOPPJEFEM_OFFSET))(this, a1);
		}

		::System::Void GHJLPMLKGND(::RPG::GameCore::FloatMessageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FloatMessageType))((::PBYTE)hIl2Cpp + OOMJGNGJNKG_GHJLPMLKGND_OFFSET))(this, a1);
		}

		::System::Boolean KBIJIMAMBAO(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OOMJGNGJNKG_KBIJIMAMBAO_OFFSET))(this, a1);
		}

		::GOJNGCCBOGI* OEEJKKMDDCG()
		{
			return ((::GOJNGCCBOGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMJGNGJNKG_OEEJKKMDDCG_OFFSET))(this);
		}

		::System::Void GGCICHJMHGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMJGNGJNKG_GGCICHJMHGF_OFFSET))(this);
		}

		::System::Void FDFIBKPPJDK(::RPG::GameCore::FloatMessageType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FloatMessageType, ::System::Boolean))((::PBYTE)hIl2Cpp + OOMJGNGJNKG_FDFIBKPPJDK_OFFSET))(this, a1, a2);
		}

		::System::Void CIINAMIMDIL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OOMJGNGJNKG_CIINAMIMDIL_OFFSET))(this, a1);
		}

		::System::Void HEDGLAKMADJ(::GOJNGCCBOGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOJNGCCBOGI*))((::PBYTE)hIl2Cpp + OOMJGNGJNKG_HEDGLAKMADJ_OFFSET))(this, a1);
		}

	};
