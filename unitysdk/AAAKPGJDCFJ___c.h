#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAAKPGJDCFJ;
namespace System { class Object; }

#define AAAKPGJDCFJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD87AC0)
#define AAAKPGJDCFJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD87B00)
#define AAAKPGJDCFJ___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1DD87B10)

inline static constexpr unsigned int AAAKPGJDCFJ___c_TypeDefinitionIndex = 34723;

	class AAAKPGJDCFJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2E1B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAAKPGJDCFJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAAKPGJDCFJ___C_CTOR_OFFSET))(this);
		}

		::AAAKPGJDCFJ* __cctor_b__48_0()
		{
			return ((::AAAKPGJDCFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAAKPGJDCFJ___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
