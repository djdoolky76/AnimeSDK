#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOCEFFDMFPM;
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { class KeyValuePair; }

#define BOPECJBFFNJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C44AB60)
#define BOPECJBFFNJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C44ABA0)
#define BOPECJBFFNJ___C__FORCELOADALLASYNC_B__63_0_OFFSET UNITYSDK_OFFSET(0x1C44ABB0)
#define BOPECJBFFNJ___C__FORCELOADALLASYNC_B__63_1_OFFSET UNITYSDK_OFFSET(0x1C44ABC0)
#define BOPECJBFFNJ___C___UNLOADALLLOADITEM_B__72_0_OFFSET UNITYSDK_OFFSET(0x1C44AD20)
#define BOPECJBFFNJ___C___UNLOADALLLOADITEM_B__72_1_OFFSET UNITYSDK_OFFSET(0x1C44AD30)
#define BOPECJBFFNJ___C___UNLOADALLLOADITEM_B__72_2_OFFSET UNITYSDK_OFFSET(0x1C44AD70)
#define BOPECJBFFNJ___C___UNLOADALLLOADITEM_B__72_3_OFFSET UNITYSDK_OFFSET(0x1C44B0A0)

	class BOPECJBFFNJ___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__72_3()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x119D0);
		}

		static ::System::Action** StaticGet___9__72_1()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x119D8);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::BOCEFFDMFPM*>** StaticGet___9__63_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::BOCEFFDMFPM*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x119E0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::BOCEFFDMFPM*>** StaticGet___9__72_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::BOCEFFDMFPM*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x119E8);
		}

		static ::System::Func_2<::BOCEFFDMFPM*, ::System::Boolean>** StaticGet___9__63_1()
		{
			return (::System::Func_2<::BOCEFFDMFPM*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x119F0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x119F8);
		}

		static ::System::Action** StaticGet___9__72_2()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11A00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOPECJBFFNJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPECJBFFNJ___C_CTOR_OFFSET))(this);
		}

		::BOCEFFDMFPM* _ForceLoadAllAsync_b__63_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::BOCEFFDMFPM*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + BOPECJBFFNJ___C__FORCELOADALLASYNC_B__63_0_OFFSET))(this, a1);
		}

		::System::Boolean _ForceLoadAllAsync_b__63_1(::BOCEFFDMFPM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BOCEFFDMFPM*))((::PBYTE)hIl2Cpp + BOPECJBFFNJ___C__FORCELOADALLASYNC_B__63_1_OFFSET))(this, a1);
		}

		::BOCEFFDMFPM* __UnloadAllLoadItem_b__72_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::BOCEFFDMFPM*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + BOPECJBFFNJ___C___UNLOADALLLOADITEM_B__72_0_OFFSET))(this, a1);
		}

		::System::Void __UnloadAllLoadItem_b__72_1(::BOCEFFDMFPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOCEFFDMFPM*))((::PBYTE)hIl2Cpp + BOPECJBFFNJ___C___UNLOADALLLOADITEM_B__72_1_OFFSET))(this, a1);
		}

		::System::Void __UnloadAllLoadItem_b__72_2(::BOCEFFDMFPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOCEFFDMFPM*))((::PBYTE)hIl2Cpp + BOPECJBFFNJ___C___UNLOADALLLOADITEM_B__72_2_OFFSET))(this, a1);
		}

		::System::Void __UnloadAllLoadItem_b__72_3(::BOCEFFDMFPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOCEFFDMFPM*))((::PBYTE)hIl2Cpp + BOPECJBFFNJ___C___UNLOADALLLOADITEM_B__72_3_OFFSET))(this, a1);
		}

	};
