#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJDCJNOFBHH;
namespace System { class Object; }

#define HJDCJNOFBHH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5A5C70)
#define HJDCJNOFBHH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A5CA0)
#define HJDCJNOFBHH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5A5CB0)

inline static constexpr unsigned int HJDCJNOFBHH___c_TypeDefinitionIndex = 33437;

	class HJDCJNOFBHH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F740);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJDCJNOFBHH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDCJNOFBHH___C_CTOR_OFFSET))(this);
		}

		::HJDCJNOFBHH* __cctor_b__23_0()
		{
			return ((::HJDCJNOFBHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDCJNOFBHH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
