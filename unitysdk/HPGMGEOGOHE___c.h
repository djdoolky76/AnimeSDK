#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPADPABCFGH;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define HPGMGEOGOHE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15DC7310)
#define HPGMGEOGOHE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15DC7350)
#define HPGMGEOGOHE___C___SORTPOSLIST_B__3_0_OFFSET UNITYSDK_OFFSET(0x15DC7360)

	class HPGMGEOGOHE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36D30);
		}

		static ::System::Comparison_1<::EPADPABCFGH*>** StaticGet___9__3_0()
		{
			return (::System::Comparison_1<::EPADPABCFGH*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36D38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPGMGEOGOHE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGMGEOGOHE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __SortPosList_b__3_0(::EPADPABCFGH* a1, ::EPADPABCFGH* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::EPADPABCFGH*, ::EPADPABCFGH*))((::PBYTE)hIl2Cpp + HPGMGEOGOHE___C___SORTPOSLIST_B__3_0_OFFSET))(this, a1, a2);
		}

	};
