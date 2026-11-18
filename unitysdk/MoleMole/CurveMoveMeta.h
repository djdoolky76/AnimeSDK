#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyMetadataBase.h"
#include "unitysdk/JMKDJOBGEKA.h"

#define MOLEMOLE_CURVEMOVEMETA_AKANIDACAFA_OFFSET UNITYSDK_OFFSET(0x118F7720)
#define MOLEMOLE_CURVEMOVEMETA_GET_IGNOREINCURVEMOVE_OFFSET UNITYSDK_OFFSET(0x118F75E0)
#define MOLEMOLE_CURVEMOVEMETA_GET_REVERTORIENTATIONAXIS_OFFSET UNITYSDK_OFFSET(0x118F75F0)
#define MOLEMOLE_CURVEMOVEMETA_JBMGCPKJCPB_OFFSET UNITYSDK_OFFSET(0x118F7680)
#define MOLEMOLE_CURVEMOVEMETA__CTOR_OFFSET UNITYSDK_OFFSET(0x118F76D0)

namespace MoleMole
{
	inline static constexpr unsigned int CurveMoveMeta_TypeDefinitionIndex = 43966;

	class CurveMoveMeta : public ::FluffyUnderware::Curvy::CurvyMetadataBase
	{
	public:
		::System::Boolean _ignoreInCurveMove; // 0x30
		::System::Boolean _revertOrientationAxis; // 0x31
		::System::Byte _padding0[0x2];
		::JMKDJOBGEKA _connectionOrientationMode; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CURVEMOVEMETA__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IgnoreInCurveMove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CURVEMOVEMETA_GET_IGNOREINCURVEMOVE_OFFSET))(this);
		}

		::System::Boolean get_RevertOrientationAxis()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CURVEMOVEMETA_GET_REVERTORIENTATIONAXIS_OFFSET))(this);
		}

		::JMKDJOBGEKA JBMGCPKJCPB()
		{
			return ((::JMKDJOBGEKA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CURVEMOVEMETA_JBMGCPKJCPB_OFFSET))(this);
		}

		::System::Void AKANIDACAFA(::JMKDJOBGEKA EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::JMKDJOBGEKA))((::PBYTE)hIl2Cpp + MOLEMOLE_CURVEMOVEMETA_AKANIDACAFA_OFFSET))(this, EGEGIMGMJHN);
		}
	};
}
