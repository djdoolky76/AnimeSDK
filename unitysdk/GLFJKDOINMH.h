#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBILPPJLIMK.h"
#include "unitysdk/FMPCODLIOLG.h"
class NAMMEJAABAM;
namespace RPG::Client { class UIStateCtrl; }

#define GLFJKDOINMH_ACLJLDJNBFH_OFFSET UNITYSDK_OFFSET(0x16A32EB0)
#define GLFJKDOINMH_CTOR_OFFSET UNITYSDK_OFFSET(0x16A33070)
#define GLFJKDOINMH_EBEHFIGHJAM_OFFSET UNITYSDK_OFFSET(0x16A32E70)
#define GLFJKDOINMH_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x16A32D00)
#define GLFJKDOINMH_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x16A32C60)
#define GLFJKDOINMH_PIOGLEMHPJE_OFFSET UNITYSDK_OFFSET(0x16A33030)
#define GLFJKDOINMH__ONBIND_OFFSET UNITYSDK_OFFSET(0x16A32B90)
#define GLFJKDOINMH__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x16A32E20)

inline static constexpr unsigned int GLFJKDOINMH_TypeDefinitionIndex = 73653;

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

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFJKDOINMH__SETUPVIEW_OFFSET))(this);
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
