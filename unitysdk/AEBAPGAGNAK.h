#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Entity.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelRotation.h"
#include "unitysdk/CPCIFLHOOMC.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CCCBENCKELF;
namespace UnityEngine { class Transform; }

#define AEBAPGAGNAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C878B10)
#define AEBAPGAGNAK_EICCNLAMKKG_OFFSET UNITYSDK_OFFSET(0x1C878A00)
#define AEBAPGAGNAK_JGDJLOKMIDF_OFFSET UNITYSDK_OFFSET(0x1C878410)
#define AEBAPGAGNAK_JLGNLIHJMEJ_OFFSET UNITYSDK_OFFSET(0x1C878710)
#define AEBAPGAGNAK_LBEIBLANIKB_OFFSET UNITYSDK_OFFSET(0x1C8789B0)
#define AEBAPGAGNAK_LICPMGIHPLJ_OFFSET UNITYSDK_OFFSET(0x1C878470)
#define AEBAPGAGNAK_LLMMJPDOPIB_OFFSET UNITYSDK_OFFSET(0x1C878AB0)
#define AEBAPGAGNAK_LMKDKIACLHP_OFFSET UNITYSDK_OFFSET(0x1C878360)

inline static constexpr unsigned int AEBAPGAGNAK_TypeDefinitionIndex = 42630;

	class AEBAPGAGNAK : public ::Entitas::Entity
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBAPGAGNAK_CTOR_OFFSET))(this);
		}

		::CCCBENCKELF* LMKDKIACLHP()
		{
			return ((::CCCBENCKELF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBAPGAGNAK_LMKDKIACLHP_OFFSET))(this);
		}

		::System::Boolean JGDJLOKMIDF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBAPGAGNAK_JGDJLOKMIDF_OFFSET))(this);
		}

		::System::Void LICPMGIHPLJ(::UnityEngine::Transform* a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7, ::System::Nullable_1<::CPCIFLHOOMC> a8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Nullable_1<::CPCIFLHOOMC>))((::PBYTE)hIl2Cpp + AEBAPGAGNAK_LICPMGIHPLJ_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void JLGNLIHJMEJ(::UnityEngine::Transform* a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7, ::System::Nullable_1<::CPCIFLHOOMC> a8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Nullable_1<::CPCIFLHOOMC>))((::PBYTE)hIl2Cpp + AEBAPGAGNAK_JLGNLIHJMEJ_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void LBEIBLANIKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBAPGAGNAK_LBEIBLANIKB_OFFSET))(this);
		}

		::CCCBENCKELF* EICCNLAMKKG()
		{
			return ((::CCCBENCKELF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBAPGAGNAK_EICCNLAMKKG_OFFSET))(this);
		}

		::System::Boolean LLMMJPDOPIB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBAPGAGNAK_LLMMJPDOPIB_OFFSET))(this);
		}

	};
