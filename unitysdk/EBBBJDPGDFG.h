#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CONMELGMDLP.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class BLEABNBGKAG;
class GKMKOMHLGDC;
class LMLFPLOLDIA;
class MJNGFEGNCOA;
namespace RPG { template <typename T> class LinkableNodeList_1; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { template <typename T> class LockableList_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EBBBJDPGDFG_BGPAOPDMDHF_OFFSET UNITYSDK_OFFSET(0x1C3ADA30)
#define EBBBJDPGDFG_BLLFPIJCPLI_OFFSET UNITYSDK_OFFSET(0x1C3AE6E0)
#define EBBBJDPGDFG_CHIJJAGJCBP_OFFSET UNITYSDK_OFFSET(0x1C3AE420)
#define EBBBJDPGDFG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3AE870)
#define EBBBJDPGDFG_EANLMIKHCKG_OFFSET UNITYSDK_OFFSET(0x1C3AE780)
#define EBBBJDPGDFG_EEMHKKKHMEG_OFFSET UNITYSDK_OFFSET(0x1C3AE700)
#define EBBBJDPGDFG_FKJEMGKIGCJ_OFFSET UNITYSDK_OFFSET(0x1C3AE7D0)
#define EBBBJDPGDFG_FNNNHEICNCL_OFFSET UNITYSDK_OFFSET(0x1C3AE6F0)
#define EBBBJDPGDFG_GHLDFDIBHAK_OFFSET UNITYSDK_OFFSET(0x1C3AE7F0)
#define EBBBJDPGDFG_GOPCNJKMHGJ_OFFSET UNITYSDK_OFFSET(0x1C3ADDF0)
#define EBBBJDPGDFG_IAAOBDCIKIM_OFFSET UNITYSDK_OFFSET(0x1C3AE810)
#define EBBBJDPGDFG_JGBDDOKIMAI_OFFSET UNITYSDK_OFFSET(0x1C3ADB50)
#define EBBBJDPGDFG_JKMLMDJIIJL_OFFSET UNITYSDK_OFFSET(0x1C3AE710)
#define EBBBJDPGDFG_KCKGCEBBCIE_OFFSET UNITYSDK_OFFSET(0x1C3ADF00)
#define EBBBJDPGDFG_MDEGFDDAFFL_OFFSET UNITYSDK_OFFSET(0x1C3AE770)
#define EBBBJDPGDFG_MPKOHBJAFJC_OFFSET UNITYSDK_OFFSET(0x1C3AE7E0)
#define EBBBJDPGDFG_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x1C3AD950)
#define EBBBJDPGDFG_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x1C3AD9E0)
#define EBBBJDPGDFG_PMICKFMADDF_OFFSET UNITYSDK_OFFSET(0x1C3ADAC0)

inline static constexpr unsigned int EBBBJDPGDFG_TypeDefinitionIndex = 55291;

	class EBBBJDPGDFG : public ::System::Object
	{
	public:
		::GKMKOMHLGDC* DDIALPLNALD; // 0x10
		::RPG::LinkableNodeList_1<::LMLFPLOLDIA*>* JKFDNBOIFMK; // 0x18
		::MJNGFEGNCOA* APEJEHHMLGE; // 0x20
		::System::Collections::Generic::List_1<::CONMELGMDLP>* NBLLBMHLDIG; // 0x28
		::RPG::GameCore::LockableList_1<::BLEABNBGKAG*>* GJIALPIALKI; // 0x30
		::System::Collections::Generic::List_1<::LMLFPLOLDIA*>* JFJDCFCBPPL; // 0x38
		::System::Int32 CIEBJMHFKDM; // 0x40
		::System::Int32 PJLNHLNEOLO; // 0x44
		::RPG::GameCore::FixPoint NLLOPPBCMGO; // 0x48
		::RPG::GameCore::FixPoint BGLDFAHAKGI; // 0x50
		::RPG::GameCore::FixPoint FPOFNOMPHBP; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBBJDPGDFG_CTOR_OFFSET))(this);
		}

		::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + EBBBJDPGDFG_ONPLUGININIT_OFFSET))(this, a1);
		}

		::System::Void OnPluginUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBBJDPGDFG_ONPLUGINUNINIT_OFFSET))(this);
		}

		::System::Void BGPAOPDMDHF(::BLEABNBGKAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLEABNBGKAG*))((::PBYTE)hIl2Cpp + EBBBJDPGDFG_BGPAOPDMDHF_OFFSET))(this, a1);
		}

		::System::Void PMICKFMADDF(::BLEABNBGKAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLEABNBGKAG*))((::PBYTE)hIl2Cpp + EBBBJDPGDFG_PMICKFMADDF_OFFSET))(this, a1);
		}

		::System::Void JGBDDOKIMAI(::LMLFPLOLDIA* a1, ::System::Action* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::LMLFPLOLDIA*, ::System::Action*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + EBBBJDPGDFG_JGBDDOKIMAI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GOPCNJKMHGJ(::LMLFPLOLDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMLFPLOLDIA*))((::PBYTE)hIl2Cpp + EBBBJDPGDFG_GOPCNJKMHGJ_OFFSET))(this, a1);
		}

		::System::Void KCKGCEBBCIE(::MJNGFEGNCOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJNGFEGNCOA*))((::PBYTE)hIl2Cpp + EBBBJDPGDFG_KCKGCEBBCIE_OFFSET))(this, a1);
		}

		::System::Void CHIJJAGJCBP(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + EBBBJDPGDFG_CHIJJAGJCBP_OFFSET))(this, a1, a2);
		}

		::System::Int32 BLLFPIJCPLI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBBJDPGDFG_BLLFPIJCPLI_OFFSET))(this);
		}

		::System::Void FNNNHEICNCL(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EBBBJDPGDFG_FNNNHEICNCL_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint EEMHKKKHMEG()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBBJDPGDFG_EEMHKKKHMEG_OFFSET))(this);
		}

		::System::Void JKMLMDJIIJL(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + EBBBJDPGDFG_JKMLMDJIIJL_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint MDEGFDDAFFL()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBBJDPGDFG_MDEGFDDAFFL_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint EANLMIKHCKG()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBBJDPGDFG_EANLMIKHCKG_OFFSET))(this);
		}

		::System::Int32 FKJEMGKIGCJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBBJDPGDFG_FKJEMGKIGCJ_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint MPKOHBJAFJC()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBBJDPGDFG_MPKOHBJAFJC_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GHLDFDIBHAK()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBBJDPGDFG_GHLDFDIBHAK_OFFSET))(this);
		}

		::System::Boolean IAAOBDCIKIM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBBJDPGDFG_IAAOBDCIKIM_OFFSET))(this);
		}

	};
