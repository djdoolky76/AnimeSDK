#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CONAIOFALJB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDCBFDB0)
#define CONAIOFALJB___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDCBFDF0)
#define CONAIOFALJB___C__ISFOCUSED_B__3_0_OFFSET UNITYSDK_OFFSET(0xDCBFE00)

inline static constexpr unsigned int CONAIOFALJB___c_TypeDefinitionIndex = 49830;

	class CONAIOFALJB___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Action*, ::System::Action*>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::System::Action*, ::System::Action*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56D30);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56D38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CONAIOFALJB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONAIOFALJB___C_CTOR_OFFSET))(this);
		}

		::System::Action* _IsFocused_b__3_0(::System::Action* a1)
		{
			return ((::System::Action*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CONAIOFALJB___C__ISFOCUSED_B__3_0_OFFSET))(this, a1);
		}

	};
