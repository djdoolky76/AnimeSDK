#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDFOELGFBCA;
namespace System { class Object; }

#define FDFOELGFBCA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E358330)
#define FDFOELGFBCA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E358370)
#define FDFOELGFBCA___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E358380)

	class FDFOELGFBCA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B720);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDFOELGFBCA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFOELGFBCA___C_CTOR_OFFSET))(this);
		}

		::FDFOELGFBCA* __cctor_b__48_0()
		{
			return ((::FDFOELGFBCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFOELGFBCA___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
