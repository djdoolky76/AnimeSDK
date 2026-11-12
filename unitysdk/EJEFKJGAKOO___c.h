#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJEFKJGAKOO;
namespace System { class Object; }

#define EJEFKJGAKOO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F598910)
#define EJEFKJGAKOO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F598950)
#define EJEFKJGAKOO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F598960)

inline static constexpr unsigned int EJEFKJGAKOO___c_TypeDefinitionIndex = 30288;

	class EJEFKJGAKOO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44D80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJEFKJGAKOO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEFKJGAKOO___C_CTOR_OFFSET))(this);
		}

		::EJEFKJGAKOO* __cctor_b__33_0()
		{
			return ((::EJEFKJGAKOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEFKJGAKOO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
