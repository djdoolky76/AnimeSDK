#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFMDLKJHMED;
namespace System { class Object; }

#define OFMDLKJHMED___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE4B7D0)
#define OFMDLKJHMED___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE4B810)
#define OFMDLKJHMED___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DE4B820)

	class OFMDLKJHMED___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17B40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFMDLKJHMED___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMDLKJHMED___C_CTOR_OFFSET))(this);
		}

		::OFMDLKJHMED* __cctor_b__38_0()
		{
			return ((::OFMDLKJHMED*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMDLKJHMED___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
