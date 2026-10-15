#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define OJMGONHMBLC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBEC7840)
#define OJMGONHMBLC___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBEC7870)
#define OJMGONHMBLC___C__INITIAL_B__63_0_OFFSET UNITYSDK_OFFSET(0xBEC7880)

inline static constexpr unsigned int OJMGONHMBLC___c_TypeDefinitionIndex = 74001;

	class OJMGONHMBLC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x548F0);
		}

		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__63_0()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x548F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJMGONHMBLC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMGONHMBLC___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _initial_b__63_0(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + OJMGONHMBLC___C__INITIAL_B__63_0_OFFSET))(this, a1);
		}

	};
