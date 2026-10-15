#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NAMCKJLAFCN;
namespace System { class Object; }

#define NAMCKJLAFCN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA99C90)
#define NAMCKJLAFCN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA99CD0)
#define NAMCKJLAFCN___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EA99CE0)

inline static constexpr unsigned int NAMCKJLAFCN___c_TypeDefinitionIndex = 33661;

	class NAMCKJLAFCN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CEE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAMCKJLAFCN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMCKJLAFCN___C_CTOR_OFFSET))(this);
		}

		::NAMCKJLAFCN* __cctor_b__18_0()
		{
			return ((::NAMCKJLAFCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMCKJLAFCN___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
