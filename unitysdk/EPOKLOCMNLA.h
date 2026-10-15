#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine::LowLevel { class PlayerLoopSystem_UpdateFunction; }

#define EPOKLOCMNLA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBD9EA0)
#define EPOKLOCMNLA_MCPMIODLBNL_OFFSET UNITYSDK_OFFSET(0x1EBD9B10)
#define EPOKLOCMNLA_NINEHEEGBEG_OFFSET UNITYSDK_OFFSET(0x1EBD9570)

inline static constexpr unsigned int EPOKLOCMNLA_TypeDefinitionIndex = 35174;

	class EPOKLOCMNLA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPOKLOCMNLA_CTOR_OFFSET))(this);
		}

		static ::System::Boolean NINEHEEGBEG(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Type* a4, ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction* a5)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::Type*, ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*))((::PBYTE)hIl2Cpp + EPOKLOCMNLA_NINEHEEGBEG_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void MCPMIODLBNL(::System::String* a1, ::System::Type* a2, ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Type*, ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*))((::PBYTE)hIl2Cpp + EPOKLOCMNLA_MCPMIODLBNL_OFFSET))(a1, a2, a3);
		}

	};
