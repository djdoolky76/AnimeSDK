#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBILPPJLIMK.h"
#include "unitysdk/FMPCODLIOLG.h"
class NAMMEJAABAM;
namespace RPG::Client { class UIStateCtrl; }

#define GLFJKDOINMH_ACLJLDJNBFH_OFFSET UNITYSDK_OFFSET(0x15AB0900)
#define GLFJKDOINMH_CTOR_OFFSET UNITYSDK_OFFSET(0x15AB0AC0)
#define GLFJKDOINMH_EBEHFIGHJAM_OFFSET UNITYSDK_OFFSET(0x15AB08C0)
#define GLFJKDOINMH_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15AB0870)
#define GLFJKDOINMH_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x15AB0750)
#define GLFJKDOINMH_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x15AB06B0)
#define GLFJKDOINMH_PIOGLEMHPJE_OFFSET UNITYSDK_OFFSET(0x15AB0A80)
#define GLFJKDOINMH__ONBIND_OFFSET UNITYSDK_OFFSET(0x15AB0630)

	class GLFJKDOINMH : public ::FMPCODLIOLG
	{
	public:
		::NAMMEJAABAM* GMHMFHCIHGC; // 0x60
		::RPG::Client::UIStateCtrl* JINLLOBAGML; // 0x68
		::CBILPPJLIMK AIJODBLPFHG; // 0x70
		// static const ::System::String* DAODEKGFLIK; // 0x0
		// static const ::System::String* AAJLIKDONDG; // 0x0
		// static const ::System::String* PNKIHIGMFON; // 0x0
		// static const ::System::String* BPGJMMEFHEH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFJKDOINMH_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFJKDOINMH__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::CBILPPJLIMK a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBILPPJLIMK))((::PBYTE)hIl2Cpp + GLFJKDOINMH_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFJKDOINMH_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFJKDOINMH_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void ACLJLDJNBFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFJKDOINMH_ACLJLDJNBFH_OFFSET))(this);
		}

		::System::Boolean PIOGLEMHPJE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFJKDOINMH_PIOGLEMHPJE_OFFSET))(this);
		}

		::System::Boolean EBEHFIGHJAM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFJKDOINMH_EBEHFIGHJAM_OFFSET))(this);
		}

	};
