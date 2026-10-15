#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/QuadraticEquation.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define NOCJMBGJJPC_AAMKLHPDKKM_OFFSET UNITYSDK_OFFSET(0xBCE77E0)
#define NOCJMBGJJPC_BLAPMACKKMC_OFFSET UNITYSDK_OFFSET(0xBCE6E50)
#define NOCJMBGJJPC_CTOR_OFFSET UNITYSDK_OFFSET(0xBCE7B00)
#define NOCJMBGJJPC_IOCOJKHKPGE_OFFSET UNITYSDK_OFFSET(0xBCE6370)
#define NOCJMBGJJPC_KLBMIDEOMHF_OFFSET UNITYSDK_OFFSET(0xBCE6890)
#define NOCJMBGJJPC_PBAAENOJJBC_OFFSET UNITYSDK_OFFSET(0xBCE6290)
#define NOCJMBGJJPC_PGOHKHCKEFG_OFFSET UNITYSDK_OFFSET(0xBCE64F0)

inline static constexpr unsigned int NOCJMBGJJPC_TypeDefinitionIndex = 73258;

	class NOCJMBGJJPC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCJMBGJJPC_CTOR_OFFSET))(this);
		}

		static ::System::Single PBAAENOJJBC(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NOCJMBGJJPC_PBAAENOJJBC_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector2 IOCOJKHKPGE(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NOCJMBGJJPC_IOCOJKHKPGE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::QuadraticEquation PGOHKHCKEFG(::UnityEngine::AnimationCurve* a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::RPG::Client::QuadraticEquation(*)(::UnityEngine::AnimationCurve*, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NOCJMBGJJPC_PGOHKHCKEFG_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::QuadraticEquation KLBMIDEOMHF(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1)
		{
			return ((::RPG::Client::QuadraticEquation(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + NOCJMBGJJPC_KLBMIDEOMHF_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Double>* BLAPMACKKMC(::System::Object* a1, ::Il2CppArray<::System::Double>* a2)
		{
			return ((::Il2CppArray<::System::Double>*(*)(::System::Object*, ::Il2CppArray<::System::Double>*))((::PBYTE)hIl2Cpp + NOCJMBGJJPC_BLAPMACKKMC_OFFSET))(a1, a2);
		}

		static ::System::Single AAMKLHPDKKM(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NOCJMBGJJPC_AAMKLHPDKKM_OFFSET))(a1, a2, a3, a4);
		}

	};
