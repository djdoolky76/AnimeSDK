#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNGLCIGBNGB;
namespace System { class Object; }

#define HNGLCIGBNGB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5DDCC0)
#define HNGLCIGBNGB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5DDD00)
#define HNGLCIGBNGB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5DDD10)

	class HNGLCIGBNGB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4BC90);
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
