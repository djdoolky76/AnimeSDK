#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENPJFKDKLOB;
namespace System { class Object; }

#define ENPJFKDKLOB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2F4CC0)
#define ENPJFKDKLOB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2F4D00)
#define ENPJFKDKLOB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E2F4D10)

inline static constexpr unsigned int ENPJFKDKLOB___c_TypeDefinitionIndex = 35102;

	class ENPJFKDKLOB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54980);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENPJFKDKLOB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPJFKDKLOB___C_CTOR_OFFSET))(this);
		}

		::ENPJFKDKLOB* __cctor_b__28_0()
		{
			return ((::ENPJFKDKLOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPJFKDKLOB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
