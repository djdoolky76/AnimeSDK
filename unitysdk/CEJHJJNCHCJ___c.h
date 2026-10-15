#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEJHJJNCHCJ;
namespace System { class Object; }

#define CEJHJJNCHCJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0959A0)
#define CEJHJJNCHCJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0959E0)
#define CEJHJJNCHCJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0959F0)

	class CEJHJJNCHCJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEJHJJNCHCJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEJHJJNCHCJ___C_CTOR_OFFSET))(this);
		}

		::CEJHJJNCHCJ* __cctor_b__28_0()
		{
			return ((::CEJHJJNCHCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEJHJJNCHCJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
