#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABPFEDEHLIA;
namespace System { class Object; }

#define ABPFEDEHLIA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDA61C0)
#define ABPFEDEHLIA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDA61F0)
#define ABPFEDEHLIA___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1DDA6200)

inline static constexpr unsigned int ABPFEDEHLIA___c_TypeDefinitionIndex = 34144;

	class ABPFEDEHLIA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABPFEDEHLIA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPFEDEHLIA___C_CTOR_OFFSET))(this);
		}

		::ABPFEDEHLIA* __cctor_b__53_0()
		{
			return ((::ABPFEDEHLIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPFEDEHLIA___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
