#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OOCLLLOHBGK;
namespace System { class Object; }

#define OOCLLLOHBGK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEA9570)
#define OOCLLLOHBGK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEA95B0)
#define OOCLLLOHBGK___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DEA95C0)

inline static constexpr unsigned int OOCLLLOHBGK___c_TypeDefinitionIndex = 34831;

	class OOCLLLOHBGK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x262B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOCLLLOHBGK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCLLLOHBGK___C_CTOR_OFFSET))(this);
		}

		::OOCLLLOHBGK* __cctor_b__38_0()
		{
			return ((::OOCLLLOHBGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCLLLOHBGK___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
