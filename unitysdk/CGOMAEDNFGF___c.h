#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJAKFICJBBF_OAGIHDNKOCB;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CGOMAEDNFGF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5D4C70)
#define CGOMAEDNFGF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5D4CB0)
#define CGOMAEDNFGF___C___HANDLECATREACHSECTIONTARGET_B__21_0_OFFSET UNITYSDK_OFFSET(0x1C5D4CC0)

	class CGOMAEDNFGF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57DA0);
		}

		static ::System::Func_2<::System::Object*, ::System::UInt32>** StaticGet___9__21_0()
		{
			return (::System::Func_2<::System::Object*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57DA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGOMAEDNFGF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGOMAEDNFGF___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __HandleCatReachSectionTarget_b__21_0(::JJAKFICJBBF_OAGIHDNKOCB* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::JJAKFICJBBF_OAGIHDNKOCB*))((::PBYTE)hIl2Cpp + CGOMAEDNFGF___C___HANDLECATREACHSECTIONTARGET_B__21_0_OFFSET))(this, a1);
		}

	};
