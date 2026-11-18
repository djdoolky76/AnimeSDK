#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Light; }

#define MOLEMOLE_LIGHTFADER_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1A90C1B0)
#define MOLEMOLE_LIGHTFADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A90BAF0)
#define MOLEMOLE_LIGHTFADER_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x1A90C520)
#define MOLEMOLE_LIGHTFADER_JEEACNJGNBD_OFFSET UNITYSDK_OFFSET(0x1A90C560)
#define MOLEMOLE_LIGHTFADER_JIKGIBBPHFF_OFFSET UNITYSDK_OFFSET(0x1A90BEB0)
#define MOLEMOLE_LIGHTFADER_KPHLDNKKHEK_OFFSET UNITYSDK_OFFSET(0x1A90C370)
#define MOLEMOLE_LIGHTFADER_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1A90C030)
#define MOLEMOLE_LIGHTFADER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A90BC20)
#define MOLEMOLE_LIGHTFADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A90BEA0)

namespace MoleMole
{
	inline static constexpr unsigned int LightFader_TypeDefinitionIndex = 93178;

	class LightFader : public ::System::Object
	{
	public:
		::UnityEngine::Light* light; // 0x10
		::System::Int32 lightIndex; // 0x18
		::System::Single _origIntensity; // 0x1C
		::System::Single _startIntensity; // 0x20
		::System::Int32 lightInstanceId; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTFADER__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTFADER_DISPOSE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTFADER_TOSTRING_OFFSET))(this);
		}

		::System::Void JIKGIBBPHFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTFADER_JIKGIBBPHFF_OFFSET))(this);
		}

		::System::Void NPOLNFDBOOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTFADER_NPOLNFDBOOD_OFFSET))(this);
		}

		::System::Void BBOMJDBNHIC(::UnityEngine::Light* LHEGCMCPBFP, ::System::Int32 BINHCCLINLB, ::System::Single OCCDPNFDKEO)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTFADER_BBOMJDBNHIC_OFFSET))(this, LHEGCMCPBFP, BINHCCLINLB, OCCDPNFDKEO);
		}

		::System::Void KPHLDNKKHEK(::System::Single IMLLDOHDCNC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTFADER_KPHLDNKKHEK_OFFSET))(this, IMLLDOHDCNC);
		}

		::System::String* DPIHOJBBGLA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTFADER_DPIHOJBBGLA_OFFSET))(this);
		}

		::System::Void JEEACNJGNBD(::System::Single IMLLDOHDCNC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTFADER_JEEACNJGNBD_OFFSET))(this, IMLLDOHDCNC);
		}
	};
}
