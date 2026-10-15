#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDDDLOFNCHN;
namespace System { class Object; }

#define BDDDLOFNCHN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8E7110)
#define BDDDLOFNCHN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8E7150)
#define BDDDLOFNCHN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E8E7160)

inline static constexpr unsigned int BDDDLOFNCHN___c_TypeDefinitionIndex = 29416;

	class BDDDLOFNCHN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51AD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDDDLOFNCHN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDDLOFNCHN___C_CTOR_OFFSET))(this);
		}

		::BDDDLOFNCHN* __cctor_b__23_0()
		{
			return ((::BDDDLOFNCHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDDLOFNCHN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
