#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define CONAIOFALJB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x19169DD0)
#define CONAIOFALJB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x19169E10)
#define CONAIOFALJB___C__ISFOCUSED_B__3_0_OFFSET UNITYSDK_OFFSET(0x19169E20)

inline static constexpr unsigned int CONAIOFALJB___c_TypeDefinitionIndex = 50878;

	class CONAIOFALJB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40100);
		}

		static ::System::Func_2<::System::Action_1<::System::Boolean>*, ::System::Action_1<::System::Boolean>*>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::System::Action_1<::System::Boolean>*, ::System::Action_1<::System::Boolean>*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40108);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CONAIOFALJB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONAIOFALJB___C_CTOR_OFFSET))(this);
		}

		::System::Action_1<::System::Boolean>* _IsFocused_b__3_0(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Action_1<::System::Boolean>*(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CONAIOFALJB___C__ISFOCUSED_B__3_0_OFFSET))(this, a1);
		}

	};
