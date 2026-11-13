#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HACIGDEEMCJ;
namespace System { class Object; }

#define HACIGDEEMCJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD0A470)
#define HACIGDEEMCJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD0A4B0)
#define HACIGDEEMCJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FD0A4C0)

inline static constexpr unsigned int HACIGDEEMCJ___c_TypeDefinitionIndex = 28924;

	class HACIGDEEMCJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E630);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HACIGDEEMCJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HACIGDEEMCJ___C_CTOR_OFFSET))(this);
		}

		::HACIGDEEMCJ* __cctor_b__23_0()
		{
			return ((::HACIGDEEMCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HACIGDEEMCJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
