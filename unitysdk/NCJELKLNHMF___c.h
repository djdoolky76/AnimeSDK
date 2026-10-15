#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NEMHKFFNDJO.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define NCJELKLNHMF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBB12CA0)
#define NCJELKLNHMF___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBB12CE0)
#define NCJELKLNHMF___C__CLEARMESSAGESBEFORE_B__14_0_OFFSET UNITYSDK_OFFSET(0xBB12CF0)
#define NCJELKLNHMF___C__REMOVEMESSAGE_B__15_0_OFFSET UNITYSDK_OFFSET(0xBB12D00)

inline static constexpr unsigned int NCJELKLNHMF___c_TypeDefinitionIndex = 76489;

	class NCJELKLNHMF___c : public ::System::Object
	{
	public:
		static ::System::Func_3<::NEMHKFFNDJO, ::System::UInt64, ::System::Boolean>** StaticGet___9__14_0()
		{
			return (::System::Func_3<::NEMHKFFNDJO, ::System::UInt64, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25AB0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25AB8);
		}

		static ::System::Func_3<::NEMHKFFNDJO, ::System::UInt64, ::System::Boolean>** StaticGet___9__15_0()
		{
			return (::System::Func_3<::NEMHKFFNDJO, ::System::UInt64, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25AC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCJELKLNHMF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCJELKLNHMF___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _ClearMessagesBefore_b__14_0(::NEMHKFFNDJO a1, ::System::UInt64 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::NEMHKFFNDJO, ::System::UInt64))((::PBYTE)hIl2Cpp + NCJELKLNHMF___C__CLEARMESSAGESBEFORE_B__14_0_OFFSET))(this, a1, a2);
		}

		::System::Boolean _RemoveMessage_b__15_0(::NEMHKFFNDJO a1, ::System::UInt64 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::NEMHKFFNDJO, ::System::UInt64))((::PBYTE)hIl2Cpp + NCJELKLNHMF___C__REMOVEMESSAGE_B__15_0_OFFSET))(this, a1, a2);
		}

	};
