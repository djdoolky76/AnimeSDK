#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKAJMEMCBLC;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define AALFFOGEHMJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB0CD460)
#define AALFFOGEHMJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB0CD4A0)
#define AALFFOGEHMJ___C___ONCARDUNLOCKSYNC_B__3_2_OFFSET UNITYSDK_OFFSET(0xB0CD4B0)

inline static constexpr unsigned int AALFFOGEHMJ___c_TypeDefinitionIndex = 81077;

	class AALFFOGEHMJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3CD10);
		}

		static ::System::Func_2<::HKAJMEMCBLC*, ::System::Boolean>** StaticGet___9__3_2()
		{
			return (::System::Func_2<::HKAJMEMCBLC*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3CD18);
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
