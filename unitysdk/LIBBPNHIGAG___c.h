#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LIBBPNHIGAG;
namespace System { class Object; }

#define LIBBPNHIGAG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E93D180)
#define LIBBPNHIGAG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E93D1C0)
#define LIBBPNHIGAG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E93D1D0)

inline static constexpr unsigned int LIBBPNHIGAG___c_TypeDefinitionIndex = 28411;

	class LIBBPNHIGAG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37E00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIBBPNHIGAG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIBBPNHIGAG___C_CTOR_OFFSET))(this);
		}

		::LIBBPNHIGAG* __cctor_b__23_0()
		{
			return ((::LIBBPNHIGAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIBBPNHIGAG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
