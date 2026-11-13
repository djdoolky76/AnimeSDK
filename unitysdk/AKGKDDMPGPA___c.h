#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define AKGKDDMPGPA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x19D5ADF0)
#define AKGKDDMPGPA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x19D5AE30)
#define AKGKDDMPGPA___C___CHOOSENEXTPOINT_B__16_0_OFFSET UNITYSDK_OFFSET(0x19D5AE40)

inline static constexpr unsigned int AKGKDDMPGPA___c_TypeDefinitionIndex = 61438;

	class AKGKDDMPGPA___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single>>** StaticGet___9__16_0()
		{
			return (::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59920);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59928);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKGKDDMPGPA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGKDDMPGPA___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __ChooseNextPoint_b__16_0(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single> a1, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single> a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single>, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single>))((::PBYTE)hIl2Cpp + AKGKDDMPGPA___C___CHOOSENEXTPOINT_B__16_0_OFFSET))(this, a1, a2);
		}

	};
