#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UIInLevelNPCNameWidgetController; }
namespace System { class Object; }

#define ECGCMHEDEPC_JLHGAJKBIPF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x78EB10)
#define ECGCMHEDEPC_JLHGAJKBIPF_EQUALS_OFFSET UNITYSDK_OFFSET(0x78EA70)
#define ECGCMHEDEPC_JLHGAJKBIPF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x78EB20)
#define ECGCMHEDEPC_JLHGAJKBIPF_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x78EBA0)
#define ECGCMHEDEPC_JLHGAJKBIPF_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x78EB30)
#define ECGCMHEDEPC_JLHGAJKBIPF_LBCBPEJEHNB_OFFSET UNITYSDK_OFFSET(0x78E950)

inline static constexpr unsigned int ECGCMHEDEPC_JLHGAJKBIPF_TypeDefinitionIndex = 55282;

struct alignas(8) ECGCMHEDEPC_JLHGAJKBIPF
{
	::MoleMole::UIInLevelNPCNameWidgetController* KEGLKOALFMN; // 0x10
	::System::UInt32 MNAIIBHLHMA; // 0x18

	::UnityEngine::Vector3 LBCBPEJEHNB()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_JLHGAJKBIPF_LBCBPEJEHNB_OFFSET))(this);
	}

	/*
	::System::Boolean Equals(::ECGCMHEDEPC_JLHGAJKBIPF LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::ECGCMHEDEPC_JLHGAJKBIPF))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_JLHGAJKBIPF_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_JLHGAJKBIPF_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_JLHGAJKBIPF_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_JLHGAJKBIPF_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_JLHGAJKBIPF_HLPHPBAODIF_OFFSET))(this);
	}
};
