#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { class KeyValuePair; }

#define AKGKDDMPGPA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x12CD1A20)
#define AKGKDDMPGPA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x12CD1A60)
#define AKGKDDMPGPA___C___CHOOSENEXTPOINT_B__16_0_OFFSET UNITYSDK_OFFSET(0x12CD1A70)

	class AKGKDDMPGPA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BE80);
		}

		static ::System::Comparison_1<::System::Collections::Generic::KeyValuePair*>** StaticGet___9__16_0()
		{
			return (::System::Comparison_1<::System::Collections::Generic::KeyValuePair*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BE88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKGKDDMPGPA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGKDDMPGPA___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __ChooseNextPoint_b__16_0(::System::Collections::Generic::KeyValuePair* a1, ::System::Collections::Generic::KeyValuePair* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + AKGKDDMPGPA___C___CHOOSENEXTPOINT_B__16_0_OFFSET))(this, a1, a2);
		}

	};
