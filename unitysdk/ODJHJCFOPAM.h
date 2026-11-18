#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/PJHKDJEGJOG.h"

class FCBNEBOPNIF;
namespace System { class String; }

#define ODJHJCFOPAM_EJBFIKKFDIM_OFFSET UNITYSDK_OFFSET(0xF17B0A0)
#define ODJHJCFOPAM_FOLOCLNNPFM_OFFSET UNITYSDK_OFFSET(0xF17AA90)
#define ODJHJCFOPAM_GGMCEJNBFEN_OFFSET UNITYSDK_OFFSET(0xF17AFC0)
#define ODJHJCFOPAM_IGMNDOMOMPP_OFFSET UNITYSDK_OFFSET(0xF17B090)
#define ODJHJCFOPAM_ILOFLHGGONC_OFFSET UNITYSDK_OFFSET(0xF17A7F0)
#define ODJHJCFOPAM_JPJLHGHIOMA_OFFSET UNITYSDK_OFFSET(0xF17AE40)
#define ODJHJCFOPAM_JPMNBOHLDPP_OFFSET UNITYSDK_OFFSET(0xF17AFD0)
#define ODJHJCFOPAM_LFCKAEKPJOD_OFFSET UNITYSDK_OFFSET(0xF17A8D0)
#define ODJHJCFOPAM_LLPJEODJJIE_OFFSET UNITYSDK_OFFSET(0xF17A870)
#define ODJHJCFOPAM_MEDOMFPGAOB_OFFSET UNITYSDK_OFFSET(0xF17AEF0)
#define ODJHJCFOPAM_OIGJOHALEJA_OFFSET UNITYSDK_OFFSET(0xF17AEE0)
#define ODJHJCFOPAM__CTOR_OFFSET UNITYSDK_OFFSET(0xF17AED0)

inline static constexpr unsigned int ODJHJCFOPAM_TypeDefinitionIndex = 82397;

class ODJHJCFOPAM : public ::PJHKDJEGJOG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODJHJCFOPAM__CTOR_OFFSET))(this);
	}

	::System::Void ILOFLHGGONC(::System::String*& AFIPJOKECDH, ::System::String*& EKAKGCGLOGB, ::System::String*& FGACFBCOIIC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*&, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + ODJHJCFOPAM_ILOFLHGGONC_OFFSET))(this, AFIPJOKECDH, EKAKGCGLOGB, FGACFBCOIIC);
	}

	::System::Int32 LLPJEODJJIE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODJHJCFOPAM_LLPJEODJJIE_OFFSET))(this);
	}

	::System::Void FOLOCLNNPFM(::FCBNEBOPNIF* CENFDFIKBDC)
	{
		return ((::System::Void(*)(::PVOID, ::FCBNEBOPNIF*))((::PBYTE)hIl2Cpp + ODJHJCFOPAM_FOLOCLNNPFM_OFFSET))(this, CENFDFIKBDC);
	}

	::System::Boolean JPJLHGHIOMA(::MoleMole::ESystemSettingType JELHEKJMJNI, ::System::Boolean& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType, ::System::Boolean&))((::PBYTE)hIl2Cpp + ODJHJCFOPAM_JPJLHGHIOMA_OFFSET))(this, JELHEKJMJNI, IGAAKDOIPNN);
	}

	::System::Int32 OIGJOHALEJA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODJHJCFOPAM_OIGJOHALEJA_OFFSET))(this);
	}

	::System::UInt32 MEDOMFPGAOB()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODJHJCFOPAM_MEDOMFPGAOB_OFFSET))(this);
	}

	::System::Void GGMCEJNBFEN(::System::String*& MIALFKCCCPI, ::System::String*& KMGKAIDEIBA, ::System::String*& FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*&, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + ODJHJCFOPAM_GGMCEJNBFEN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	static ::System::Int32 LFCKAEKPJOD()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + ODJHJCFOPAM_LFCKAEKPJOD_OFFSET))();
	}

	::System::Boolean JPMNBOHLDPP(::MoleMole::ESystemSettingType MIALFKCCCPI, ::System::Boolean& KMGKAIDEIBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType, ::System::Boolean&))((::PBYTE)hIl2Cpp + ODJHJCFOPAM_JPMNBOHLDPP_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void IGMNDOMOMPP(::FCBNEBOPNIF* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::FCBNEBOPNIF*))((::PBYTE)hIl2Cpp + ODJHJCFOPAM_IGMNDOMOMPP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::UInt32 EJBFIKKFDIM()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODJHJCFOPAM_EJBFIKKFDIM_OFFSET))(this);
	}
};
