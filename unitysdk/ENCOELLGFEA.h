#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NFEPECADMEG.h"

namespace MoleMole { class ClientSceneObjectStateLooperConfigBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENCOELLGFEA_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x11CBAA50)
#define ENCOELLGFEA_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0x11CBAAF0)
#define ENCOELLGFEA_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x11CBAFC0)
#define ENCOELLGFEA_KHAEIOINMBG_OFFSET UNITYSDK_OFFSET(0x11CBB060)
#define ENCOELLGFEA_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x11CBAEA0)
#define ENCOELLGFEA_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x11CBADF0)
#define ENCOELLGFEA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x11CBAAA0)
#define ENCOELLGFEA_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x11CBAF30)
#define ENCOELLGFEA__CTOR_OFFSET UNITYSDK_OFFSET(0x11CBA9D0)

inline static constexpr unsigned int ENCOELLGFEA_TypeDefinitionIndex = 38609;

class ENCOELLGFEA : public ::NFEPECADMEG
{
public:
	::System::Collections::Generic::List_1<::System::String*>* BIIPECPNLKE; // 0x18
	::System::Single KOAKLAKNHLG; // 0x20
	::System::Single JMKELJJFKFM; // 0x24

	::System::Void _ctor(::MoleMole::ClientSceneObjectStateLooperConfigBase* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ClientSceneObjectStateLooperConfigBase*))((::PBYTE)hIl2Cpp + ENCOELLGFEA__CTOR_OFFSET))(this, DFMKILICPFB);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCOELLGFEA_BBOMJDBNHIC_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCOELLGFEA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Boolean BGJPLEHEDKJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCOELLGFEA_BGJPLEHEDKJ_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENCOELLGFEA_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCOELLGFEA_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCOELLGFEA_PNHPDOBPKKE_OFFSET))(this);
	}

	::System::Void CMFOMGGDPPA(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENCOELLGFEA_CMFOMGGDPPA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean KHAEIOINMBG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCOELLGFEA_KHAEIOINMBG_OFFSET))(this);
	}
};
