#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NBEDFOOGEBN.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CNOPNCEBJHL;
class MCKJMKBPMCC;
namespace MoleMole { class CustomCollisionConfigData; }
namespace MoleMole::Cameras { class CameraDataAccessor; }

#define NEPOHJIFNNA_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x12C59400)
#define NEPOHJIFNNA__CTOR_OFFSET UNITYSDK_OFFSET(0x12C593A0)

inline static constexpr unsigned int NEPOHJIFNNA_TypeDefinitionIndex = 83263;

class NEPOHJIFNNA : public ::NBEDFOOGEBN
{
public:
	::CNOPNCEBJHL* EADFNIDNGBK; // 0x28
	::Il2CppArray<::UnityEngine::RaycastHit>* GPEFFIBECIC; // 0x30
	::UnityEngine::Ray IMBDAEHJOMD; // 0x38

	::System::Void _ctor(::MCKJMKBPMCC* LMIPOHOKCHC, ::MoleMole::CustomCollisionConfigData* DFMKILICPFB, ::MoleMole::Cameras::CameraDataAccessor* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::MCKJMKBPMCC*, ::MoleMole::CustomCollisionConfigData*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + NEPOHJIFNNA__CTOR_OFFSET))(this, LMIPOHOKCHC, DFMKILICPFB, LJBPECKCCEA);
	}

	::System::Boolean GIAOBHOJCDP(::Cinemachine::CameraState JKBLDFBGBPK, ::System::Single BDEDDEGJFKL, ::UnityEngine::Vector3& AMKHCCDFJAF)
	{
		return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CameraState, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + NEPOHJIFNNA_GIAOBHOJCDP_OFFSET))(this, JKBLDFBGBPK, BDEDDEGJFKL, AMKHCCDFJAF);
	}
};
