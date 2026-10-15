#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MJMGOBMOPDL;
namespace System { class Object; }

#define MJMGOBMOPDL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA21290)
#define MJMGOBMOPDL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA212C0)
#define MJMGOBMOPDL___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1EA212D0)

inline static constexpr unsigned int MJMGOBMOPDL___c_TypeDefinitionIndex = 33731;

	class MJMGOBMOPDL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53B60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJMGOBMOPDL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMGOBMOPDL___C_CTOR_OFFSET))(this);
		}

		::MJMGOBMOPDL* __cctor_b__58_0()
		{
			return ((::MJMGOBMOPDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMGOBMOPDL___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
