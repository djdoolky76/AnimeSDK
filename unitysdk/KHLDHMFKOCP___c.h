#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOCAFIDJADI;
class KHLDHMFKOCP_FHMFJBMKDMN;
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define KHLDHMFKOCP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CBDD200)
#define KHLDHMFKOCP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBDD240)
#define KHLDHMFKOCP___C___NOTIFYCOOPBOSSPVELEVELENDSTAT_B__158_0_OFFSET UNITYSDK_OFFSET(0x1CBDD2E0)
#define KHLDHMFKOCP___C___REPLACECOOPBOSSWAVEITEMS_B__42_0_OFFSET UNITYSDK_OFFSET(0x1CBDD250)

	class KHLDHMFKOCP___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::System::Object*>** StaticGet___9__158_0()
		{
			return (::System::Predicate_1<::System::Object*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D170);
		}

		static ::System::Predicate_1<::IOCAFIDJADI*>** StaticGet___9__42_0()
		{
			return (::System::Predicate_1<::IOCAFIDJADI*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D178);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D180);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHLDHMFKOCP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLDHMFKOCP___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __ReplaceCoopBossWaveItems_b__42_0(::IOCAFIDJADI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IOCAFIDJADI*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP___C___REPLACECOOPBOSSWAVEITEMS_B__42_0_OFFSET))(this, a1);
		}

		::System::Boolean __NotifyCoopBossPveLevelEndStat_b__158_0(::KHLDHMFKOCP_FHMFJBMKDMN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHLDHMFKOCP_FHMFJBMKDMN*))((::PBYTE)hIl2Cpp + KHLDHMFKOCP___C___NOTIFYCOOPBOSSPVELEVELENDSTAT_B__158_0_OFFSET))(this, a1);
		}

	};
