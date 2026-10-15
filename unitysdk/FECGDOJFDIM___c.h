#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FECGDOJFDIM;
namespace System { class Object; }

#define FECGDOJFDIM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E360A60)
#define FECGDOJFDIM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E360AA0)
#define FECGDOJFDIM___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E360AB0)

	class FECGDOJFDIM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FECGDOJFDIM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FECGDOJFDIM___C_CTOR_OFFSET))(this);
		}

		::FECGDOJFDIM* __cctor_b__38_0()
		{
			return ((::FECGDOJFDIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FECGDOJFDIM___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
