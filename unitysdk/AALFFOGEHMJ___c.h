#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKAJMEMCBLC;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define AALFFOGEHMJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB0CEB80)
#define AALFFOGEHMJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB0CEBC0)
#define AALFFOGEHMJ___C___ONCARDUNLOCKSYNC_B__3_2_OFFSET UNITYSDK_OFFSET(0xB0CEBD0)

	class AALFFOGEHMJ___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::HKAJMEMCBLC*, ::System::Boolean>** StaticGet___9__3_2()
		{
			return (::System::Func_2<::HKAJMEMCBLC*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40FB0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40FB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AALFFOGEHMJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AALFFOGEHMJ___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __OnCardUnlockSync_b__3_2(::HKAJMEMCBLC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HKAJMEMCBLC*))((::PBYTE)hIl2Cpp + AALFFOGEHMJ___C___ONCARDUNLOCKSYNC_B__3_2_OFFSET))(this, a1);
		}

	};
