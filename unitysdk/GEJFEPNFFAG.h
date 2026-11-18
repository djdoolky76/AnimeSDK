#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

class CNOPNCEBJHL;
class MCKJMKBPMCC;
namespace MoleMole { class CustomCollisionConfigData; }
namespace MoleMole::Cameras { class CameraDataAccessor; }

#define GEJFEPNFFAG__CTOR_OFFSET UNITYSDK_OFFSET(0x189F8DD0)

inline static constexpr unsigned int GEJFEPNFFAG_TypeDefinitionIndex = 84344;

class GEJFEPNFFAG : public ::System::Object
{
public:
	::Il2CppArray<::UnityEngine::RaycastHit>* GPEFFIBECIC; // 0x10
	::MoleMole::CustomCollisionConfigData* ONPHPIJENEC; // 0x18
	::MCKJMKBPMCC* FPPKDGDNIIC; // 0x20
	::CNOPNCEBJHL* EADFNIDNGBK; // 0x28
	::MoleMole::Cameras::CameraDataAccessor* LJBPECKCCEA; // 0x30
	::UnityEngine::Ray IMBDAEHJOMD; // 0x38

	::System::Void _ctor(::MCKJMKBPMCC* LMIPOHOKCHC, ::MoleMole::CustomCollisionConfigData* DFMKILICPFB, ::MoleMole::Cameras::CameraDataAccessor* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::MCKJMKBPMCC*, ::MoleMole::CustomCollisionConfigData*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + GEJFEPNFFAG__CTOR_OFFSET))(this, LMIPOHOKCHC, DFMKILICPFB, LJBPECKCCEA);
	}
};
