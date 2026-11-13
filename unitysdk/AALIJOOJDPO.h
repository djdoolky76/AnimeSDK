#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Transform; }

#define AALIJOOJDPO_BGFPKOLKPOO_1_OFFSET UNITYSDK_OFFSET(0x18C7DDA0)
#define AALIJOOJDPO_BGFPKOLKPOO_OFFSET UNITYSDK_OFFSET(0x18C7E420)
#define AALIJOOJDPO_DKOGEBMFIIL_OFFSET UNITYSDK_OFFSET(0x18C7DC10)
#define AALIJOOJDPO_EFGLFGLGIKJ_1_OFFSET UNITYSDK_OFFSET(0x18C7D7A0)
#define AALIJOOJDPO_EFGLFGLGIKJ_2_OFFSET UNITYSDK_OFFSET(0x18C7D810)
#define AALIJOOJDPO_EFGLFGLGIKJ_OFFSET UNITYSDK_OFFSET(0x18C7D700)
#define AALIJOOJDPO_EKAIJJGCAHF_OFFSET UNITYSDK_OFFSET(0x18C7E390)
#define AALIJOOJDPO_FLDMOLAFDKI_OFFSET UNITYSDK_OFFSET(0x18C7DE20)
#define AALIJOOJDPO_HFBFIDIKFEN_OFFSET UNITYSDK_OFFSET(0x18C7D540)
#define AALIJOOJDPO_IIKEPOJGMKL_OFFSET UNITYSDK_OFFSET(0x18C7DF00)
#define AALIJOOJDPO_IPJNFIDONHF_1_OFFSET UNITYSDK_OFFSET(0x18C7E0B0)
#define AALIJOOJDPO_IPJNFIDONHF_OFFSET UNITYSDK_OFFSET(0x18C7E050)
#define AALIJOOJDPO_PDIHPGIGMKG_OFFSET UNITYSDK_OFFSET(0x18C7E2C0)

inline static constexpr unsigned int AALIJOOJDPO_TypeDefinitionIndex = 48870;

	class AALIJOOJDPO : public ::System::Object
	{
	public:
		// static const ::System::Object JNKFCMKDNLK; // 0x0
		// static const ::System::String* JOCBLEAGJFI; // 0x0
		static ::UnityEngine::Animator* HFBFIDIKFEN(::UnityEngine::Component* a1)
		{
			return ((::UnityEngine::Animator*(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + AALIJOOJDPO_HFBFIDIKFEN_OFFSET))(a1);
		}

		static ::System::Void EFGLFGLGIKJ(::UnityEngine::Component* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::Component*, ::System::Int32))((::PBYTE)hIl2Cpp + AALIJOOJDPO_EFGLFGLGIKJ_OFFSET))(a1, a2);
		}

		static ::System::Void EFGLFGLGIKJ_1(::UnityEngine::Component* a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::UnityEngine::Component*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + AALIJOOJDPO_EFGLFGLGIKJ_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void EFGLFGLGIKJ_2(::UnityEngine::Component* a1, ::System::Int32 a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::UnityEngine::Component*, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + AALIJOOJDPO_EFGLFGLGIKJ_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void DKOGEBMFIIL(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + AALIJOOJDPO_DKOGEBMFIIL_OFFSET))(a1);
		}

		static ::System::Void IIKEPOJGMKL(::UnityEngine::Component* a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::UnityEngine::Component*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + AALIJOOJDPO_IIKEPOJGMKL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void IPJNFIDONHF(::UnityEngine::Component* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::Component*, ::System::Boolean))((::PBYTE)hIl2Cpp + AALIJOOJDPO_IPJNFIDONHF_OFFSET))(a1, a2);
		}

		static ::System::Void IPJNFIDONHF_1(::UnityEngine::Component* a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::UnityEngine::Component*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + AALIJOOJDPO_IPJNFIDONHF_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PDIHPGIGMKG(::System::Single a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + AALIJOOJDPO_PDIHPGIGMKG_OFFSET))(a1, a2);
		}

		static ::System::Void BGFPKOLKPOO(::UnityEngine::Component* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::Component*, ::System::Single))((::PBYTE)hIl2Cpp + AALIJOOJDPO_BGFPKOLKPOO_OFFSET))(a1, a2);
		}

		static ::System::Void BGFPKOLKPOO_1(::UnityEngine::Animator* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::Animator*, ::System::Single))((::PBYTE)hIl2Cpp + AALIJOOJDPO_BGFPKOLKPOO_1_OFFSET))(a1, a2);
		}

		static ::System::String* FLDMOLAFDKI(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + AALIJOOJDPO_FLDMOLAFDKI_OFFSET))(a1);
		}

		static ::System::Collections::IEnumerator* EKAIJJGCAHF(::System::Single a1, ::System::Action* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + AALIJOOJDPO_EKAIJJGCAHF_OFFSET))(a1, a2);
		}

	};
