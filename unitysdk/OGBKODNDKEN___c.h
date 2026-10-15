#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGBKODNDKEN;
namespace System { class Object; }

#define OGBKODNDKEN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE21FE0)
#define OGBKODNDKEN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE22010)
#define OGBKODNDKEN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE22020)

inline static constexpr unsigned int OGBKODNDKEN___c_TypeDefinitionIndex = 34920;

	class OGBKODNDKEN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17780);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGBKODNDKEN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGBKODNDKEN___C_CTOR_OFFSET))(this);
		}

		::OGBKODNDKEN* __cctor_b__23_0()
		{
			return ((::OGBKODNDKEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGBKODNDKEN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
