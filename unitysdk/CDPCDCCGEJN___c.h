#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDPCDCCGEJN_CFLILJECMKA;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CDPCDCCGEJN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x173C16C0)
#define CDPCDCCGEJN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x173C16F0)
#define CDPCDCCGEJN___C__GET_FAILURECOUNT_B__20_0_OFFSET UNITYSDK_OFFSET(0x173C1720)
#define CDPCDCCGEJN___C__GET_FINISHCOUNT_B__22_0_OFFSET UNITYSDK_OFFSET(0x173C1740)
#define CDPCDCCGEJN___C__GET_SUCCESSCOUNT_B__18_0_OFFSET UNITYSDK_OFFSET(0x173C1700)

inline static constexpr unsigned int CDPCDCCGEJN___c_TypeDefinitionIndex = 60851;

	class CDPCDCCGEJN___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x598B0);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x598B8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x598C0);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__22_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x598C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDPCDCCGEJN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPCDCCGEJN___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_SuccessCount_b__18_0(::CDPCDCCGEJN_CFLILJECMKA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CDPCDCCGEJN_CFLILJECMKA*))((::PBYTE)hIl2Cpp + CDPCDCCGEJN___C__GET_SUCCESSCOUNT_B__18_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_FailureCount_b__20_0(::CDPCDCCGEJN_CFLILJECMKA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CDPCDCCGEJN_CFLILJECMKA*))((::PBYTE)hIl2Cpp + CDPCDCCGEJN___C__GET_FAILURECOUNT_B__20_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_FinishCount_b__22_0(::CDPCDCCGEJN_CFLILJECMKA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CDPCDCCGEJN_CFLILJECMKA*))((::PBYTE)hIl2Cpp + CDPCDCCGEJN___C__GET_FINISHCOUNT_B__22_0_OFFSET))(this, a1);
		}

	};
