#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCEJFGMOHGP.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
class POHNBOACDHB;
namespace System { class Object; }

#define DDHMKMMFGDF_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0x17738230)
#define DDHMKMMFGDF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1773A5D0)
#define DDHMKMMFGDF_CTOR_OFFSET UNITYSDK_OFFSET(0x1773A690)
#define DDHMKMMFGDF_EHEBJOCEJCJ_OFFSET UNITYSDK_OFFSET(0x177387A0)
#define DDHMKMMFGDF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x17738280)
#define DDHMKMMFGDF_LFIFIEGFMOM_OFFSET UNITYSDK_OFFSET(0x17738520)
#define DDHMKMMFGDF_OOFIFMBFGEN_OFFSET UNITYSDK_OFFSET(0x17739400)

inline static constexpr unsigned int DDHMKMMFGDF_TypeDefinitionIndex = 79378;

	class DDHMKMMFGDF : public ::CCEJFGMOHGP
	{
	public:
		::Il2CppArray<::UnityEngine::Vector3>* NHHMNFGCKJL; // 0x20
		::Il2CppArray<::UnityEngine::RaycastHit>* KIPGEBIACHF; // 0x28
		::System::Single FLHOEGBFPJB; // 0x30
		::System::Int32 KNGHDCLCHOL; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHMKMMFGDF_CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FiveDim::PropMoveState BPMGPFLHPLC()
		{
			return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHMKMMFGDF_BPMGPFLHPLC_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::POHNBOACDHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POHNBOACDHB*))((::PBYTE)hIl2Cpp + DDHMKMMFGDF_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void LFIFIEGFMOM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DDHMKMMFGDF_LFIFIEGFMOM_OFFSET))(this, a1);
		}

		::System::Void EHEBJOCEJCJ(::UnityEngine::Vector3 a1, ::System::Object* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Object*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DDHMKMMFGDF_EHEBJOCEJCJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean OOFIFMBFGEN(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DDHMKMMFGDF_OOFIFMBFGEN_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHMKMMFGDF_CLEAR_OFFSET))(this);
		}

	};
