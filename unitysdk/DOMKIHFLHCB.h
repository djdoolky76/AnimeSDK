#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHOKLDGHMFG;
class CKBLLOPFINO;
class OAHHCMIKODC;
namespace RPG::GameCore { class SwordTrainingEffectRow; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DOMKIHFLHCB_BLJLIHCPEAK_OFFSET UNITYSDK_OFFSET(0x11FEBFA0)
#define DOMKIHFLHCB_BODLACCKMPD_OFFSET UNITYSDK_OFFSET(0x11FEC030)
#define DOMKIHFLHCB_CTOR_OFFSET UNITYSDK_OFFSET(0x11FECCE0)
#define DOMKIHFLHCB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11FEBF10)
#define DOMKIHFLHCB_EOBFIOFIGKO_OFFSET UNITYSDK_OFFSET(0x11FEC080)
#define DOMKIHFLHCB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x11FEBED0)
#define DOMKIHFLHCB_MKPKFFACGLN_OFFSET UNITYSDK_OFFSET(0x11FEC930)
#define DOMKIHFLHCB_MLCPPIFPILG_OFFSET UNITYSDK_OFFSET(0x11FECB10)
#define DOMKIHFLHCB_NMDDHCFBDMN_OFFSET UNITYSDK_OFFSET(0x11FEC120)
#define DOMKIHFLHCB_NMNOMOCFENP_OFFSET UNITYSDK_OFFSET(0x11FEC690)
#define DOMKIHFLHCB_NMOJPBDHNBC_OFFSET UNITYSDK_OFFSET(0x11FEC300)
#define DOMKIHFLHCB_PHDPHBANBOC_OFFSET UNITYSDK_OFFSET(0x11FEC170)

inline static constexpr unsigned int DOMKIHFLHCB_TypeDefinitionIndex = 75020;

	class DOMKIHFLHCB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::CKBLLOPFINO*>* CPDECBDEBJM; // 0x10
		// static const ::System::Object BNPHGEMIDOF; // 0x0
		// static const ::System::Object JFFFLOFGMFA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOMKIHFLHCB_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOMKIHFLHCB_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOMKIHFLHCB_DISPOSE_OFFSET))(this);
		}

		::System::Void BLJLIHCPEAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOMKIHFLHCB_BLJLIHCPEAK_OFFSET))(this);
		}

		::AHOKLDGHMFG* BODLACCKMPD(::System::UInt32 a1)
		{
			return ((::AHOKLDGHMFG*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DOMKIHFLHCB_BODLACCKMPD_OFFSET))(this, a1);
		}

		::System::Void NMDDHCFBDMN(::AHOKLDGHMFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHOKLDGHMFG*))((::PBYTE)hIl2Cpp + DOMKIHFLHCB_NMDDHCFBDMN_OFFSET))(this, a1);
		}

		::System::Void NMOJPBDHNBC(::System::Collections::Generic::IList_1<::AHOKLDGHMFG*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::AHOKLDGHMFG*>*))((::PBYTE)hIl2Cpp + DOMKIHFLHCB_NMOJPBDHNBC_OFFSET))(this, a1);
		}

		::AHOKLDGHMFG* EOBFIOFIGKO(::System::UInt32 a1)
		{
			return ((::AHOKLDGHMFG*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DOMKIHFLHCB_EOBFIOFIGKO_OFFSET))(this, a1);
		}

		::System::Boolean NMNOMOCFENP(::RPG::GameCore::SwordTrainingEffectRow* a1, ::AHOKLDGHMFG* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*, ::AHOKLDGHMFG*))((::PBYTE)hIl2Cpp + DOMKIHFLHCB_NMNOMOCFENP_OFFSET))(this, a1, a2);
		}

		::System::Void PHDPHBANBOC(::AHOKLDGHMFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHOKLDGHMFG*))((::PBYTE)hIl2Cpp + DOMKIHFLHCB_PHDPHBANBOC_OFFSET))(this, a1);
		}

		::System::Void MKPKFFACGLN(::System::UInt32 a1, ::OAHHCMIKODC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::OAHHCMIKODC*))((::PBYTE)hIl2Cpp + DOMKIHFLHCB_MKPKFFACGLN_OFFSET))(this, a1, a2);
		}

		::System::Void MLCPPIFPILG(::OAHHCMIKODC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OAHHCMIKODC*))((::PBYTE)hIl2Cpp + DOMKIHFLHCB_MLCPPIFPILG_OFFSET))(this, a1);
		}

	};
