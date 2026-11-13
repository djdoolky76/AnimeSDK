#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIJLACBOPEE;
namespace System { class Object; }

#define GIJLACBOPEE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBD14F0)
#define GIJLACBOPEE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBD1530)
#define GIJLACBOPEE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FBD1540)

inline static constexpr unsigned int GIJLACBOPEE___c_TypeDefinitionIndex = 35348;

	class GIJLACBOPEE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12030);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIJLACBOPEE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIJLACBOPEE___C_CTOR_OFFSET))(this);
		}

		::GIJLACBOPEE* __cctor_b__33_0()
		{
			return ((::GIJLACBOPEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIJLACBOPEE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
