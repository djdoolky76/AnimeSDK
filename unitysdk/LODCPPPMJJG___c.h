#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEKDEPEBHNC;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define LODCPPPMJJG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB7F08A0)
#define LODCPPPMJJG___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB7F08D0)
#define LODCPPPMJJG___C___GETFIRSTULTRASKILLITEM_B__25_0_OFFSET UNITYSDK_OFFSET(0xB7F08E0)

inline static constexpr unsigned int LODCPPPMJJG___c_TypeDefinitionIndex = 71309;

	class LODCPPPMJJG___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::DEKDEPEBHNC*, ::System::Boolean>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::DEKDEPEBHNC*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6B220);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6B228);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LODCPPPMJJG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LODCPPPMJJG___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __GetFirstUltraSkillItem_b__25_0(::DEKDEPEBHNC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DEKDEPEBHNC*))((::PBYTE)hIl2Cpp + LODCPPPMJJG___C___GETFIRSTULTRASKILLITEM_B__25_0_OFFSET))(this, a1);
		}

	};
