#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKAJMEMCBLC;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MODJFJKGCFB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBA29790)
#define MODJFJKGCFB___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBA297C0)
#define MODJFJKGCFB___C__GETACQUIRED_B__5_0_OFFSET UNITYSDK_OFFSET(0xBA297D0)
#define MODJFJKGCFB___C__GETCOLLECTABLECARDIDS_B__7_0_OFFSET UNITYSDK_OFFSET(0xBA297F0)
#define MODJFJKGCFB___C__GETCOLLECTABLECARDIDS_B__7_1_OFFSET UNITYSDK_OFFSET(0xBA29810)
#define MODJFJKGCFB___C__GET_ACQUIREDCOLLECTABLECOUNT_B__15_0_OFFSET UNITYSDK_OFFSET(0xBA29870)
#define MODJFJKGCFB___C__GET_ACQUIREDCOUNT_B__11_0_OFFSET UNITYSDK_OFFSET(0xBA29830)
#define MODJFJKGCFB___C__GET_COLLECTABLECOUNT_B__13_0_OFFSET UNITYSDK_OFFSET(0xBA29850)

inline static constexpr unsigned int MODJFJKGCFB___c_TypeDefinitionIndex = 81094;

	class MODJFJKGCFB___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::HKAJMEMCBLC*, ::System::Boolean>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::HKAJMEMCBLC*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14940);
		}

		static ::System::Func_2<::HKAJMEMCBLC*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::HKAJMEMCBLC*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14948);
		}

		static ::System::Func_2<::HKAJMEMCBLC*, ::System::Boolean>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::HKAJMEMCBLC*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14950);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14958);
		}

		static ::System::Func_2<::HKAJMEMCBLC*, ::System::Boolean>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::HKAJMEMCBLC*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14960);
		}

		static ::System::Func_2<::HKAJMEMCBLC*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::HKAJMEMCBLC*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14968);
		}

		static ::System::Func_2<::HKAJMEMCBLC*, ::System::UInt32>** StaticGet___9__7_1()
		{
			return (::System::Func_2<::HKAJMEMCBLC*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14970);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MODJFJKGCFB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODJFJKGCFB___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAcquired_b__5_0(::HKAJMEMCBLC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HKAJMEMCBLC*))((::PBYTE)hIl2Cpp + MODJFJKGCFB___C__GETACQUIRED_B__5_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetCollectableCardIDs_b__7_0(::HKAJMEMCBLC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HKAJMEMCBLC*))((::PBYTE)hIl2Cpp + MODJFJKGCFB___C__GETCOLLECTABLECARDIDS_B__7_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetCollectableCardIDs_b__7_1(::HKAJMEMCBLC* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::HKAJMEMCBLC*))((::PBYTE)hIl2Cpp + MODJFJKGCFB___C__GETCOLLECTABLECARDIDS_B__7_1_OFFSET))(this, a1);
		}

		::System::Boolean _get_AcquiredCount_b__11_0(::HKAJMEMCBLC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HKAJMEMCBLC*))((::PBYTE)hIl2Cpp + MODJFJKGCFB___C__GET_ACQUIREDCOUNT_B__11_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_CollectableCount_b__13_0(::HKAJMEMCBLC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HKAJMEMCBLC*))((::PBYTE)hIl2Cpp + MODJFJKGCFB___C__GET_COLLECTABLECOUNT_B__13_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_AcquiredCollectableCount_b__15_0(::HKAJMEMCBLC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HKAJMEMCBLC*))((::PBYTE)hIl2Cpp + MODJFJKGCFB___C__GET_ACQUIREDCOLLECTABLECOUNT_B__15_0_OFFSET))(this, a1);
		}

	};
