#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKHHHFHGINI;
namespace System { class Object; }

#define GKHHHFHGINI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4B5A50)
#define GKHHHFHGINI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4B5A90)
#define GKHHHFHGINI___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E4B5AA0)

	class GKHHHFHGINI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D900);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKHHHFHGINI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHHHFHGINI___C_CTOR_OFFSET))(this);
		}

		::GKHHHFHGINI* __cctor_b__48_0()
		{
			return ((::GKHHHFHGINI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHHHFHGINI___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
