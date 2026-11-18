#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NBEDFOOGEBN.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/UnityEngine/Vector3.h"

class HJDGNDLNJFB;
class MCKJMKBPMCC;
namespace MoleMole { class CustomCollisionConfigData; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HODGKGJJPCE_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x140C74C0)
#define HODGKGJJPCE__CTOR_OFFSET UNITYSDK_OFFSET(0x140C7300)

inline static constexpr unsigned int HODGKGJJPCE_TypeDefinitionIndex = 67001;

class HODGKGJJPCE : public ::NBEDFOOGEBN
{
public:
	::Il2CppArray<::UnityEngine::Ray>* FOMIEGMKHNE; // 0x28
	::HJDGNDLNJFB* EADFNIDNGBK; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>* GPEFFIBECIC; // 0x38

	::System::Void _ctor(::MCKJMKBPMCC* LMIPOHOKCHC, ::MoleMole::CustomCollisionConfigData* DFMKILICPFB, ::MoleMole::Cameras::CameraDataAccessor* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::MCKJMKBPMCC*, ::MoleMole::CustomCollisionConfigData*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + HODGKGJJPCE__CTOR_OFFSET))(this, LMIPOHOKCHC, DFMKILICPFB, LJBPECKCCEA);
	}

	::System::Boolean GIAOBHOJCDP(::Cinemachine::CameraState JKBLDFBGBPK, ::System::Single BDEDDEGJFKL, ::UnityEngine::Vector3& AMKHCCDFJAF)
	{
		return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CameraState, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + HODGKGJJPCE_GIAOBHOJCDP_OFFSET))(this, JKBLDFBGBPK, BDEDDEGJFKL, AMKHCCDFJAF);
	}
};
