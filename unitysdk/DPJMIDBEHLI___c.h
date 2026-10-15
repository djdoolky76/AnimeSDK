#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NEMHKFFNDJO.h"
#include "unitysdk/System/Object.h"
class DLBGONGJBNC;
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define DPJMIDBEHLI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x12654FD0)
#define DPJMIDBEHLI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x12655010)
#define DPJMIDBEHLI___C__CLEARMESSAGESBEFORE_B__20_0_OFFSET UNITYSDK_OFFSET(0x12655040)
#define DPJMIDBEHLI___C__FETCHINPUTNOTIFYMESSAGE_B__33_0_OFFSET UNITYSDK_OFFSET(0x12655060)
#define DPJMIDBEHLI___C___BUILDPLAYERDATA_B__7_0_OFFSET UNITYSDK_OFFSET(0x12655020)

inline static constexpr unsigned int DPJMIDBEHLI___c_TypeDefinitionIndex = 76565;

	class DPJMIDBEHLI___c : public ::System::Object
	{
	public:
		static ::System::Func_3<::NEMHKFFNDJO, ::System::UInt64, ::System::Boolean>** StaticGet___9__20_0()
		{
			return (::System::Func_3<::NEMHKFFNDJO, ::System::UInt64, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FC30);
		}

		static ::System::Func_2<::DLBGONGJBNC*, ::System::UInt32>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::DLBGONGJBNC*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FC38);
		}

		static ::System::Func_4<::NEMHKFFNDJO, ::System::UInt16, ::System::UInt16, ::System::Boolean>** StaticGet___9__33_0()
		{
			return (::System::Func_4<::NEMHKFFNDJO, ::System::UInt16, ::System::UInt16, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FC40);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FC48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPJMIDBEHLI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJMIDBEHLI___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __BuildPlayerData_b__7_0(::DLBGONGJBNC* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::DLBGONGJBNC*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI___C___BUILDPLAYERDATA_B__7_0_OFFSET))(this, a1);
		}

		::System::Boolean _ClearMessagesBefore_b__20_0(::NEMHKFFNDJO a1, ::System::UInt64 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::NEMHKFFNDJO, ::System::UInt64))((::PBYTE)hIl2Cpp + DPJMIDBEHLI___C__CLEARMESSAGESBEFORE_B__20_0_OFFSET))(this, a1, a2);
		}

		::System::Boolean _FetchInputNotifyMessage_b__33_0(::NEMHKFFNDJO a1, ::System::UInt16 a2, ::System::UInt16 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::NEMHKFFNDJO, ::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + DPJMIDBEHLI___C__FETCHINPUTNOTIFYMESSAGE_B__33_0_OFFSET))(this, a1, a2, a3);
		}

	};
