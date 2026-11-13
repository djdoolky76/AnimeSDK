#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPFEAEOEGFA.h"
namespace UnityEngine { class GameObject; }

#define ABDMJGCCAHG_CTOR_OFFSET UNITYSDK_OFFSET(0x18C9FDC0)
#define ABDMJGCCAHG_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x18C9FDD0)

inline static constexpr unsigned int ABDMJGCCAHG_TypeDefinitionIndex = 50119;

	class ABDMJGCCAHG : public ::GPFEAEOEGFA
	{
	public:
		::System::Void _ctor(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + ABDMJGCCAHG_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 GetTypeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDMJGCCAHG_GETTYPEID_OFFSET))(this);
		}

	};
