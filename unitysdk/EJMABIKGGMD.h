#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/KKABKIOKMOP.h"
namespace RPG::Client { class UIPrefabLoader; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define EJMABIKGGMD_ADNKBFCJMJC_OFFSET UNITYSDK_OFFSET(0x154ED2F0)
#define EJMABIKGGMD_BBFNALCHKKK_OFFSET UNITYSDK_OFFSET(0x154ED440)
#define EJMABIKGGMD_BLFHDCNOFGG_OFFSET UNITYSDK_OFFSET(0x154ED490)
#define EJMABIKGGMD_BOEEIOMJGKG_OFFSET UNITYSDK_OFFSET(0x154ED3E0)
#define EJMABIKGGMD_CTOR_OFFSET UNITYSDK_OFFSET(0x154ECDC0)
#define EJMABIKGGMD_DCPLHPFGNHB_OFFSET UNITYSDK_OFFSET(0x154ECDF0)
#define EJMABIKGGMD_FJMKAOHGMHH_OFFSET UNITYSDK_OFFSET(0x154ED4D0)
#define EJMABIKGGMD_JBEHEILLOEG_OFFSET UNITYSDK_OFFSET(0x154ED050)
#define EJMABIKGGMD_NAJOPNMPHPF_OFFSET UNITYSDK_OFFSET(0x154ED0E0)

	class EJMABIKGGMD
	{
	public:
		::UnityEngine::GameObject* LBNBPMIFDHI; // 0x60
		::RPG::Client::UIPrefabLoader* HMELCEOFACP; // 0x68
		::UnityEngine::Transform* OIMCMKFHMDK; // 0x70
		::UnityEngine::Quaternion HBAIICJGPGC; // 0x78
		::System::Single PBLGHIGPEIP; // 0x88
		::UnityEngine::Vector3 OIMMGKNHKOA; // 0x8C
		::System::Void _ctor(::KKABKIOKMOP a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKABKIOKMOP))((::PBYTE)hIl2Cpp + EJMABIKGGMD_CTOR_OFFSET))(this, a1);
		}

		::System::Void DCPLHPFGNHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMABIKGGMD_DCPLHPFGNHB_OFFSET))(this);
		}

		::System::Void ADNKBFCJMJC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EJMABIKGGMD_ADNKBFCJMJC_OFFSET))(this, a1);
		}

		::System::Void BOEEIOMJGKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMABIKGGMD_BOEEIOMJGKG_OFFSET))(this);
		}

		::System::Void BBFNALCHKKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMABIKGGMD_BBFNALCHKKK_OFFSET))(this);
		}

		::System::Void BLFHDCNOFGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMABIKGGMD_BLFHDCNOFGG_OFFSET))(this);
		}

		::System::Void FJMKAOHGMHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMABIKGGMD_FJMKAOHGMHH_OFFSET))(this);
		}

		::System::Void NAJOPNMPHPF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EJMABIKGGMD_NAJOPNMPHPF_OFFSET))(this, a1);
		}

		::System::Void JBEHEILLOEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMABIKGGMD_JBEHEILLOEG_OFFSET))(this);
		}

	};
