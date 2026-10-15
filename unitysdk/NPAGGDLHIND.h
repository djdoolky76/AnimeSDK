#pragma once
#include "unitysdk/unitysdk.h"
class MEIGMBOLDOF;
namespace UnityEngine::Events { class UnityAction; }

#define NPAGGDLHIND_CTOR_OFFSET UNITYSDK_OFFSET(0xBCF99B0)
#define NPAGGDLHIND_DMIAKCFEDKH_OFFSET UNITYSDK_OFFSET(0xBCF99E0)

	class NPAGGDLHIND
	{
	public:
		::System::Void _ctor(::UnityEngine::Events::UnityAction* a1, ::UnityEngine::Events::UnityAction* a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*, ::UnityEngine::Events::UnityAction*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPAGGDLHIND_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Double DMIAKCFEDKH()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + NPAGGDLHIND_DMIAKCFEDKH_OFFSET))(this);
		}

	};
