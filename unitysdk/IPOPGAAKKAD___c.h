#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
class IPOPGAAKKAD_MNKHJHLMAOM;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define IPOPGAAKKAD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6C24B0)
#define IPOPGAAKKAD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6C24F0)
#define IPOPGAAKKAD___C___SHOWFIELDINFO_B__23_0_OFFSET UNITYSDK_OFFSET(0x1C6C2500)
#define IPOPGAAKKAD___C___SHOWFIELDINFO_B__23_1_OFFSET UNITYSDK_OFFSET(0x1C6C25B0)
#define IPOPGAAKKAD___C___SHOWFIELDINFO_B__23_2_OFFSET UNITYSDK_OFFSET(0x1C6C2650)
#define IPOPGAAKKAD___C___SHOWFIELDINFO_B__23_3_OFFSET UNITYSDK_OFFSET(0x1C6C26F0)

inline static constexpr unsigned int IPOPGAAKKAD___c_TypeDefinitionIndex = 37308;

	class IPOPGAAKKAD___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Object*, ::System::String*>** StaticGet___9__23_0()
		{
			return (::System::Func_2<::System::Object*, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x108A0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Object*>, ::System::String*>** StaticGet___9__23_2()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Object*>, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x108A8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x108B0);
		}

		static ::System::Func_2<::System::Object*, ::System::String*>** StaticGet___9__23_3()
		{
			return (::System::Func_2<::System::Object*, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x108B8);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Object*>, ::System::String*>** StaticGet___9__23_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Object*>, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x108C0);
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
