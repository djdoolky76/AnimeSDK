#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
class BOCEFFDMFPM;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define BOPECJBFFNJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15ADCCF0)
#define BOPECJBFFNJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15ADCD30)
#define BOPECJBFFNJ___C__FORCELOADALLASYNC_B__63_0_OFFSET UNITYSDK_OFFSET(0x15ADCD40)
#define BOPECJBFFNJ___C__FORCELOADALLASYNC_B__63_1_OFFSET UNITYSDK_OFFSET(0x15ADCD50)
#define BOPECJBFFNJ___C___UNLOADALLLOADITEM_B__72_0_OFFSET UNITYSDK_OFFSET(0x15ADCD90)
#define BOPECJBFFNJ___C___UNLOADALLLOADITEM_B__72_1_OFFSET UNITYSDK_OFFSET(0x15ADCDA0)
#define BOPECJBFFNJ___C___UNLOADALLLOADITEM_B__72_2_OFFSET UNITYSDK_OFFSET(0x15ADCDE0)
#define BOPECJBFFNJ___C___UNLOADALLLOADITEM_B__72_3_OFFSET UNITYSDK_OFFSET(0x15ADCFE0)

inline static constexpr unsigned int BOPECJBFFNJ___c_TypeDefinitionIndex = 42550;

	class BOPECJBFFNJ___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt64, ::BOCEFFDMFPM*>, ::BOCEFFDMFPM*>** StaticGet___9__72_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt64, ::BOCEFFDMFPM*>, ::BOCEFFDMFPM*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70B40);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt64, ::BOCEFFDMFPM*>, ::BOCEFFDMFPM*>** StaticGet___9__63_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt64, ::BOCEFFDMFPM*>, ::BOCEFFDMFPM*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70B48);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70B50);
		}

		static ::System::Action_1<::BOCEFFDMFPM*>** StaticGet___9__72_3()
		{
			return (::System::Action_1<::BOCEFFDMFPM*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70B58);
		}

		static ::System::Action_1<::BOCEFFDMFPM*>** StaticGet___9__72_1()
		{
			return (::System::Action_1<::BOCEFFDMFPM*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70B60);
		}

		static ::System::Action_1<::BOCEFFDMFPM*>** StaticGet___9__72_2()
		{
			return (::System::Action_1<::BOCEFFDMFPM*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70B68);
		}

		static ::System::Func_2<::BOCEFFDMFPM*, ::System::Boolean>** StaticGet___9__63_1()
		{
			return (::System::Func_2<::BOCEFFDMFPM*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70B70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOPECJBFFNJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPECJBFFNJ___C_CTOR_OFFSET))(this);
		}

		::BOCEFFDMFPM* _ForceLoadAllAsync_b__63_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt64, ::BOCEFFDMFPM*> a1)
		{
			return ((::BOCEFFDMFPM*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt64, ::BOCEFFDMFPM*>))((::PBYTE)hIl2Cpp + BOPECJBFFNJ___C__FORCELOADALLASYNC_B__63_0_OFFSET))(this, a1);
		}

		::System::Boolean _ForceLoadAllAsync_b__63_1(::BOCEFFDMFPM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BOCEFFDMFPM*))((::PBYTE)hIl2Cpp + BOPECJBFFNJ___C__FORCELOADALLASYNC_B__63_1_OFFSET))(this, a1);
		}

		::BOCEFFDMFPM* __UnloadAllLoadItem_b__72_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt64, ::BOCEFFDMFPM*> a1)
		{
			return ((::BOCEFFDMFPM*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt64, ::BOCEFFDMFPM*>))((::PBYTE)hIl2Cpp + BOPECJBFFNJ___C___UNLOADALLLOADITEM_B__72_0_OFFSET))(this, a1);
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
