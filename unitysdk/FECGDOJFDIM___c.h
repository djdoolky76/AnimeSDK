#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FECGDOJFDIM;
namespace System { class Object; }

#define FECGDOJFDIM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6480D0)
#define FECGDOJFDIM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F648110)
#define FECGDOJFDIM___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F648120)

inline static constexpr unsigned int FECGDOJFDIM___c_TypeDefinitionIndex = 31813;

	class FECGDOJFDIM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A7A0);
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
