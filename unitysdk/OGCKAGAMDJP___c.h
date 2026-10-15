#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGCKAGAMDJP;
namespace System { class Object; }

#define OGCKAGAMDJP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE225A0)
#define OGCKAGAMDJP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE225E0)
#define OGCKAGAMDJP___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DE225F0)

inline static constexpr unsigned int OGCKAGAMDJP___c_TypeDefinitionIndex = 28385;

	class OGCKAGAMDJP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17860);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGCKAGAMDJP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGCKAGAMDJP___C_CTOR_OFFSET))(this);
		}

		::OGCKAGAMDJP* __cctor_b__18_0()
		{
			return ((::OGCKAGAMDJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGCKAGAMDJP___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
