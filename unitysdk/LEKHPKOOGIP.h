#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFONKMKLHNI.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/KBKLCGKKIPI.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define LEKHPKOOGIP_BEJLHALMHDL_OFFSET UNITYSDK_OFFSET(0x1F649AA0)
#define LEKHPKOOGIP_BFBMIOODGEK_OFFSET UNITYSDK_OFFSET(0x1F649A50)
#define LEKHPKOOGIP_BKFGLADPMKB_1_OFFSET UNITYSDK_OFFSET(0x1F64A8A0)
#define LEKHPKOOGIP_BKFGLADPMKB_OFFSET UNITYSDK_OFFSET(0x1F64A1B0)
#define LEKHPKOOGIP_BOAGGBCJHCE_OFFSET UNITYSDK_OFFSET(0x1F64AD30)
#define LEKHPKOOGIP_DFBNOKOKBAN_OFFSET UNITYSDK_OFFSET(0x1F64AAC0)
#define LEKHPKOOGIP_ENNIIACOGBE_OFFSET UNITYSDK_OFFSET(0x1F64A450)
#define LEKHPKOOGIP_FJNNHOGKICD_OFFSET UNITYSDK_OFFSET(0x1F64AC90)
#define LEKHPKOOGIP_GOHLJPGNALE_OFFSET UNITYSDK_OFFSET(0x1F64A470)
#define LEKHPKOOGIP_HFLHIEOELPH_OFFSET UNITYSDK_OFFSET(0x1F64AC00)
#define LEKHPKOOGIP_IHBPFGHPJJP_OFFSET UNITYSDK_OFFSET(0x1F64AB40)
#define LEKHPKOOGIP_JLEGHNGEBOG_OFFSET UNITYSDK_OFFSET(0x1F64ABA0)
#define LEKHPKOOGIP_JLNLOHBMNNN_OFFSET UNITYSDK_OFFSET(0x1F64A3C0)
#define LEKHPKOOGIP_JMPAPDEEGAC_OFFSET UNITYSDK_OFFSET(0x1F649E20)
#define LEKHPKOOGIP_KJILLOLNGOF_OFFSET UNITYSDK_OFFSET(0x1F64AEA0)
#define LEKHPKOOGIP_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1F64A1A0)
#define LEKHPKOOGIP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1F649D10)
#define LEKHPKOOGIP_ONGNMKFJINE_OFFSET UNITYSDK_OFFSET(0x1F64A7E0)
#define LEKHPKOOGIP_ONPBPCPPAAD_OFFSET UNITYSDK_OFFSET(0x1F64A830)
#define LEKHPKOOGIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1F64A120)

inline static constexpr unsigned int LEKHPKOOGIP_TypeDefinitionIndex = 95090;

class LEKHPKOOGIP : public ::BFONKMKLHNI
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x49; // 0x0
	::UnityEngine::GameObject* JEIDPPCEHLD; // 0x70
	::Il2CppArray<::UnityEngine::GameObject*>* LKADNCCFEMG; // 0x78
	::Foundation::AssetPath EHGNJMJMAGA; // 0x80
	::Il2CppArray<::UnityEngine::Material*>* JAIONPNPALN; // 0x90
	::Il2CppArray<::Foundation::AssetPath>* HNCCPMAIDDG; // 0x98
	::System::Single HMFINJODBKO; // 0xA0
	::System::Byte _padding0[0x4];
	::System::UInt64 PFPOKPHKJNB; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKHPKOOGIP__CTOR_OFFSET))(this);
	}

	::System::Int32 BFBMIOODGEK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKHPKOOGIP_BFBMIOODGEK_OFFSET))(this);
	}

	::System::Void BEJLHALMHDL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKHPKOOGIP_BEJLHALMHDL_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKHPKOOGIP_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void BKFGLADPMKB(::System::String* HIAIKHDFCLN, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + LEKHPKOOGIP_BKFGLADPMKB_OFFSET))(this, HIAIKHDFCLN, EGEGIMGMJHN);
	}

	::System::Void JLNLOHBMNNN(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LEKHPKOOGIP_JLNLOHBMNNN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GOHLJPGNALE(::Foundation::AssetPath KIOFANCLJEE)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + LEKHPKOOGIP_GOHLJPGNALE_OFFSET))(this, KIOFANCLJEE);
	}

	::UnityEngine::Quaternion ONGNMKFJINE()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKHPKOOGIP_ONGNMKFJINE_OFFSET))(this);
	}

	::System::Single ONPBPCPPAAD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKHPKOOGIP_ONPBPCPPAAD_OFFSET))(this);
	}

	::System::Void BKFGLADPMKB_1(::System::String* HIAIKHDFCLN, ::UnityEngine::Color EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + LEKHPKOOGIP_BKFGLADPMKB_1_OFFSET))(this, HIAIKHDFCLN, EGEGIMGMJHN);
	}

	::System::Void DFBNOKOKBAN(::UnityEngine::Quaternion EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + LEKHPKOOGIP_DFBNOKOKBAN_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Vector3 IHBPFGHPJJP()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKHPKOOGIP_IHBPFGHPJJP_OFFSET))(this);
	}

	::UnityEngine::Vector3 JLEGHNGEBOG()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKHPKOOGIP_JLEGHNGEBOG_OFFSET))(this);
	}

	::System::Void HFLHIEOELPH(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LEKHPKOOGIP_HFLHIEOELPH_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Transform* ENNIIACOGBE()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKHPKOOGIP_ENNIIACOGBE_OFFSET))(this);
	}

	::System::Void FJNNHOGKICD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKHPKOOGIP_FJNNHOGKICD_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKHPKOOGIP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void JMPAPDEEGAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKHPKOOGIP_JMPAPDEEGAC_OFFSET))(this);
	}

	::KBKLCGKKIPI BOAGGBCJHCE()
	{
		return ((::KBKLCGKKIPI(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKHPKOOGIP_BOAGGBCJHCE_OFFSET))(this);
	}

	::LEKHPKOOGIP* KJILLOLNGOF()
	{
		return ((::LEKHPKOOGIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKHPKOOGIP_KJILLOLNGOF_OFFSET))(this);
	}
};
