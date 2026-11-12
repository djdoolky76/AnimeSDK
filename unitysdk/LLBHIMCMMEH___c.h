#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LLBHIMCMMEH;
namespace System { class Object; }

#define LLBHIMCMMEH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCB84A0)
#define LLBHIMCMMEH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCB84E0)
#define LLBHIMCMMEH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FCB84F0)

inline static constexpr unsigned int LLBHIMCMMEH___c_TypeDefinitionIndex = 27891;

	class LLBHIMCMMEH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E4A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLBHIMCMMEH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBHIMCMMEH___C_CTOR_OFFSET))(this);
		}

		::LLBHIMCMMEH* __cctor_b__23_0()
		{
			return ((::LLBHIMCMMEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBHIMCMMEH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
