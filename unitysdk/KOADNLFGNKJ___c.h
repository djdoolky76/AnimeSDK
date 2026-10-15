#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALAMOHABJIP;
class GPLMLPKBGGE;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define KOADNLFGNKJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB5862D0)
#define KOADNLFGNKJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB586300)
#define KOADNLFGNKJ___C___ONQUERYSERVERINFO_B__9_0_OFFSET UNITYSDK_OFFSET(0xB586310)

inline static constexpr unsigned int KOADNLFGNKJ___c_TypeDefinitionIndex = 80231;

	class KOADNLFGNKJ___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::ALAMOHABJIP*, ::GPLMLPKBGGE*>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::ALAMOHABJIP*, ::GPLMLPKBGGE*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F480);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F488);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOADNLFGNKJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOADNLFGNKJ___C_CTOR_OFFSET))(this);
		}

		::GPLMLPKBGGE* __OnQueryServerInfo_b__9_0(::ALAMOHABJIP* a1)
		{
			return ((::GPLMLPKBGGE*(*)(::PVOID, ::ALAMOHABJIP*))((::PBYTE)hIl2Cpp + KOADNLFGNKJ___C___ONQUERYSERVERINFO_B__9_0_OFFSET))(this, a1);
		}

	};
