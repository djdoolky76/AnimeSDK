#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GEEMFDBDMDH;
namespace System { class Object; }

#define GEEMFDBDMDH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4554F0)
#define GEEMFDBDMDH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E455530)
#define GEEMFDBDMDH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E455540)

	class GEEMFDBDMDH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11870);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEEMFDBDMDH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEEMFDBDMDH___C_CTOR_OFFSET))(this);
		}

		::GEEMFDBDMDH* __cctor_b__33_0()
		{
			return ((::GEEMFDBDMDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEEMFDBDMDH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
