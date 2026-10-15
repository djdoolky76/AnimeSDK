#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }

#define PJJKDGFODDL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC295D90)
#define PJJKDGFODDL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC295DC0)
#define PJJKDGFODDL___C___RECONCILESELFPARTY_B__28_0_OFFSET UNITYSDK_OFFSET(0xC295DD0)

	class PJJKDGFODDL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FA80);
		}

		static ::System::Comparison_1<::System::ValueTuple>** StaticGet___9__28_0()
		{
			return (::System::Comparison_1<::System::ValueTuple>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FA88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJJKDGFODDL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJKDGFODDL___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __ReconcileSelfParty_b__28_0(::System::ValueTuple a1, ::System::ValueTuple a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple, ::System::ValueTuple))((::PBYTE)hIl2Cpp + PJJKDGFODDL___C___RECONCILESELFPARTY_B__28_0_OFFSET))(this, a1, a2);
		}

	};
