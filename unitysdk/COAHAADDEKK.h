#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EBOAPGFADNL.h"
#include "unitysdk/EPAFNCNFOHG.h"
#include "unitysdk/HDEDKBMGBMB.h"
#include "unitysdk/OPKDBCOPPAI.h"
class BLNPACFAKHD;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define COAHAADDEKK_ACJKOIIEEGB_OFFSET UNITYSDK_OFFSET(0x1DD2D300)
#define COAHAADDEKK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD2DAB0)
#define COAHAADDEKK_HCNFPLHKHDO_OFFSET UNITYSDK_OFFSET(0x1DD2C690)
#define COAHAADDEKK_IBGMDPBGCCJ_OFFSET UNITYSDK_OFFSET(0x1DD2C870)
#define COAHAADDEKK_LLNPBOFNCFN_OFFSET UNITYSDK_OFFSET(0x1DD2C6D0)
#define COAHAADDEKK_MMIEAACIGME_OFFSET UNITYSDK_OFFSET(0x1DD2C280)
#define COAHAADDEKK_NHIOCKDDBDJ_OFFSET UNITYSDK_OFFSET(0x1DD2CDF0)
#define COAHAADDEKK_PLLIKOCFDBA_1_OFFSET UNITYSDK_OFFSET(0x1DD2D930)
#define COAHAADDEKK_PLLIKOCFDBA_OFFSET UNITYSDK_OFFSET(0x1DD2D3E0)

	class COAHAADDEKK : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet_JKOPJGFEPOF()
		{
			return (::System::Single*)UnitySDK::FromName("", "COAHAADDEKK")->GetStaticField(0x7C20);
		}

		// static const ::System::Object MHJNNJGKEDO; // 0x0
		// static const ::System::Object EDMIKPBHKCA; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COAHAADDEKK_CCTOR_OFFSET))();
		}

		static ::System::Boolean MMIEAACIGME(::System::Func_2<::System::Single, ::System::Single>* a1, ::System::Single a2, ::System::Single a3, ::OPKDBCOPPAI a4, ::System::Int32 a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9)
		{
			return ((::System::Boolean(*)(::System::Func_2<::System::Single, ::System::Single>*, ::System::Single, ::System::Single, ::OPKDBCOPPAI, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + COAHAADDEKK_MMIEAACIGME_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Boolean HCNFPLHKHDO(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + COAHAADDEKK_HCNFPLHKHDO_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean LLNPBOFNCFN(::System::Single a1, ::System::Single a2, ::System::Single a3, ::EPAFNCNFOHG a4, ::System::Single a5)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::EPAFNCNFOHG, ::System::Single))((::PBYTE)hIl2Cpp + COAHAADDEKK_LLNPBOFNCFN_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean IBGMDPBGCCJ(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::EBOAPGFADNL a5, ::System::Single a6)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::EBOAPGFADNL, ::System::Single))((::PBYTE)hIl2Cpp + COAHAADDEKK_IBGMDPBGCCJ_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean NHIOCKDDBDJ(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::HDEDKBMGBMB a6, ::System::Single a7)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::HDEDKBMGBMB, ::System::Single))((::PBYTE)hIl2Cpp + COAHAADDEKK_NHIOCKDDBDJ_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Single ACJKOIIEEGB(::BLNPACFAKHD* a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::BLNPACFAKHD*, ::System::Single))((::PBYTE)hIl2Cpp + COAHAADDEKK_ACJKOIIEEGB_OFFSET))(a1, a2);
		}

		static ::System::Boolean PLLIKOCFDBA(::BLNPACFAKHD* a1, ::System::Single a2, ::System::Single a3, ::System::Object* a4, ::System::Int32 a5, ::System::Single a6)
		{
			return ((::System::Boolean(*)(::BLNPACFAKHD*, ::System::Single, ::System::Single, ::System::Object*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + COAHAADDEKK_PLLIKOCFDBA_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean PLLIKOCFDBA_1(::BLNPACFAKHD* a1, ::System::Object* a2, ::System::Int32 a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::BLNPACFAKHD*, ::System::Object*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + COAHAADDEKK_PLLIKOCFDBA_1_OFFSET))(a1, a2, a3, a4);
		}

	};
