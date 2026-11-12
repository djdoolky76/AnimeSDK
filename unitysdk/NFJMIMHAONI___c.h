#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define NFJMIMHAONI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC472920)
#define NFJMIMHAONI___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC472960)
#define NFJMIMHAONI___C__CREATEITEM_B__1_0_OFFSET UNITYSDK_OFFSET(0xC472970)

inline static constexpr unsigned int NFJMIMHAONI___c_TypeDefinitionIndex = 67489;

	class NFJMIMHAONI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2F930);
		}

		static ::System::Func_1<::System::String*>** StaticGet___9__1_0()
		{
			return (::System::Func_1<::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2F938);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFJMIMHAONI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJMIMHAONI___C_CTOR_OFFSET))(this);
		}

		::System::String* _CreateItem_b__1_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJMIMHAONI___C__CREATEITEM_B__1_0_OFFSET))(this);
		}

	};
