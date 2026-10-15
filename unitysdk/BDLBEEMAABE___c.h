#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDLBEEMAABE;
namespace System { class Object; }

#define BDLBEEMAABE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E91A620)
#define BDLBEEMAABE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E91A660)
#define BDLBEEMAABE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E91A670)

inline static constexpr unsigned int BDLBEEMAABE___c_TypeDefinitionIndex = 31929;

	class BDLBEEMAABE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E3D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDLBEEMAABE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLBEEMAABE___C_CTOR_OFFSET))(this);
		}

		::BDLBEEMAABE* __cctor_b__28_0()
		{
			return ((::BDLBEEMAABE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLBEEMAABE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
