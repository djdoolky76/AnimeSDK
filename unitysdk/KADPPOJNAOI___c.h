#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALAMOHABJIP;
class GPLMLPKBGGE;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define KADPPOJNAOI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB2CD6C0)
#define KADPPOJNAOI___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB2CD700)
#define KADPPOJNAOI___C__SAVE_B__3_1_OFFSET UNITYSDK_OFFSET(0xB2CD710)

inline static constexpr unsigned int KADPPOJNAOI___c_TypeDefinitionIndex = 80243;

	class KADPPOJNAOI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2E5B0);
		}

		static ::System::Func_2<::GPLMLPKBGGE*, ::ALAMOHABJIP*>** StaticGet___9__3_1()
		{
			return (::System::Func_2<::GPLMLPKBGGE*, ::ALAMOHABJIP*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2E5B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KADPPOJNAOI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KADPPOJNAOI___C_CTOR_OFFSET))(this);
		}

		::ALAMOHABJIP* _Save_b__3_1(::GPLMLPKBGGE* a1)
		{
			return ((::ALAMOHABJIP*(*)(::PVOID, ::GPLMLPKBGGE*))((::PBYTE)hIl2Cpp + KADPPOJNAOI___C__SAVE_B__3_1_OFFSET))(this, a1);
		}

	};
