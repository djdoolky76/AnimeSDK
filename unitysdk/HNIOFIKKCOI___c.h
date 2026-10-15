#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { class KeyValuePair; }

#define HNIOFIKKCOI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C674230)
#define HNIOFIKKCOI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C674270)
#define HNIOFIKKCOI___C___FILTERCATVALUEMAPBYEXTREM_B__5_1_OFFSET UNITYSDK_OFFSET(0x1C674300)
#define HNIOFIKKCOI___C___GETDICTDESC_B__3_0_OFFSET UNITYSDK_OFFSET(0x1C674280)

inline static constexpr unsigned int HNIOFIKKCOI___c_TypeDefinitionIndex = 37339;

	class HNIOFIKKCOI___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::String*>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E10);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::UInt32>** StaticGet___9__5_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E18);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNIOFIKKCOI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIOFIKKCOI___C_CTOR_OFFSET))(this);
		}

		::System::String* __GetDictDesc_b__3_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + HNIOFIKKCOI___C___GETDICTDESC_B__3_0_OFFSET))(this, a1);
		}

		::System::UInt32 __FilterCatValueMapByExtrem_b__5_1(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + HNIOFIKKCOI___C___FILTERCATVALUEMAPBYEXTREM_B__5_1_OFFSET))(this, a1);
		}

	};
