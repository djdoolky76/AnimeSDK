#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define OGDMOJLFAHO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBE56F20)
#define OGDMOJLFAHO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBE56F60)
#define OGDMOJLFAHO___C__SETVISIBILITY_B__32_0_OFFSET UNITYSDK_OFFSET(0xBE56F70)

inline static constexpr unsigned int OGDMOJLFAHO___c_TypeDefinitionIndex = 71745;

	class OGDMOJLFAHO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65360);
		}

		static ::System::Func_2<::System::Boolean, ::System::Boolean>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::System::Boolean, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65368);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGDMOJLFAHO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDMOJLFAHO___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _SetVisibility_b__32_0(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OGDMOJLFAHO___C__SETVISIBILITY_B__32_0_OFFSET))(this, a1);
		}

	};
