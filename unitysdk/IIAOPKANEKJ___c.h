#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IIAOPKANEKJ;
namespace System { class Object; }

#define IIAOPKANEKJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E684A00)
#define IIAOPKANEKJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E684A30)
#define IIAOPKANEKJ___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E684A40)

	class IIAOPKANEKJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x500E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIAOPKANEKJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAOPKANEKJ___C_CTOR_OFFSET))(this);
		}

		::IIAOPKANEKJ* __cctor_b__18_0()
		{
			return ((::IIAOPKANEKJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAOPKANEKJ___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
