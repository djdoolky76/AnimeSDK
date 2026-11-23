#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class FAED0374422E783A; }

#define E7ED61E0B00DDE0C_E5962D3415195593_ENVELOPEDEFINITION_CLEAR_OFFSET UNITYSDK_OFFSET(0x2A94810)
#define E7ED61E0B00DDE0C_E5962D3415195593_ENVELOPEDEFINITION_DEFAULT_OFFSET UNITYSDK_OFFSET(0x2A94850)
#define E7ED61E0B00DDE0C_E5962D3415195593_ENVELOPEDEFINITION_GETVALUEAT_OFFSET UNITYSDK_OFFSET(0x2A94870)
#define E7ED61E0B00DDE0C_E5962D3415195593_ENVELOPEDEFINITION_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x2A949F0)
#define E7ED61E0B00DDE0C_E5962D3415195593_ENVELOPEDEFINITION_VALIDATE_OFFSET UNITYSDK_OFFSET(0x2A949C0)

namespace E7ED61E0B00DDE0C
{
	inline static constexpr unsigned int E5962D3415195593_EnvelopeDefinition_TypeDefinitionIndex = 18477;

	struct alignas(8) E5962D3415195593_EnvelopeDefinition
	{
		::UnityEngine::FAED0374422E783A* m_AttackShape; // 0x10
		::UnityEngine::FAED0374422E783A* m_DecayShape; // 0x18
		::System::Single m_AttackTime; // 0x20
		::System::Single m_SustainTime; // 0x24
		::System::Single m_DecayTime; // 0x28
		::System::Boolean m_ScaleWithImpact; // 0x2C
		::System::Boolean m_HoldForever; // 0x2D

		/*
		static ::E7ED61E0B00DDE0C::E5962D3415195593_EnvelopeDefinition Default()
		{
			return ((::E7ED61E0B00DDE0C::E5962D3415195593_EnvelopeDefinition(*)())((::PBYTE)hIl2Cpp + E7ED61E0B00DDE0C_E5962D3415195593_ENVELOPEDEFINITION_DEFAULT_OFFSET))();
		}
		*/

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + E7ED61E0B00DDE0C_E5962D3415195593_ENVELOPEDEFINITION_GET_DURATION_OFFSET))(this);
		}

		::System::Single GetValueAt(::System::Single BE9B161B3F3C2937)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + E7ED61E0B00DDE0C_E5962D3415195593_ENVELOPEDEFINITION_GETVALUEAT_OFFSET))(this, BE9B161B3F3C2937);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E7ED61E0B00DDE0C_E5962D3415195593_ENVELOPEDEFINITION_CLEAR_OFFSET))(this);
		}

		::System::Void Validate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E7ED61E0B00DDE0C_E5962D3415195593_ENVELOPEDEFINITION_VALIDATE_OFFSET))(this);
		}
	};
}
