#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNJILKCIOKI;
namespace System { class Object; }

#define MNJILKCIOKI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA70550)
#define MNJILKCIOKI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA70590)
#define MNJILKCIOKI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA705A0)

inline static constexpr unsigned int MNJILKCIOKI___c_TypeDefinitionIndex = 26897;

	class MNJILKCIOKI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59B70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNJILKCIOKI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJILKCIOKI___C_CTOR_OFFSET))(this);
		}

		::MNJILKCIOKI* __cctor_b__23_0()
		{
			return ((::MNJILKCIOKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJILKCIOKI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
