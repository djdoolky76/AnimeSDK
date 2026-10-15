#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHPMNMMGLHI.h"
class GBMIHCDKOKK;
class INOEJKDIMKO;
class JIAPCHALLMF;
class KIICEFFNEGG;
class KLBPBDLHKBG;
class OMPGJHBEJAB;
namespace System { class Action; }

#define IJLOPPLGLKN_CTOR_OFFSET UNITYSDK_OFFSET(0x16461680)
#define IJLOPPLGLKN_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x16460150)
#define IJLOPPLGLKN_HJLKJBAIGDE_OFFSET UNITYSDK_OFFSET(0x16460660)
#define IJLOPPLGLKN_HPHMJMIANDK_OFFSET UNITYSDK_OFFSET(0x16461000)
#define IJLOPPLGLKN_ICJBDFKHGDK_OFFSET UNITYSDK_OFFSET(0x16461470)
#define IJLOPPLGLKN_JNHHEDOOJND_OFFSET UNITYSDK_OFFSET(0x16460B90)
#define IJLOPPLGLKN_KLLFHFDFNAF_OFFSET UNITYSDK_OFFSET(0x16461330)
#define IJLOPPLGLKN_LEDGOACFOEN_OFFSET UNITYSDK_OFFSET(0x16460240)
#define IJLOPPLGLKN_LNGBGNGPGOH_OFFSET UNITYSDK_OFFSET(0x16461160)
#define IJLOPPLGLKN_MDFNDHJDNMH_OFFSET UNITYSDK_OFFSET(0x16460EC0)
#define IJLOPPLGLKN_NFKJIJNOCJJ_OFFSET UNITYSDK_OFFSET(0x16460D60)
#define IJLOPPLGLKN_ODDKEFJCGGL_OFFSET UNITYSDK_OFFSET(0x16461540)
#define IJLOPPLGLKN_START_OFFSET UNITYSDK_OFFSET(0x16460100)
#define IJLOPPLGLKN_STOP_OFFSET UNITYSDK_OFFSET(0x164601F0)
#define IJLOPPLGLKN__SENDPIXAIRREENTERSTAGECSREQ_B__7_0_OFFSET UNITYSDK_OFFSET(0x164616D0)
#define IJLOPPLGLKN__SENDPIXAIRSTARTSTAGECSREQ_B__6_0_OFFSET UNITYSDK_OFFSET(0x16461690)

inline static constexpr unsigned int IJLOPPLGLKN_TypeDefinitionIndex = 79221;

	class IJLOPPLGLKN : public ::BHPMNMMGLHI
	{
	public:
		::KIICEFFNEGG* MPFFGNPIDOA; // 0x20
		::JIAPCHALLMF* NMLAOCMPPPP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLOPPLGLKN_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLOPPLGLKN_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLOPPLGLKN_STOP_OFFSET))(this);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLOPPLGLKN_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void LEDGOACFOEN(::System::UInt16 a1, ::INOEJKDIMKO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::INOEJKDIMKO*))((::PBYTE)hIl2Cpp + IJLOPPLGLKN_LEDGOACFOEN_OFFSET))(this, a1, a2);
		}

		::System::Void HJLKJBAIGDE(::KLBPBDLHKBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLBPBDLHKBG*))((::PBYTE)hIl2Cpp + IJLOPPLGLKN_HJLKJBAIGDE_OFFSET))(this, a1);
		}

		::System::Void JNHHEDOOJND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLOPPLGLKN_JNHHEDOOJND_OFFSET))(this);
		}

		::System::Void NFKJIJNOCJJ(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IJLOPPLGLKN_NFKJIJNOCJJ_OFFSET))(this, a1, a2);
		}

		::System::Void MDFNDHJDNMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLOPPLGLKN_MDFNDHJDNMH_OFFSET))(this);
		}

		::System::Void HPHMJMIANDK(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IJLOPPLGLKN_HPHMJMIANDK_OFFSET))(this, a1);
		}

		::System::Void LNGBGNGPGOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLOPPLGLKN_LNGBGNGPGOH_OFFSET))(this);
		}

		::System::Void KLLFHFDFNAF(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IJLOPPLGLKN_KLLFHFDFNAF_OFFSET))(this, a1, a2);
		}

		::System::Void ICJBDFKHGDK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IJLOPPLGLKN_ICJBDFKHGDK_OFFSET))(this, a1);
		}

		::System::Void ODDKEFJCGGL(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + IJLOPPLGLKN_ODDKEFJCGGL_OFFSET))(this, a1, a2);
		}

		::System::Void _SendPixAirStartStageCsReq_b__6_0(::OMPGJHBEJAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMPGJHBEJAB*))((::PBYTE)hIl2Cpp + IJLOPPLGLKN__SENDPIXAIRSTARTSTAGECSREQ_B__6_0_OFFSET))(this, a1);
		}

		::System::Void _SendPixAirReenterStageCsReq_b__7_0(::GBMIHCDKOKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBMIHCDKOKK*))((::PBYTE)hIl2Cpp + IJLOPPLGLKN__SENDPIXAIRREENTERSTAGECSREQ_B__7_0_OFFSET))(this, a1);
		}

	};
