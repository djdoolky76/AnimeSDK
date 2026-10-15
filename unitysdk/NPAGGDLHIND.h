#pragma once
#include "unitysdk/unitysdk.h"
class MEIGMBOLDOF;
namespace UnityEngine::Events { template <typename T1, typename T2> class UnityAction_2; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define NPAGGDLHIND_CTOR_OFFSET UNITYSDK_OFFSET(0xBCF99B0)
#define NPAGGDLHIND_DMIAKCFEDKH_OFFSET UNITYSDK_OFFSET(0xBCF99E0)

inline static constexpr unsigned int NPAGGDLHIND_TypeDefinitionIndex = 49169;

	class NPAGGDLHIND
	{
	public:
		::System::Void _ctor(::UnityEngine::Events::UnityAction_2<::MEIGMBOLDOF*, ::System::Boolean>* a1, ::UnityEngine::Events::UnityAction_1<::MEIGMBOLDOF*>* a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_2<::MEIGMBOLDOF*, ::System::Boolean>*, ::UnityEngine::Events::UnityAction_1<::MEIGMBOLDOF*>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPAGGDLHIND_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Double DMIAKCFEDKH()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + NPAGGDLHIND_DMIAKCFEDKH_OFFSET))(this);
		}

	};
