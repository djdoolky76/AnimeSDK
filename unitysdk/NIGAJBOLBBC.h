#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBEPKIPNAHF.h"
class EDIJGDEHAIN;

#define NIGAJBOLBBC_ANALOEDDDHD_OFFSET UNITYSDK_OFFSET(0xBBEA460)
#define NIGAJBOLBBC_CTOR_OFFSET UNITYSDK_OFFSET(0xBBEA1A0)
#define NIGAJBOLBBC_DIBLODAEIMH_OFFSET UNITYSDK_OFFSET(0xBBEA960)
#define NIGAJBOLBBC_DPHDGMCEDLK_OFFSET UNITYSDK_OFFSET(0xBBEA260)
#define NIGAJBOLBBC_EDBPHODBFCP_OFFSET UNITYSDK_OFFSET(0xBBEA1F0)
#define NIGAJBOLBBC_EFEAAFEAKGI_OFFSET UNITYSDK_OFFSET(0xBBEA550)
#define NIGAJBOLBBC_GET_CURRENTPROGRESSVALUE_OFFSET UNITYSDK_OFFSET(0xBBEAB90)
#define NIGAJBOLBBC_HEEDNNFAKPI_OFFSET UNITYSDK_OFFSET(0xBBEA3A0)
#define NIGAJBOLBBC_IPEDKKHCENP_OFFSET UNITYSDK_OFFSET(0xBBEA6C0)
#define NIGAJBOLBBC_LKIFDCACLOK_OFFSET UNITYSDK_OFFSET(0xBBEA4E0)
#define NIGAJBOLBBC_MJKKFEOGNGJ_OFFSET UNITYSDK_OFFSET(0xBBEA2B0)
#define NIGAJBOLBBC_SET_CURRENTPROGRESSVALUE_OFFSET UNITYSDK_OFFSET(0xBBEABA0)

	class NIGAJBOLBBC : public ::OBEPKIPNAHF
	{
	public:
		::System::Single _CurrentProgressValue_k__BackingField; // 0x20
		::System::Single DJKIAHBGKAN; // 0x24
		::System::Single KFFHLAMAMOG; // 0x28
		::System::Single AAFMLPDMJHI; // 0x2C
		::System::Single COCJDAKNIAP; // 0x30
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
