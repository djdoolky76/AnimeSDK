#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CFCKFKJFKLO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x18845E50)
#define CFCKFKJFKLO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x18845E90)
#define CFCKFKJFKLO___C___CTOR_B__17_7_OFFSET UNITYSDK_OFFSET(0x18845EA0)

inline static constexpr unsigned int CFCKFKJFKLO___c_TypeDefinitionIndex = 82342;

	class CFCKFKJFKLO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC340);
		}

		static ::System::Func_2<::System::Boolean, ::System::Int32>** StaticGet___9__17_7()
		{
			return (::System::Func_2<::System::Boolean, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC348);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFCKFKJFKLO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFCKFKJFKLO___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __ctor_b__17_7(::System::Boolean a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CFCKFKJFKLO___C___CTOR_B__17_7_OFFSET))(this, a1);
		}

	};
