#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define OLDFFAGDODF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBF02600)
#define OLDFFAGDODF___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBF02640)
#define OLDFFAGDODF___C___TRYGETPROPERTYDESC_B__7_0_OFFSET UNITYSDK_OFFSET(0xBF02650)

inline static constexpr unsigned int OLDFFAGDODF___c_TypeDefinitionIndex = 65293;

	class OLDFFAGDODF___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57B30);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57B38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLDFFAGDODF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLDFFAGDODF___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __TryGetPropertyDesc_b__7_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + OLDFFAGDODF___C___TRYGETPROPERTYDESC_B__7_0_OFFSET))(this, a1);
		}

	};
