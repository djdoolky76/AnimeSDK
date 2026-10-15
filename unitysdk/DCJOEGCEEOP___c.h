#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCJOEGCEEOP;
namespace System { class Object; }

#define DCJOEGCEEOP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1739B0)
#define DCJOEGCEEOP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1739F0)
#define DCJOEGCEEOP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E173A00)

	class DCJOEGCEEOP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C910);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCJOEGCEEOP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJOEGCEEOP___C_CTOR_OFFSET))(this);
		}

		::DCJOEGCEEOP* __cctor_b__23_0()
		{
			return ((::DCJOEGCEEOP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJOEGCEEOP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
