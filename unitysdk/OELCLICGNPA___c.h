#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define OELCLICGNPA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBE31F30)
#define OELCLICGNPA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBE31F70)
#define OELCLICGNPA___C__CREATEITEM_B__1_0_OFFSET UNITYSDK_OFFSET(0xBE31F80)

inline static constexpr unsigned int OELCLICGNPA___c_TypeDefinitionIndex = 65588;

	class OELCLICGNPA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x645B0);
		}

		static ::System::Func_1<::System::String*>** StaticGet___9__1_0()
		{
			return (::System::Func_1<::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x645B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OELCLICGNPA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OELCLICGNPA___C_CTOR_OFFSET))(this);
		}

		::System::String* _CreateItem_b__1_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OELCLICGNPA___C__CREATEITEM_B__1_0_OFFSET))(this);
		}

	};
