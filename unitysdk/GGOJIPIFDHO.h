#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/GGOJIPIFDHO_LOLAIKLHEMF.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GGOJIPIFDHO_NJHIMHJAHKP;
namespace UnityEngine { class Collider; }

#define GGOJIPIFDHO_FHCPFFMMEOC_OFFSET UNITYSDK_OFFSET(0x743B00)
#define GGOJIPIFDHO_JENLLCBAMEK_OFFSET UNITYSDK_OFFSET(0x149C34E0)
#define GGOJIPIFDHO_MFFICBBPLAH_OFFSET UNITYSDK_OFFSET(0x149C3A00)
#define GGOJIPIFDHO__CCTOR_OFFSET UNITYSDK_OFFSET(0x149C3420)
#define GGOJIPIFDHO__CTOR_OFFSET UNITYSDK_OFFSET(0x743AF0)

inline static constexpr unsigned int GGOJIPIFDHO_TypeDefinitionIndex = 83229;

struct alignas(8) GGOJIPIFDHO
{
	static ::GGOJIPIFDHO_NJHIMHJAHKP** StaticGet_BJJKGGPLAIO()
	{
		return (::GGOJIPIFDHO_NJHIMHJAHKP**)Il2CppClass::FromTypeDefinitionIndex(GGOJIPIFDHO_TypeDefinitionIndex)->GetStaticField(0x31C20);
	}
	static ::GGOJIPIFDHO_NJHIMHJAHKP** StaticGet_ABLGLHBKKKI()
	{
		return (::GGOJIPIFDHO_NJHIMHJAHKP**)Il2CppClass::FromTypeDefinitionIndex(GGOJIPIFDHO_TypeDefinitionIndex)->GetStaticField(0x31C28);
	}
	static ::GGOJIPIFDHO_NJHIMHJAHKP** StaticGet_AOCMKOADBDB()
	{
		return (::GGOJIPIFDHO_NJHIMHJAHKP**)Il2CppClass::FromTypeDefinitionIndex(GGOJIPIFDHO_TypeDefinitionIndex)->GetStaticField(0x31C30);
	}
	static ::GGOJIPIFDHO_NJHIMHJAHKP** StaticGet_LJBBHHGPFOO()
	{
		return (::GGOJIPIFDHO_NJHIMHJAHKP**)Il2CppClass::FromTypeDefinitionIndex(GGOJIPIFDHO_TypeDefinitionIndex)->GetStaticField(0x31C38);
	}
	static ::UnityEngine::Color* StaticGet_MPIKDNNHMFF()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(GGOJIPIFDHO_TypeDefinitionIndex)->GetStaticField(0xA890);
	}
	static ::UnityEngine::Color* StaticGet_MMLCHBMFNIG()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(GGOJIPIFDHO_TypeDefinitionIndex)->GetStaticField(0xA8A0);
	}
	::System::Single GEEMKIKDHLB; // 0x10
	::System::Boolean IBAEIEDDKPE; // 0x14
	::System::Byte _padding0[0x3];
	::GGOJIPIFDHO_NJHIMHJAHKP* DEDFPGNKIHA; // 0x18

	::System::Void _ctor(::UnityEngine::Collider* EHHHMFKHNAI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + GGOJIPIFDHO__CTOR_OFFSET))(this, EHHHMFKHNAI);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGOJIPIFDHO__CCTOR_OFFSET))();
	}

	static ::UnityEngine::Color JENLLCBAMEK(::System::Single IMLLDOHDCNC)
	{
		return ((::UnityEngine::Color(*)(::System::Single))((::PBYTE)hIl2Cpp + GGOJIPIFDHO_JENLLCBAMEK_OFFSET))(IMLLDOHDCNC);
	}

	::System::Single FHCPFFMMEOC(::UnityEngine::Collider* EHHHMFKHNAI, ::GGOJIPIFDHO_LOLAIKLHEMF& OBIPHBKODPP)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Collider*, ::GGOJIPIFDHO_LOLAIKLHEMF&))((::PBYTE)hIl2Cpp + GGOJIPIFDHO_FHCPFFMMEOC_OFFSET))(this, EHHHMFKHNAI, OBIPHBKODPP);
	}

	static ::System::Single MFFICBBPLAH(::UnityEngine::Vector3 BEPMDFENBMH)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GGOJIPIFDHO_MFFICBBPLAH_OFFSET))(BEPMDFENBMH);
	}
};
