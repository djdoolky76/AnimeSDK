#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLCJBFLKOJD;
class LBKMCGDMNJO;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define OMOEFAHFJFL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBF471E0)
#define OMOEFAHFJFL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBF47220)
#define OMOEFAHFJFL___C___CONVERTTOPROTO_B__13_0_OFFSET UNITYSDK_OFFSET(0xBF47230)

	class OMOEFAHFJFL___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::JLCJBFLKOJD*, ::LBKMCGDMNJO*>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::JLCJBFLKOJD*, ::LBKMCGDMNJO*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C6C0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C6C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMOEFAHFJFL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMOEFAHFJFL___C_CTOR_OFFSET))(this);
		}

		::LBKMCGDMNJO* __ConvertToProto_b__13_0(::JLCJBFLKOJD* a1)
		{
			return ((::LBKMCGDMNJO*(*)(::PVOID, ::JLCJBFLKOJD*))((::PBYTE)hIl2Cpp + OMOEFAHFJFL___C___CONVERTTOPROTO_B__13_0_OFFSET))(this, a1);
		}

	};
