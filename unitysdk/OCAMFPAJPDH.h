#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/DronesPuzzleAreaConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Action; }

#define OCAMFPAJPDH_AGCGPIKMDJP_OFFSET UNITYSDK_OFFSET(0xBD55FD0)
#define OCAMFPAJPDH_CNPGFLLNLNK_OFFSET UNITYSDK_OFFSET(0xBD56110)
#define OCAMFPAJPDH_CTOR_OFFSET UNITYSDK_OFFSET(0xBD56370)
#define OCAMFPAJPDH_GET_ISENTERED_OFFSET UNITYSDK_OFFSET(0xBD55E90)
#define OCAMFPAJPDH_JFCKIDHCEIH_OFFSET UNITYSDK_OFFSET(0xBD55C30)
#define OCAMFPAJPDH_JPBGKJHINBC_OFFSET UNITYSDK_OFFSET(0xBD55D00)
#define OCAMFPAJPDH_NIDHKMLDNOJ_OFFSET UNITYSDK_OFFSET(0xBD55DC0)
#define OCAMFPAJPDH_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBD55EB0)
#define OCAMFPAJPDH_SET_ISENTERED_OFFSET UNITYSDK_OFFSET(0xBD55EA0)

	class OCAMFPAJPDH : public ::System::Object
	{
	public:
		::System::Action* AHEEAFKFALM; // 0x10
		::System::Action* CLJEBKODGHK; // 0x18
		::RPG::Client::Prop::DronesPuzzleAreaConfig EABKOHGCHFP; // 0x20
		::System::Boolean _IsEntered_k__BackingField; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAMFPAJPDH_CTOR_OFFSET))(this);
		}

		::System::Single JFCKIDHCEIH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAMFPAJPDH_JFCKIDHCEIH_OFFSET))(this);
		}

		::System::Single NIDHKMLDNOJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAMFPAJPDH_NIDHKMLDNOJ_OFFSET))(this);
		}

		::UnityEngine::Vector3 JPBGKJHINBC()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAMFPAJPDH_JPBGKJHINBC_OFFSET))(this);
		}

		::System::Boolean get_IsEntered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAMFPAJPDH_GET_ISENTERED_OFFSET))(this);
		}

		::System::Void set_IsEntered(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OCAMFPAJPDH_SET_ISENTERED_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OCAMFPAJPDH_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Boolean AGCGPIKMDJP(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OCAMFPAJPDH_AGCGPIKMDJP_OFFSET))(this, a1);
		}

		::System::Void CNPGFLLNLNK(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OCAMFPAJPDH_CNPGFLLNLNK_OFFSET))(this, a1);
		}

	};
