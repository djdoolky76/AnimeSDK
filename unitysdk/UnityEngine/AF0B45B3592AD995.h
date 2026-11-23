#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_AF0B45B3592AD995__CCTOR_OFFSET UNITYSDK_OFFSET(0x410E880)
#define UNITYENGINE_AF0B45B3592AD995__CTOR_OFFSET UNITYSDK_OFFSET(0x3E15820)

namespace UnityEngine
{
	inline static constexpr unsigned int AF0B45B3592AD995_TypeDefinitionIndex = 16958;

	class AF0B45B3592AD995 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::AF0B45B3592AD995*>** StaticGet_BBED04108BCC7E7A()
		{
			return (::Il2CppArray<::UnityEngine::AF0B45B3592AD995*>**)Il2CppClass::FromTypeDefinitionIndex(AF0B45B3592AD995_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::UnityEngine::AF0B45B3592AD995** StaticGet_FC46C3AC5C33CEDD()
		{
			return (::UnityEngine::AF0B45B3592AD995**)Il2CppClass::FromTypeDefinitionIndex(AF0B45B3592AD995_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		::System::Int32 E40E3F3E9CD0310E; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_AF0B45B3592AD995__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AF0B45B3592AD995__CTOR_OFFSET))(this);
		}
	};
}
