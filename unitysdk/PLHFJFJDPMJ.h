#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_Side_Hipplen_LookAt; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define PLHFJFJDPMJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC3057D0)
#define PLHFJFJDPMJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC306350)
#define PLHFJFJDPMJ_JNLFHEKFEHF_OFFSET UNITYSDK_OFFSET(0xC305C00)
#define PLHFJFJDPMJ_NILPIABLJFL_OFFSET UNITYSDK_OFFSET(0xC306420)
#define PLHFJFJDPMJ_OMIPKAAHLDP_OFFSET UNITYSDK_OFFSET(0xC3062A0)
#define PLHFJFJDPMJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC305890)
#define PLHFJFJDPMJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC306300)
#define PLHFJFJDPMJ_PAJFPEMOBEI_OFFSET UNITYSDK_OFFSET(0xC305EB0)
#define PLHFJFJDPMJ_TICK_OFFSET UNITYSDK_OFFSET(0xC3061B0)

inline static constexpr unsigned int PLHFJFJDPMJ_TypeDefinitionIndex = 52286;

	class PLHFJFJDPMJ
	{
	public:
		::UnityEngine::Transform* NHNJKCPPLBA; // 0x28
		::UnityEngine::Transform* EBCMELBHDEJ; // 0x30
		::System::Single BPMNMDJIPLE; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_Hipplen_LookAt* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_Hipplen_LookAt*))((::PBYTE)hIl2Cpp + PLHFJFJDPMJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHFJFJDPMJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PLHFJFJDPMJ_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHFJFJDPMJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHFJFJDPMJ_DISPOSE_OFFSET))(this);
		}

		::System::Boolean OMIPKAAHLDP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHFJFJDPMJ_OMIPKAAHLDP_OFFSET))(this);
		}

		::System::Void PAJFPEMOBEI(::UnityEngine::Transform* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + PLHFJFJDPMJ_PAJFPEMOBEI_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Transform* JNLFHEKFEHF()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHFJFJDPMJ_JNLFHEKFEHF_OFFSET))(this);
		}

		::System::Void NILPIABLJFL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PLHFJFJDPMJ_NILPIABLJFL_OFFSET))(this, a1);
		}

	};
