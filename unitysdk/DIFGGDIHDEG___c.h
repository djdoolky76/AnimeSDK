#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIFGGDIHDEG;
namespace System { class Object; }

#define DIFGGDIHDEG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1903A0)
#define DIFGGDIHDEG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1903D0)
#define DIFGGDIHDEG___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E1903E0)

inline static constexpr unsigned int DIFGGDIHDEG___c_TypeDefinitionIndex = 33753;

	class DIFGGDIHDEG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x314C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIFGGDIHDEG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIFGGDIHDEG___C_CTOR_OFFSET))(this);
		}

		::DIFGGDIHDEG* __cctor_b__43_0()
		{
			return ((::DIFGGDIHDEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIFGGDIHDEG___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
