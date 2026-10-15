#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJFJOGEEGPJ;
namespace System { class Object; }

#define LJFJOGEEGPJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E97BFB0)
#define LJFJOGEEGPJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E97BFE0)
#define LJFJOGEEGPJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E97BFF0)

inline static constexpr unsigned int LJFJOGEEGPJ___c_TypeDefinitionIndex = 32035;

	class LJFJOGEEGPJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47640);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJFJOGEEGPJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFJOGEEGPJ___C_CTOR_OFFSET))(this);
		}

		::LJFJOGEEGPJ* __cctor_b__23_0()
		{
			return ((::LJFJOGEEGPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFJOGEEGPJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
