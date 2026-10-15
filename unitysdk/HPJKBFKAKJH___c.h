#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPJKBFKAKJH;
namespace System { class Object; }

#define HPJKBFKAKJH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5CCFD0)
#define HPJKBFKAKJH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5CD010)
#define HPJKBFKAKJH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5CD020)

inline static constexpr unsigned int HPJKBFKAKJH___c_TypeDefinitionIndex = 29418;

	class HPJKBFKAKJH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F2E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPJKBFKAKJH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPJKBFKAKJH___C_CTOR_OFFSET))(this);
		}

		::HPJKBFKAKJH* __cctor_b__28_0()
		{
			return ((::HPJKBFKAKJH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPJKBFKAKJH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
