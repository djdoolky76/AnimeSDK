#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGNBAKJNPID;
namespace System { class Object; }

#define NGNBAKJNPID___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB15C90)
#define NGNBAKJNPID___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB15CC0)
#define NGNBAKJNPID___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EB15CD0)

inline static constexpr unsigned int NGNBAKJNPID___c_TypeDefinitionIndex = 31324;

	class NGNBAKJNPID___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5FCF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGNBAKJNPID___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNBAKJNPID___C_CTOR_OFFSET))(this);
		}

		::NGNBAKJNPID* __cctor_b__33_0()
		{
			return ((::NGNBAKJNPID*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNBAKJNPID___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
