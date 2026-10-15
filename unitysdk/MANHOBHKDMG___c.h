#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFPCEFGHPIN.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define MANHOBHKDMG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C924AC0)
#define MANHOBHKDMG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C924B00)
#define MANHOBHKDMG___C__GETBOMBCREATIONS_B__3_0_OFFSET UNITYSDK_OFFSET(0x1C924B10)

	class MANHOBHKDMG___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::MFPCEFGHPIN>** StaticGet___9__3_0()
		{
			return (::System::Comparison_1<::MFPCEFGHPIN>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55D20);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55D28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MANHOBHKDMG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANHOBHKDMG___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetBombCreations_b__3_0(::MFPCEFGHPIN a1, ::MFPCEFGHPIN a2)
		{
			return ((::System::Int32(*)(::PVOID, ::MFPCEFGHPIN, ::MFPCEFGHPIN))((::PBYTE)hIl2Cpp + MANHOBHKDMG___C__GETBOMBCREATIONS_B__3_0_OFFSET))(this, a1, a2);
		}

	};
