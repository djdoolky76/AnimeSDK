#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGOKJFKMCBE;
namespace System { class Object; }

#define LGOKJFKMCBE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E95ABC0)
#define LGOKJFKMCBE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E95AC00)
#define LGOKJFKMCBE___C___CCTOR_B__83_0_OFFSET UNITYSDK_OFFSET(0x1E95AC10)

inline static constexpr unsigned int LGOKJFKMCBE___c_TypeDefinitionIndex = 25611;

	class LGOKJFKMCBE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40640);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGOKJFKMCBE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGOKJFKMCBE___C_CTOR_OFFSET))(this);
		}

		::LGOKJFKMCBE* __cctor_b__83_0()
		{
			return ((::LGOKJFKMCBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGOKJFKMCBE___C___CCTOR_B__83_0_OFFSET))(this);
		}

	};
