#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MBCCJENLLDA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B81DAE0)
#define MBCCJENLLDA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B81DB20)
#define MBCCJENLLDA___C__COMPILE_B__5_0_OFFSET UNITYSDK_OFFSET(0x1B81DB30)

inline static constexpr unsigned int MBCCJENLLDA___c_TypeDefinitionIndex = 67023;

	class MBCCJENLLDA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x72150);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x72158);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBCCJENLLDA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBCCJENLLDA___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _Compile_b__5_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + MBCCJENLLDA___C__COMPILE_B__5_0_OFFSET))(this, a1);
		}

	};
