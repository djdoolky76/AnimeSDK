#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNJIFHBGMDJ;
namespace System { class Object; }

#define MNJIFHBGMDJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA6FD60)
#define MNJIFHBGMDJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA6FDA0)
#define MNJIFHBGMDJ___C___CCTOR_B__44_0_OFFSET UNITYSDK_OFFSET(0x1EA6FDB0)

inline static constexpr unsigned int MNJIFHBGMDJ___c_TypeDefinitionIndex = 29677;

	class MNJIFHBGMDJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59A40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNJIFHBGMDJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJIFHBGMDJ___C_CTOR_OFFSET))(this);
		}

		::MNJIFHBGMDJ* __cctor_b__44_0()
		{
			return ((::MNJIFHBGMDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJIFHBGMDJ___C___CCTOR_B__44_0_OFFSET))(this);
		}

	};
