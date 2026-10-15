#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMOEGOMDNAA;
namespace System { class Object; }

#define HMOEGOMDNAA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5D6340)
#define HMOEGOMDNAA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D6380)
#define HMOEGOMDNAA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5D6390)

	class HMOEGOMDNAA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4AF70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMOEGOMDNAA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMOEGOMDNAA___C_CTOR_OFFSET))(this);
		}

		::HMOEGOMDNAA* __cctor_b__23_0()
		{
			return ((::HMOEGOMDNAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMOEGOMDNAA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
