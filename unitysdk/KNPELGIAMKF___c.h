#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNPELGIAMKF;
namespace System { class Object; }

#define KNPELGIAMKF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8AA090)
#define KNPELGIAMKF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8AA0D0)
#define KNPELGIAMKF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E8AA0E0)

	class KNPELGIAMKF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNPELGIAMKF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNPELGIAMKF___C_CTOR_OFFSET))(this);
		}

		::KNPELGIAMKF* __cctor_b__23_0()
		{
			return ((::KNPELGIAMKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNPELGIAMKF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
