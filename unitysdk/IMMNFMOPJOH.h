#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class GameObject; }

#define IMMNFMOPJOH_JMEOAHJLNNG_OFFSET UNITYSDK_OFFSET(0x164E0EE0)

inline static constexpr unsigned int IMMNFMOPJOH_TypeDefinitionIndex = 69817;

	class IMMNFMOPJOH : public ::System::Object
	{
	public:
		// static const ::System::String* DLIJLNILECD; // 0x0
		static ::System::Void JMEOAHJLNNG(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + IMMNFMOPJOH_JMEOAHJLNNG_OFFSET))(a1, a2);
		}

	};
