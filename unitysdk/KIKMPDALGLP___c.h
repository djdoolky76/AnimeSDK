#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define KIKMPDALGLP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB433C50)
#define KIKMPDALGLP___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB433C90)
#define KIKMPDALGLP___C__SELECTTARGETS_B__0_0_OFFSET UNITYSDK_OFFSET(0xB433CA0)

	class KIKMPDALGLP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57590);
		}

		static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57598);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIKMPDALGLP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKMPDALGLP___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _SelectTargets_b__0_0(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KIKMPDALGLP___C__SELECTTARGETS_B__0_0_OFFSET))(this, a1);
		}

	};
