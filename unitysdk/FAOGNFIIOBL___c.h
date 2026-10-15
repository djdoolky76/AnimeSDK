#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EANJILGOKBE;
class IOIIFAENPNH;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define FAOGNFIIOBL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15689250)
#define FAOGNFIIOBL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15689280)
#define FAOGNFIIOBL___C___TRYADDSHOWDATA_B__10_0_OFFSET UNITYSDK_OFFSET(0x156892D0)
#define FAOGNFIIOBL___C___UPDATEENTITYMODIFIERLIST_B__6_0_OFFSET UNITYSDK_OFFSET(0x15689290)
#define FAOGNFIIOBL___C___UPDATEENTITYMODIFIERLIST_B__6_1_OFFSET UNITYSDK_OFFSET(0x156892B0)

	class FAOGNFIIOBL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CAC0);
		}

		static ::System::Comparison_1<::EANJILGOKBE*>** StaticGet___9__6_0()
		{
			return (::System::Comparison_1<::EANJILGOKBE*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CAC8);
		}

		static ::System::Comparison_1<::IOIIFAENPNH*>** StaticGet___9__10_0()
		{
			return (::System::Comparison_1<::IOIIFAENPNH*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CAD0);
		}

		static ::System::Comparison_1<::EANJILGOKBE*>** StaticGet___9__6_1()
		{
			return (::System::Comparison_1<::EANJILGOKBE*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CAD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAOGNFIIOBL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOGNFIIOBL___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __UpdateEntityModifierList_b__6_0(::EANJILGOKBE* a1, ::EANJILGOKBE* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::EANJILGOKBE*, ::EANJILGOKBE*))((::PBYTE)hIl2Cpp + FAOGNFIIOBL___C___UPDATEENTITYMODIFIERLIST_B__6_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 __UpdateEntityModifierList_b__6_1(::EANJILGOKBE* a1, ::EANJILGOKBE* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::EANJILGOKBE*, ::EANJILGOKBE*))((::PBYTE)hIl2Cpp + FAOGNFIIOBL___C___UPDATEENTITYMODIFIERLIST_B__6_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 __TryAddShowData_b__10_0(::IOIIFAENPNH* a1, ::IOIIFAENPNH* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::IOIIFAENPNH*, ::IOIIFAENPNH*))((::PBYTE)hIl2Cpp + FAOGNFIIOBL___C___TRYADDSHOWDATA_B__10_0_OFFSET))(this, a1, a2);
		}

	};
