#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OJCGDHHEGCJ;
namespace System { class Object; }

#define OJCGDHHEGCJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE7EC20)
#define OJCGDHHEGCJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE7EC60)
#define OJCGDHHEGCJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE7EC70)

	class OJCGDHHEGCJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1EAE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJCGDHHEGCJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCGDHHEGCJ___C_CTOR_OFFSET))(this);
		}

		::OJCGDHHEGCJ* __cctor_b__23_0()
		{
			return ((::OJCGDHHEGCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCGDHHEGCJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
