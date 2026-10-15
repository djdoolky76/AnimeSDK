#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
class ABGNMNDCEND;
class JPHKBAHBDGB;
namespace RPG::Client { class TimeSpaceCrisscrossIRIMonoPlugin; }
namespace RPG::Client::LiteInstancedItem { class ItemPrototype; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xE29D010)
#define RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xE29CE60)
#define RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE29D000)
#define RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_DMLDEJDELFN_OFFSET UNITYSDK_OFFSET(0xE29A870)
#define RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_FEDIAIOKNPC_OFFSET UNITYSDK_OFFSET(0xE29BB90)
#define RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xE29BB10)
#define RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xE29CEC0)
#define RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE29CB60)
#define RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xE29CD60)
#define RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xE29CF20)
#define RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xE29CC10)
#define RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_PPPOEFEHGDC_OFFSET UNITYSDK_OFFSET(0xE29BDF0)
#define RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xE29CF80)

namespace RPG::Client
{
	class TimeSpaceCrisscrossIRIBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::UnityEngine::MaterialPropertyBlock* _Mpb; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* _InstancedTSCMats; // 0x40
		::System::Collections::Generic::List_1<::JPHKBAHBDGB*>* _TSCItemInstances; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::LiteInstancedItem::ItemPrototype*>* _TSCItemPrototype; // 0x50
		::ABGNMNDCEND* _ItemRenderer; // 0x58
		::System::Boolean _Registed; // 0x60
		static ::System::Int32* StaticGet__IRICustomDataID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "TimeSpaceCrisscrossIRIBehavior")->GetStaticField(0x6560);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void DMLDEJDELFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_DMLDEJDELFN_OFFSET))(this);
		}

		::System::Void FEDIAIOKNPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_FEDIAIOKNPC_OFFSET))(this);
		}

		::System::Void PPPOEFEHGDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_PPPOEFEHGDC_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::RPG::Client::TimeSpaceCrisscrossIRIMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::TimeSpaceCrisscrossIRIMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
