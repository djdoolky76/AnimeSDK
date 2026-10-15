#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIGCDGKOBMK;
class FBKKFMONGAA;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define FAILCGLDICF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1567F400)
#define FAILCGLDICF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1567F440)
#define FAILCGLDICF___C___NOTIFYBUFFEDCELLSMAYBECHANGED_B__17_0_OFFSET UNITYSDK_OFFSET(0x1567F450)
#define FAILCGLDICF___C___NOTIFYBUFFEDCELLSMAYBECHANGED_B__17_1_OFFSET UNITYSDK_OFFSET(0x1567F4C0)
#define FAILCGLDICF___C___NOTIFYBUFFEDCELLSMAYBECHANGED_B__17_2_OFFSET UNITYSDK_OFFSET(0x1567F530)

	class FAILCGLDICF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C750);
		}

		static ::System::Func_2<::DIGCDGKOBMK*, ::FBKKFMONGAA*>** StaticGet___9__17_1()
		{
			return (::System::Func_2<::DIGCDGKOBMK*, ::FBKKFMONGAA*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C758);
		}

		static ::System::Func_2<::DIGCDGKOBMK*, ::System::Boolean>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::DIGCDGKOBMK*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C760);
		}

		static ::System::Func_2<::FBKKFMONGAA*, ::System::Boolean>** StaticGet___9__17_2()
		{
			return (::System::Func_2<::FBKKFMONGAA*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C768);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAILCGLDICF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAILCGLDICF___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __NotifyBuffedCellsMaybeChanged_b__17_0(::DIGCDGKOBMK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DIGCDGKOBMK*))((::PBYTE)hIl2Cpp + FAILCGLDICF___C___NOTIFYBUFFEDCELLSMAYBECHANGED_B__17_0_OFFSET))(this, a1);
		}

		::FBKKFMONGAA* __NotifyBuffedCellsMaybeChanged_b__17_1(::DIGCDGKOBMK* a1)
		{
			return ((::FBKKFMONGAA*(*)(::PVOID, ::DIGCDGKOBMK*))((::PBYTE)hIl2Cpp + FAILCGLDICF___C___NOTIFYBUFFEDCELLSMAYBECHANGED_B__17_1_OFFSET))(this, a1);
		}

		::System::Boolean __NotifyBuffedCellsMaybeChanged_b__17_2(::FBKKFMONGAA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FBKKFMONGAA*))((::PBYTE)hIl2Cpp + FAILCGLDICF___C___NOTIFYBUFFEDCELLSMAYBECHANGED_B__17_2_OFFSET))(this, a1);
		}

	};
