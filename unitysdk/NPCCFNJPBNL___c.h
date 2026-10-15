#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPCCFNJPBNL;
namespace System { class Object; }

#define NPCCFNJPBNL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB93EF0)
#define NPCCFNJPBNL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB93F20)
#define NPCCFNJPBNL___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1EB93F30)

	class NPCCFNJPBNL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xD760);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCFNJPBNL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCFNJPBNL___C_CTOR_OFFSET))(this);
		}

		::NPCCFNJPBNL* __cctor_b__58_0()
		{
			return ((::NPCCFNJPBNL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCFNJPBNL___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
