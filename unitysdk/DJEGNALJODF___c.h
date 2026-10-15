#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define DJEGNALJODF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xF230150)
#define DJEGNALJODF___C_CTOR_OFFSET UNITYSDK_OFFSET(0xF230190)
#define DJEGNALJODF___C___CREATEBIGDATARECOMMEND_B__4_0_OFFSET UNITYSDK_OFFSET(0xF230240)
#define DJEGNALJODF___C___CREATESYSTEMRECOMMEND_B__3_0_OFFSET UNITYSDK_OFFSET(0xF2301A0)

	class DJEGNALJODF___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::String*>** StaticGet___9__4_0()
		{
			return (::System::Func_1<::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57930);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57938);
		}

		static ::System::Func_1<::System::String*>** StaticGet___9__3_0()
		{
			return (::System::Func_1<::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJEGNALJODF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJEGNALJODF___C_CTOR_OFFSET))(this);
		}

		::System::String* __CreateSystemRecommend_b__3_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJEGNALJODF___C___CREATESYSTEMRECOMMEND_B__3_0_OFFSET))(this);
		}

		::System::String* __CreateBigDataRecommend_b__4_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJEGNALJODF___C___CREATEBIGDATARECOMMEND_B__4_0_OFFSET))(this);
		}

	};
