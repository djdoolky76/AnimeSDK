#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBMMGODFEEO;
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define HPPNAAGGAMP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15DD4D10)
#define HPPNAAGGAMP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15DD4D40)
#define HPPNAAGGAMP___C__BORROW_B__4_1_OFFSET UNITYSDK_OFFSET(0x15DD4D50)
#define HPPNAAGGAMP___C___ONPRELOADTIMELINEASSETFINISH_B__33_0_OFFSET UNITYSDK_OFFSET(0x15DD4D80)

inline static constexpr unsigned int HPPNAAGGAMP___c_TypeDefinitionIndex = 48480;

	class HPPNAAGGAMP___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::EBMMGODFEEO*>** StaticGet___9__4_1()
		{
			return (::System::Predicate_1<::EBMMGODFEEO*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33510);
		}

		static ::System::Predicate_1<::EBMMGODFEEO*>** StaticGet___9__33_0()
		{
			return (::System::Predicate_1<::EBMMGODFEEO*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33518);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33520);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPPNAAGGAMP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPNAAGGAMP___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _Borrow_b__4_1(::EBMMGODFEEO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EBMMGODFEEO*))((::PBYTE)hIl2Cpp + HPPNAAGGAMP___C__BORROW_B__4_1_OFFSET))(this, a1);
		}

		::System::Boolean __OnPreloadTimelineAssetFinish_b__33_0(::EBMMGODFEEO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EBMMGODFEEO*))((::PBYTE)hIl2Cpp + HPPNAAGGAMP___C___ONPRELOADTIMELINEASSETFINISH_B__33_0_OFFSET))(this, a1);
		}

	};
