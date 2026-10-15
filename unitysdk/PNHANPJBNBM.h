#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEKEIBNBMDJ;
namespace System { class Object; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define PNHANPJBNBM_CTOR_OFFSET UNITYSDK_OFFSET(0xC331B80)
#define PNHANPJBNBM_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xC331B20)

inline static constexpr unsigned int PNHANPJBNBM_TypeDefinitionIndex = 49553;

	class PNHANPJBNBM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHANPJBNBM_CTOR_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::UnityEngine::Rendering::CommandBuffer* a1, ::AEKEIBNBMDJ* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::AEKEIBNBMDJ*, ::System::Object*))((::PBYTE)hIl2Cpp + PNHANPJBNBM_PKADDEPKJFN_OFFSET))(this, a1, a2, a3);
		}

	};
