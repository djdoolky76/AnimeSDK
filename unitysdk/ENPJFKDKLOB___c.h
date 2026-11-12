#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENPJFKDKLOB;
namespace System { class Object; }

#define ENPJFKDKLOB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5D9930)
#define ENPJFKDKLOB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5D9970)
#define ENPJFKDKLOB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F5D9980)

inline static constexpr unsigned int ENPJFKDKLOB___c_TypeDefinitionIndex = 36030;

	class ENPJFKDKLOB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50CC0);
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
