#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNGLCIGBNGB;
namespace System { class Object; }

#define HNGLCIGBNGB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8D9BF0)
#define HNGLCIGBNGB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8D9C30)
#define HNGLCIGBNGB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F8D9C40)

inline static constexpr unsigned int HNGLCIGBNGB___c_TypeDefinitionIndex = 34927;

	class HNGLCIGBNGB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C9B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNGLCIGBNGB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNGLCIGBNGB___C_CTOR_OFFSET))(this);
		}

		::HNGLCIGBNGB* __cctor_b__23_0()
		{
			return ((::HNGLCIGBNGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNGLCIGBNGB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
