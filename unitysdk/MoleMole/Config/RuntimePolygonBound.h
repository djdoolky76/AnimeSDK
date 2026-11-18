#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/UnityEngine/Bounds.h"

class FKNIEPCILLG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_RUNTIMEPOLYGONBOUND_CGADIPLIANC_OFFSET UNITYSDK_OFFSET(0x69D0E0)
#define MOLEMOLE_CONFIG_RUNTIMEPOLYGONBOUND_ECNACLMHCPO_OFFSET UNITYSDK_OFFSET(0x69D0B0)
#define MOLEMOLE_CONFIG_RUNTIMEPOLYGONBOUND_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x5F2550)
#define MOLEMOLE_CONFIG_RUNTIMEPOLYGONBOUND_FROMFLX_OFFSET UNITYSDK_OFFSET(0x5F24C0)
#define MOLEMOLE_CONFIG_RUNTIMEPOLYGONBOUND_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x5F25B0)
#define MOLEMOLE_CONFIG_RUNTIMEPOLYGONBOUND_IOFGLHBALKK_OFFSET UNITYSDK_OFFSET(0x69D080)
#define MOLEMOLE_CONFIG_RUNTIMEPOLYGONBOUND_LOLGNKGCGDI_OFFSET UNITYSDK_OFFSET(0x69D130)
#define MOLEMOLE_CONFIG_RUNTIMEPOLYGONBOUND_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x5F25C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int RuntimePolygonBound_TypeDefinitionIndex = 82946;

	struct alignas(8) RuntimePolygonBound
	{
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* xzPoints; // 0x10
		::System::Single heightY; // 0x18
		::UnityEngine::Vector3 originPos; // 0x1C
		::UnityEngine::Vector3 eulerAngles; // 0x28

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RUNTIMEPOLYGONBOUND_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RUNTIMEPOLYGONBOUND_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RUNTIMEPOLYGONBOUND_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RUNTIMEPOLYGONBOUND_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IOFGLHBALKK(::UnityEngine::Vector3 CDJLOHGHLIN)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RUNTIMEPOLYGONBOUND_IOFGLHBALKK_OFFSET))(this, CDJLOHGHLIN);
		}

		::System::Boolean ECNACLMHCPO(::UnityEngine::Vector3 CDJLOHGHLIN, ::System::Single NCCDJLDKFGA)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RUNTIMEPOLYGONBOUND_ECNACLMHCPO_OFFSET))(this, CDJLOHGHLIN, NCCDJLDKFGA);
		}

		::System::Boolean CGADIPLIANC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RUNTIMEPOLYGONBOUND_CGADIPLIANC_OFFSET))(this);
		}

		::UnityEngine::Bounds LOLGNKGCGDI()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RUNTIMEPOLYGONBOUND_LOLGNKGCGDI_OFFSET))(this);
		}
	};
}
