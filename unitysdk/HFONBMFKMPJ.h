#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class JCPHHMANKBM;
namespace RPG::GameCore { class DriftComponentData; }
namespace UnityEngine { class Transform; }

#define HFONBMFKMPJ_BKKILEOFBPH_OFFSET UNITYSDK_OFFSET(0x1C432230)
#define HFONBMFKMPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C432110)
#define HFONBMFKMPJ_GET_RUNTIMEDATA_OFFSET UNITYSDK_OFFSET(0x1C4320A0)
#define HFONBMFKMPJ_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1C432080)
#define HFONBMFKMPJ_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x1C4320B0)
#define HFONBMFKMPJ_MAMDDODKFGO_OFFSET UNITYSDK_OFFSET(0x1C432160)
#define HFONBMFKMPJ_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1C432450)
#define HFONBMFKMPJ_PMGGPCDDHGL_OFFSET UNITYSDK_OFFSET(0x1C4322D0)
#define HFONBMFKMPJ_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x1C432090)

inline static constexpr unsigned int HFONBMFKMPJ_TypeDefinitionIndex = 75905;

	class HFONBMFKMPJ : public ::System::Object
	{
	public:
		::JCPHHMANKBM* _RuntimeData_k__BackingField; // 0x10
		::UnityEngine::Transform* _Target_k__BackingField; // 0x18
		::UnityEngine::Vector3 PCCMGIGEIIF; // 0x20
		::UnityEngine::Quaternion HGIMOKOOLEK; // 0x2C
		::System::Void _ctor(::UnityEngine::Transform* a1, ::RPG::GameCore::DriftComponentData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::GameCore::DriftComponentData*))((::PBYTE)hIl2Cpp + HFONBMFKMPJ_CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Transform* get_Target()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFONBMFKMPJ_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HFONBMFKMPJ_SET_TARGET_OFFSET))(this, a1);
		}

		::JCPHHMANKBM* get_RuntimeData()
		{
			return ((::JCPHHMANKBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFONBMFKMPJ_GET_RUNTIMEDATA_OFFSET))(this);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFONBMFKMPJ_LDAMHBBILAD_OFFSET))(this);
		}

		::System::Void MAMDDODKFGO(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HFONBMFKMPJ_MAMDDODKFGO_OFFSET))(this, a1);
		}

		::System::Void BKKILEOFBPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFONBMFKMPJ_BKKILEOFBPH_OFFSET))(this);
		}

		::System::Void PMGGPCDDHGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFONBMFKMPJ_PMGGPCDDHGL_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HFONBMFKMPJ_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
