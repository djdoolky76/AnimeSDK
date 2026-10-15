#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOAIMAGDCOH_MPBMCPMMMHH;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define KOAIMAGDCOH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB58F370)
#define KOAIMAGDCOH___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB58F3A0)
#define KOAIMAGDCOH___C__GETCONTENT_B__8_0_OFFSET UNITYSDK_OFFSET(0xB58F3B0)

	class KOAIMAGDCOH___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::System::Object*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x642B0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x642B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOAIMAGDCOH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIMAGDCOH___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetContent_b__8_0(::KOAIMAGDCOH_MPBMCPMMMHH* a1, ::KOAIMAGDCOH_MPBMCPMMMHH* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::KOAIMAGDCOH_MPBMCPMMMHH*, ::KOAIMAGDCOH_MPBMCPMMMHH*))((::PBYTE)hIl2Cpp + KOAIMAGDCOH___C__GETCONTENT_B__8_0_OFFSET))(this, a1, a2);
		}

	};
