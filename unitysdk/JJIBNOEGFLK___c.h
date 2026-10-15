#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJIBNOEGFLK;
namespace System { class Object; }

#define JJIBNOEGFLK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E730150)
#define JJIBNOEGFLK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E730190)
#define JJIBNOEGFLK___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E7301A0)

inline static constexpr unsigned int JJIBNOEGFLK___c_TypeDefinitionIndex = 32003;

	class JJIBNOEGFLK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x629A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJIBNOEGFLK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIBNOEGFLK___C_CTOR_OFFSET))(this);
		}

		::JJIBNOEGFLK* __cctor_b__18_0()
		{
			return ((::JJIBNOEGFLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIBNOEGFLK___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
