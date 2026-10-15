#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JNDNJFPANEB;
namespace System { class Object; }

#define JNDNJFPANEB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E794EE0)
#define JNDNJFPANEB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E794F20)
#define JNDNJFPANEB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E794F30)

inline static constexpr unsigned int JNDNJFPANEB___c_TypeDefinitionIndex = 32783;

	class JNDNJFPANEB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6C6C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNDNJFPANEB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDNJFPANEB___C_CTOR_OFFSET))(this);
		}

		::JNDNJFPANEB* __cctor_b__23_0()
		{
			return ((::JNDNJFPANEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDNJFPANEB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
