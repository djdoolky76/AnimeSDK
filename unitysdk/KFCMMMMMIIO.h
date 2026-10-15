#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenInteractType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"
class GJDPEGIFLGB;
class KFCMMMMMIIO_DEEMCOMPDJM;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenInteractController; }
namespace RPG::GameCore { class HipplenInteractWorkConfig; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define KFCMMMMMIIO_BOABHKIMAJA_OFFSET UNITYSDK_OFFSET(0xB3902C0)
#define KFCMMMMMIIO_BOEFIBKPEDC_OFFSET UNITYSDK_OFFSET(0xB390610)
#define KFCMMMMMIIO_BOMMECEBBEK_OFFSET UNITYSDK_OFFSET(0xB390D40)
#define KFCMMMMMIIO_CFNKLMMMENF_OFFSET UNITYSDK_OFFSET(0xB391000)
#define KFCMMMMMIIO_CMGKENHAHGP_OFFSET UNITYSDK_OFFSET(0xB390E40)
#define KFCMMMMMIIO_CTOR_OFFSET UNITYSDK_OFFSET(0xB391040)
#define KFCMMMMMIIO_EDKFLMCNMDJ_OFFSET UNITYSDK_OFFSET(0xB3904E0)
#define KFCMMMMMIIO_GENDGPCKNAF_OFFSET UNITYSDK_OFFSET(0xB38FE70)
#define KFCMMMMMIIO_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB38F7D0)
#define KFCMMMMMIIO_HPMNAAJPNKA_OFFSET UNITYSDK_OFFSET(0xB390260)
#define KFCMMMMMIIO_IIFINBAGBDG_OFFSET UNITYSDK_OFFSET(0xB390440)
#define KFCMMMMMIIO_JPEEKAAOCHI_OFFSET UNITYSDK_OFFSET(0xB390D90)
#define KFCMMMMMIIO_KOHOGMCJHBH_OFFSET UNITYSDK_OFFSET(0xB3903C0)
#define KFCMMMMMIIO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB38F8D0)
#define KFCMMMMMIIO_LHJBPEBMKDN_OFFSET UNITYSDK_OFFSET(0xB390380)
#define KFCMMMMMIIO_MBOCAJADFOO_OFFSET UNITYSDK_OFFSET(0xB38FCA0)
#define KFCMMMMMIIO_MEHIALBHLEJ_OFFSET UNITYSDK_OFFSET(0xB390F70)
#define KFCMMMMMIIO_MKOJLFJCNDP_OFFSET UNITYSDK_OFFSET(0xB390650)
#define KFCMMMMMIIO_MNAOCHOKFFJ_OFFSET UNITYSDK_OFFSET(0xB390FC0)
#define KFCMMMMMIIO_NHFPNPAGPPI_OFFSET UNITYSDK_OFFSET(0xB390540)
#define KFCMMMMMIIO_NIBJNBCAAIA_OFFSET UNITYSDK_OFFSET(0xB390D00)
#define KFCMMMMMIIO_NJEPOLNAFGF_OFFSET UNITYSDK_OFFSET(0xB38FF50)
#define KFCMMMMMIIO_NMOMLPEJLBB_OFFSET UNITYSDK_OFFSET(0xB390400)
#define KFCMMMMMIIO_PHJPGLIPHBP_OFFSET UNITYSDK_OFFSET(0xB38FD10)

	class KFCMMMMMIIO : public ::System::Object
	{
	public:
		::RPG::Client::ActivityHipplen::ActivityHipplenInteractController* CPIIOIPAAKK; // 0x10
		::GJDPEGIFLGB* CKLLIFDLNNO; // 0x18
		::UnityEngine::GameObject* NOJJNJHHMGD; // 0x20
		::KFCMMMMMIIO_DEEMCOMPDJM* DBLMELLIKJH; // 0x28
		::RPG::GameCore::HipplenInteractWorkConfig* OFKGLJOAMLD; // 0x30
		::UnityEngine::GameObject* NCPNKDBIINJ; // 0x38
		::System::Boolean PPIGLCIEIIM; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCMMMMMIIO_CTOR_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCMMMMMIIO_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::GJDPEGIFLGB* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractController* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GJDPEGIFLGB*, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractController*))((::PBYTE)hIl2Cpp + KFCMMMMMIIO_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* MBOCAJADFOO(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KFCMMMMMIIO_MBOCAJADFOO_OFFSET))(this, a1);
		}

		::System::Void GENDGPCKNAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCMMMMMIIO_GENDGPCKNAF_OFFSET))(this);
		}

		::System::Boolean NJEPOLNAFGF(::UnityEngine::Vector2 a1, ::UnityEngine::RaycastHit a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + KFCMMMMMIIO_NJEPOLNAFGF_OFFSET))(this, a1, a2);
		}

		::System::Single HPMNAAJPNKA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCMMMMMIIO_HPMNAAJPNKA_OFFSET))(this);
		}

		::RPG::GameCore::HipplenInteractType BOABHKIMAJA()
		{
			return ((::RPG::GameCore::HipplenInteractType(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCMMMMMIIO_BOABHKIMAJA_OFFSET))(this);
		}

		::UnityEngine::GameObject* PHJPGLIPHBP()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCMMMMMIIO_PHJPGLIPHBP_OFFSET))(this);
		}

		::System::Void LHJBPEBMKDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCMMMMMIIO_LHJBPEBMKDN_OFFSET))(this);
		}

		::System::Void KOHOGMCJHBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCMMMMMIIO_KOHOGMCJHBH_OFFSET))(this);
		}

		::System::Void NMOMLPEJLBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCMMMMMIIO_NMOMLPEJLBB_OFFSET))(this);
		}

		::RPG::GameCore::HipplenInteractWorkConfig* IIFINBAGBDG(::System::String* a1)
		{
			return ((::RPG::GameCore::HipplenInteractWorkConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KFCMMMMMIIO_IIFINBAGBDG_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* EDKFLMCNMDJ()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCMMMMMIIO_EDKFLMCNMDJ_OFFSET))(this);
		}

		::UnityEngine::Transform* NHFPNPAGPPI()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCMMMMMIIO_NHFPNPAGPPI_OFFSET))(this);
		}

		::System::Void BOEFIBKPEDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCMMMMMIIO_BOEFIBKPEDC_OFFSET))(this);
		}

		::System::Void MKOJLFJCNDP(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + KFCMMMMMIIO_MKOJLFJCNDP_OFFSET))(this, a1, a2);
		}

		::System::Void NIBJNBCAAIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCMMMMMIIO_NIBJNBCAAIA_OFFSET))(this);
		}

		::System::Void BOMMECEBBEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCMMMMMIIO_BOMMECEBBEK_OFFSET))(this);
		}

		::System::Void JPEEKAAOCHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCMMMMMIIO_JPEEKAAOCHI_OFFSET))(this);
		}

		::System::Void CMGKENHAHGP(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KFCMMMMMIIO_CMGKENHAHGP_OFFSET))(this, a1);
		}

		::System::Void MEHIALBHLEJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KFCMMMMMIIO_MEHIALBHLEJ_OFFSET))(this, a1);
		}

		::System::Boolean MNAOCHOKFFJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCMMMMMIIO_MNAOCHOKFFJ_OFFSET))(this);
		}

		::System::Void CFNKLMMMENF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCMMMMMIIO_CFNKLMMMENF_OFFSET))(this);
		}

	};
