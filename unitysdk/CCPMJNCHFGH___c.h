#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }

#define CCPMJNCHFGH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C450AF0)
#define CCPMJNCHFGH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C450B30)
#define CCPMJNCHFGH___C__LIMITLOGDIRFILECOUNT_B__0_0_OFFSET UNITYSDK_OFFSET(0x1C450B40)

	class CCPMJNCHFGH___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::String*>** StaticGet___9__0_0()
		{
			return (::System::Comparison_1<::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11B20);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11B28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCPMJNCHFGH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPMJNCHFGH___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _LimitLogDirFileCount_b__0_0(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CCPMJNCHFGH___C__LIMITLOGDIRFILECOUNT_B__0_0_OFFSET))(this, a1, a2);
		}

	};
