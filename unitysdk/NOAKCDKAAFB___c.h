#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NOAKCDKAAFB;
namespace System { class Object; }

#define NOAKCDKAAFB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB88660)
#define NOAKCDKAAFB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB886A0)
#define NOAKCDKAAFB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB886B0)

inline static constexpr unsigned int NOAKCDKAAFB___c_TypeDefinitionIndex = 33520;

	class NOAKCDKAAFB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xB840);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOAKCDKAAFB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOAKCDKAAFB___C_CTOR_OFFSET))(this);
		}

		::NOAKCDKAAFB* __cctor_b__28_0()
		{
			return ((::NOAKCDKAAFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOAKCDKAAFB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
