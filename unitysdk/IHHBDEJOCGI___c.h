#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHHBDEJOCGI;
namespace System { class Object; }

#define IHHBDEJOCGI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E630730)
#define IHHBDEJOCGI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E630770)
#define IHHBDEJOCGI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E630780)

inline static constexpr unsigned int IHHBDEJOCGI___c_TypeDefinitionIndex = 31835;

	class IHHBDEJOCGI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D5A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHHBDEJOCGI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHBDEJOCGI___C_CTOR_OFFSET))(this);
		}

		::IHHBDEJOCGI* __cctor_b__23_0()
		{
			return ((::IHHBDEJOCGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHBDEJOCGI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
