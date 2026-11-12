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

#define OOMJGNGJNKG_CIHHGOBGMHL_OFFSET UNITYSDK_OFFSET(0xC88E390)
#define OOMJGNGJNKG_CIINAMIMDIL_OFFSET UNITYSDK_OFFSET(0xC88F180)
#define OOMJGNGJNKG_CTOR_OFFSET UNITYSDK_OFFSET(0xC890410)
#define OOMJGNGJNKG_FDFIBKPPJDK_OFFSET UNITYSDK_OFFSET(0xC88FEE0)
#define OOMJGNGJNKG_GGCICHJMHGF_OFFSET UNITYSDK_OFFSET(0xC88EF30)
#define OOMJGNGJNKG_GHJLPMLKGND_OFFSET UNITYSDK_OFFSET(0xC88FB10)
#define OOMJGNGJNKG_HDNEDLNJHOK_OFFSET UNITYSDK_OFFSET(0xC88F460)
#define OOMJGNGJNKG_HEDGLAKMADJ_OFFSET UNITYSDK_OFFSET(0xC88E4A0)
#define OOMJGNGJNKG_HKDOAMCHBAH_OFFSET UNITYSDK_OFFSET(0xC88E620)
#define OOMJGNGJNKG_JFLFJBIEIHC_OFFSET UNITYSDK_OFFSET(0xC88FC00)
#define OOMJGNGJNKG_KBIJIMAMBAO_OFFSET UNITYSDK_OFFSET(0xC88F310)
#define OOMJGNGJNKG_KBPMCFICODM_OFFSET UNITYSDK_OFFSET(0xC88FCD0)
#define OOMJGNGJNKG_KEHGBFPICDD_OFFSET UNITYSDK_OFFSET(0xC88F3A0)
#define OOMJGNGJNKG_LEHOPPJEFEM_OFFSET UNITYSDK_OFFSET(0xC88F910)
#define OOMJGNGJNKG_OEEJKKMDDCG_OFFSET UNITYSDK_OFFSET(0xC88F400)
#define OOMJGNGJNKG__INITVARONCE_OFFSET UNITYSDK_OFFSET(0xC88EDF0)
#define OOMJGNGJNKG__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xC88EE60)
#define OOMJGNGJNKG__ONTICK_OFFSET UNITYSDK_OFFSET(0xC88EF80)
#define OOMJGNGJNKG__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC88EEC0)

inline static constexpr unsigned int OOMJGNGJNKG_TypeDefinitionIndex = 73537;

	class OOMJGNGJNKG : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::List_1<::GOJNGCCBOGI*>* PGDHHJDONEM; // 0x60
		::System::Collections::Generic::List_1<::BDOHIOEMGCI*>* FEILNLDDMPM; // 0x68
		::System::Collections::Generic::Queue_1<::GOJNGCCBOGI*>* MEDBLPBLCIH; // 0x70
		::System::String* JAHEBAJDKNG; // 0x78
		::System::Single OCNLFGLEPKG; // 0x80
		::System::Single HCDJDENDDHE; // 0x84
		::System::Boolean KJDACHFDOAH; // 0x88
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
