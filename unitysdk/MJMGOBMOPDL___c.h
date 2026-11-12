#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MJMGOBMOPDL;
namespace System { class Object; }

#define MJMGOBMOPDL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDA10C0)
#define MJMGOBMOPDL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDA10F0)
#define MJMGOBMOPDL___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1FDA1100)

inline static constexpr unsigned int MJMGOBMOPDL___c_TypeDefinitionIndex = 34646;

	class MJMGOBMOPDL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5AA50);
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
