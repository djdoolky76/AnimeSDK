#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/QueryTriggerInteraction.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System { class String; }

#define JEADJDGHAKN_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x786510)
#define JEADJDGHAKN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x786370)
#define JEADJDGHAKN_EQUALS_OFFSET UNITYSDK_OFFSET(0x786330)
#define JEADJDGHAKN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x786470)
#define JEADJDGHAKN_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x786490)
#define JEADJDGHAKN_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x7862C0)
#define JEADJDGHAKN_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1659F2C0)
#define JEADJDGHAKN_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x7865B0)
#define JEADJDGHAKN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x786480)
#define JEADJDGHAKN__CTOR_OFFSET UNITYSDK_OFFSET(0x7862D0)

inline static constexpr unsigned int JEADJDGHAKN_TypeDefinitionIndex = 39988;

struct alignas(4) JEADJDGHAKN
{
	::UnityEngine::Vector3 BKDBPNNGNPA; // 0x10
	::UnityEngine::Vector3 CEHGFFDBHOJ; // 0x1C
	::System::Single IGIICAJEGJC; // 0x28
	::System::Int32 ODLHMLGNMNJ; // 0x2C
	::UnityEngine::QueryTriggerInteraction GPGAJAMIPKI; // 0x30
	::System::Byte _padding0[0x4];
	::MoleMole::EntityHandle CMDCIADBCCN; // 0x38

	::System::Void _ctor(::UnityEngine::Vector3& EIIDOADGOIF, ::UnityEngine::Vector3& JBCNPOHMGPE, ::System::Single& OGIHENKICBP, ::System::Int32& FBNGKPGLADH, ::UnityEngine::QueryTriggerInteraction& LNDODEPFKDB, ::MoleMole::EntityHandle NGODDCIOJDP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single&, ::System::Int32&, ::UnityEngine::QueryTriggerInteraction&, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + JEADJDGHAKN__CTOR_OFFSET))(this, EIIDOADGOIF, JBCNPOHMGPE, OGIHENKICBP, FBNGKPGLADH, LNDODEPFKDB, NGODDCIOJDP);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JEADJDGHAKN_JDAPDDEOCEA_OFFSET))(this);
	}

	/*
	::System::Boolean Equals(::JEADJDGHAKN LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::JEADJDGHAKN))((::PBYTE)hIl2Cpp + JEADJDGHAKN_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JEADJDGHAKN_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEADJDGHAKN_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEADJDGHAKN_TOSTRING_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEADJDGHAKN_HLPHPBAODIF_OFFSET))(this);
	}

	/*
	static ::JEADJDGHAKN JFDOOELFAOA(::MoleMole::EntityHandle& HPADNAEINPK)
	{
		return ((::JEADJDGHAKN(*)(::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + JEADJDGHAKN_JFDOOELFAOA_OFFSET))(HPADNAEINPK);
	}
	*/

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEADJDGHAKN_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JEADJDGHAKN_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
