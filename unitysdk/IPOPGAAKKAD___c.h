#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
class IPOPGAAKKAD_MNKHJHLMAOM;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define IPOPGAAKKAD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D8721F0)
#define IPOPGAAKKAD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D872230)
#define IPOPGAAKKAD___C___SHOWFIELDINFO_B__23_0_OFFSET UNITYSDK_OFFSET(0x1D872240)
#define IPOPGAAKKAD___C___SHOWFIELDINFO_B__23_1_OFFSET UNITYSDK_OFFSET(0x1D8722F0)
#define IPOPGAAKKAD___C___SHOWFIELDINFO_B__23_2_OFFSET UNITYSDK_OFFSET(0x1D872390)
#define IPOPGAAKKAD___C___SHOWFIELDINFO_B__23_3_OFFSET UNITYSDK_OFFSET(0x1D872430)

inline static constexpr unsigned int IPOPGAAKKAD___c_TypeDefinitionIndex = 38236;

	class IPOPGAAKKAD___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Object*>, ::System::String*>** StaticGet___9__23_2()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Object*>, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70D60);
		}

		static ::System::Func_2<::System::Object*, ::System::String*>** StaticGet___9__23_3()
		{
			return (::System::Func_2<::System::Object*, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70D68);
		}

		static ::System::Func_2<::System::Object*, ::System::String*>** StaticGet___9__23_0()
		{
			return (::System::Func_2<::System::Object*, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70D70);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Object*>, ::System::String*>** StaticGet___9__23_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Object*>, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70D78);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70D80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPOPGAAKKAD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPOPGAAKKAD___C_CTOR_OFFSET))(this);
		}

		::System::String* __ShowFieldInfo_b__23_0(::IPOPGAAKKAD_MNKHJHLMAOM* a1)
		{
			return ((::System::String*(*)(::PVOID, ::IPOPGAAKKAD_MNKHJHLMAOM*))((::PBYTE)hIl2Cpp + IPOPGAAKKAD___C___SHOWFIELDINFO_B__23_0_OFFSET))(this, a1);
		}

		::System::String* __ShowFieldInfo_b__23_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Object*> a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Object*>))((::PBYTE)hIl2Cpp + IPOPGAAKKAD___C___SHOWFIELDINFO_B__23_1_OFFSET))(this, a1);
		}

		::System::String* __ShowFieldInfo_b__23_2(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Object*> a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Object*>))((::PBYTE)hIl2Cpp + IPOPGAAKKAD___C___SHOWFIELDINFO_B__23_2_OFFSET))(this, a1);
		}

		::System::String* __ShowFieldInfo_b__23_3(::IPOPGAAKKAD_MNKHJHLMAOM* a1)
		{
			return ((::System::String*(*)(::PVOID, ::IPOPGAAKKAD_MNKHJHLMAOM*))((::PBYTE)hIl2Cpp + IPOPGAAKKAD___C___SHOWFIELDINFO_B__23_3_OFFSET))(this, a1);
		}

	};
