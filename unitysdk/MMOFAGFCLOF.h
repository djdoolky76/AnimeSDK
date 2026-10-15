#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIJPIJFOOCN;
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::B51Racing { class B51RacingHUDProgressBarView; }

#define MMOFAGFCLOF_AHAELEIHCON_OFFSET UNITYSDK_OFFSET(0xB9D9DB0)
#define MMOFAGFCLOF_BCKJIPLDIBM_OFFSET UNITYSDK_OFFSET(0xB9D97D0)
#define MMOFAGFCLOF_CTOR_OFFSET UNITYSDK_OFFSET(0xB9D96F0)
#define MMOFAGFCLOF_INCEMCMKIOL_OFFSET UNITYSDK_OFFSET(0xB9D9C50)
#define MMOFAGFCLOF_JACMJFGGIBM_OFFSET UNITYSDK_OFFSET(0xB9D99B0)
#define MMOFAGFCLOF_JFPHCOANGJJ_OFFSET UNITYSDK_OFFSET(0xB9D9940)
#define MMOFAGFCLOF_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xB9D9710)
#define MMOFAGFCLOF_NNOJOICAONG_OFFSET UNITYSDK_OFFSET(0xB9D9AA0)
#define MMOFAGFCLOF_ODMCFIEKIMB_OFFSET UNITYSDK_OFFSET(0xB9D9780)
#define MMOFAGFCLOF_OGFKFADPBNO_OFFSET UNITYSDK_OFFSET(0xB9D9F60)

inline static constexpr unsigned int MMOFAGFCLOF_TypeDefinitionIndex = 81925;

	class MMOFAGFCLOF : public ::System::Object
	{
	public:
		::RPG::Client::UIStateCtrl* PACFDENGKHA; // 0x10
		::RPG::Client::B51Racing::B51RacingHUDProgressBarView* BHMFMBBLADC; // 0x18
		::RPG::Client::UIStateCtrl* BMIJOGPIDDD; // 0x20
		::RPG::Client::UIStateCtrl* NGIEGDOOAGF; // 0x28
		::RPG::Client::UIStateCtrl* CAAIPMLPNGE; // 0x30
		::RPG::Client::UIStateCtrl* GMPIPCEPENG; // 0x38
		::System::UInt32 JMHDOBKEMBJ; // 0x40
		::System::Boolean IFHMAKBIBIJ; // 0x44
		::System::Boolean ALJKFKHIEMC; // 0x45
		::System::Boolean IMGFHEALOLB; // 0x46
		::System::Boolean DBOLPEKMFIA; // 0x47
		::System::Boolean LNNCCIOLHGF; // 0x48
		// static const ::System::String* OLDEGLDHPCF; // 0x0
		// static const ::System::String* GHJGNOPPOEF; // 0x0
		// static const ::System::String* FBJGHCECALD; // 0x0
		// static const ::System::String* JFEMFPGLNMD; // 0x0
		// static const ::System::String* AKKCJLKIEAM; // 0x0
		::System::Void _ctor(::RPG::Client::B51Racing::B51RacingHUDProgressBarView* a1, ::RPG::Client::UIStateCtrl* a2, ::RPG::Client::UIStateCtrl* a3, ::RPG::Client::UIStateCtrl* a4, ::RPG::Client::UIStateCtrl* a5, ::RPG::Client::UIStateCtrl* a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingHUDProgressBarView*, ::RPG::Client::UIStateCtrl*, ::RPG::Client::UIStateCtrl*, ::RPG::Client::UIStateCtrl*, ::RPG::Client::UIStateCtrl*, ::RPG::Client::UIStateCtrl*))((::PBYTE)hIl2Cpp + MMOFAGFCLOF_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMOFAGFCLOF_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void BCKJIPLDIBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMOFAGFCLOF_BCKJIPLDIBM_OFFSET))(this);
		}

		::System::Void JACMJFGGIBM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MMOFAGFCLOF_JACMJFGGIBM_OFFSET))(this, a1);
		}

		::System::Void NNOJOICAONG(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + MMOFAGFCLOF_NNOJOICAONG_OFFSET))(this, a1, a2);
		}

		::System::Void AHAELEIHCON(::HIJPIJFOOCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIJPIJFOOCN*))((::PBYTE)hIl2Cpp + MMOFAGFCLOF_AHAELEIHCON_OFFSET))(this, a1);
		}

		::System::Void INCEMCMKIOL(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + MMOFAGFCLOF_INCEMCMKIOL_OFFSET))(this, a1, a2);
		}

		::System::Void OGFKFADPBNO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MMOFAGFCLOF_OGFKFADPBNO_OFFSET))(this, a1);
		}

		::System::Void JFPHCOANGJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMOFAGFCLOF_JFPHCOANGJJ_OFFSET))(this);
		}

		::System::Void ODMCFIEKIMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMOFAGFCLOF_ODMCFIEKIMB_OFFSET))(this);
		}

	};
