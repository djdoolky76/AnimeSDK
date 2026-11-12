#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIDKLLMAIGP;
namespace System { class Object; }

#define CIDKLLMAIGP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3A0070)
#define CIDKLLMAIGP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3A00B0)
#define CIDKLLMAIGP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F3A00C0)

inline static constexpr unsigned int CIDKLLMAIGP___c_TypeDefinitionIndex = 28328;

	class CIDKLLMAIGP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10D00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIDKLLMAIGP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDKLLMAIGP___C_CTOR_OFFSET))(this);
		}

		::CIDKLLMAIGP* __cctor_b__33_0()
		{
			return ((::CIDKLLMAIGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDKLLMAIGP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
