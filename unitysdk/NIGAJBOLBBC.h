#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBEPKIPNAHF.h"
class EDIJGDEHAIN;

#define NIGAJBOLBBC_ANALOEDDDHD_OFFSET UNITYSDK_OFFSET(0xC4CCD40)
#define NIGAJBOLBBC_CTOR_OFFSET UNITYSDK_OFFSET(0xC4CCA80)
#define NIGAJBOLBBC_DIBLODAEIMH_OFFSET UNITYSDK_OFFSET(0xC4CD240)
#define NIGAJBOLBBC_DPHDGMCEDLK_OFFSET UNITYSDK_OFFSET(0xC4CCB40)
#define NIGAJBOLBBC_EDBPHODBFCP_OFFSET UNITYSDK_OFFSET(0xC4CCAD0)
#define NIGAJBOLBBC_EFEAAFEAKGI_OFFSET UNITYSDK_OFFSET(0xC4CCE30)
#define NIGAJBOLBBC_GET_CURRENTPROGRESSVALUE_OFFSET UNITYSDK_OFFSET(0xC4CD470)
#define NIGAJBOLBBC_HEEDNNFAKPI_OFFSET UNITYSDK_OFFSET(0xC4CCC80)
#define NIGAJBOLBBC_IPEDKKHCENP_OFFSET UNITYSDK_OFFSET(0xC4CCFA0)
#define NIGAJBOLBBC_LKIFDCACLOK_OFFSET UNITYSDK_OFFSET(0xC4CCDC0)
#define NIGAJBOLBBC_MJKKFEOGNGJ_OFFSET UNITYSDK_OFFSET(0xC4CCB90)
#define NIGAJBOLBBC_SET_CURRENTPROGRESSVALUE_OFFSET UNITYSDK_OFFSET(0xC4CD480)

inline static constexpr unsigned int NIGAJBOLBBC_TypeDefinitionIndex = 57407;

	class NIGAJBOLBBC : public ::OBEPKIPNAHF
	{
	public:
		::System::Single DJKIAHBGKAN; // 0x20
		::System::Single COCJDAKNIAP; // 0x24
		::System::Single KFFHLAMAMOG; // 0x28
		::System::Single AAFMLPDMJHI; // 0x2C
		::System::Single _CurrentProgressValue_k__BackingField; // 0x30
		::System::Void _ctor(::EDIJGDEHAIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDIJGDEHAIN*))((::PBYTE)hIl2Cpp + NIGAJBOLBBC_CTOR_OFFSET))(this, a1);
		}

		::System::Void EDBPHODBFCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGAJBOLBBC_EDBPHODBFCP_OFFSET))(this);
		}

		::System::Void MJKKFEOGNGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGAJBOLBBC_MJKKFEOGNGJ_OFFSET))(this);
		}

		::System::Void LKIFDCACLOK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NIGAJBOLBBC_LKIFDCACLOK_OFFSET))(this, a1);
		}

		::System::Void DPHDGMCEDLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGAJBOLBBC_DPHDGMCEDLK_OFFSET))(this);
		}

		::System::Void EFEAAFEAKGI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NIGAJBOLBBC_EFEAAFEAKGI_OFFSET))(this, a1);
		}

		::System::Void IPEDKKHCENP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NIGAJBOLBBC_IPEDKKHCENP_OFFSET))(this, a1);
		}

		::System::Void DIBLODAEIMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGAJBOLBBC_DIBLODAEIMH_OFFSET))(this);
		}

		::System::Single HEEDNNFAKPI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGAJBOLBBC_HEEDNNFAKPI_OFFSET))(this);
		}

		::EDIJGDEHAIN* ANALOEDDDHD()
		{
			return ((::EDIJGDEHAIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGAJBOLBBC_ANALOEDDDHD_OFFSET))(this);
		}

		::System::Single get_CurrentProgressValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGAJBOLBBC_GET_CURRENTPROGRESSVALUE_OFFSET))(this);
		}

		::System::Void set_CurrentProgressValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NIGAJBOLBBC_SET_CURRENTPROGRESSVALUE_OFFSET))(this, a1);
		}

	};
