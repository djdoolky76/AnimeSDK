#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGCDALNAHIG;
namespace System { class Object; }

#define NGCDALNAHIG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EADE780)
#define NGCDALNAHIG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EADE7B0)
#define NGCDALNAHIG___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EADE7C0)

inline static constexpr unsigned int NGCDALNAHIG___c_TypeDefinitionIndex = 27012;

	class NGCDALNAHIG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x638B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGCDALNAHIG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGCDALNAHIG___C_CTOR_OFFSET))(this);
		}

		::NGCDALNAHIG* __cctor_b__18_0()
		{
			return ((::NGCDALNAHIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGCDALNAHIG___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
