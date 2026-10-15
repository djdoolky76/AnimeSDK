#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLBHAOEAMCI.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
class IPEEBDICNJH;
class KDAEFFHFFLP;
class NNIKOAIKFMO;
namespace Entitas { class IComponent; }
namespace Entitas { class IEntity; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define IPEEBDICNJH_CAGOAEDMDID_OFFSET UNITYSDK_OFFSET(0x1C6B75E0)
#define IPEEBDICNJH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6B6120)
#define IPEEBDICNJH_DPDHNOAHCOL_OFFSET UNITYSDK_OFFSET(0x1C6B6230)
#define IPEEBDICNJH_EFKAKOOHDKC_OFFSET UNITYSDK_OFFSET(0x1C6B6BE0)
#define IPEEBDICNJH_FOKEAMHFNCK_OFFSET UNITYSDK_OFFSET(0x1C6B70C0)
#define IPEEBDICNJH_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x1C6B5FA0)
#define IPEEBDICNJH_HJOFBHEJAFO_OFFSET UNITYSDK_OFFSET(0x1C6B6E90)
#define IPEEBDICNJH_KIPCKBIBDFG_OFFSET UNITYSDK_OFFSET(0x1C6B7540)
#define IPEEBDICNJH_LBOAJFFOFCG_OFFSET UNITYSDK_OFFSET(0x1C6B6D00)
#define IPEEBDICNJH_NJPNKCJGKLK_OFFSET UNITYSDK_OFFSET(0x1C6B7400)
#define IPEEBDICNJH_NMKEGKEICDJ_OFFSET UNITYSDK_OFFSET(0x1C6B74A0)
#define IPEEBDICNJH_PICDGLIDPPO_OFFSET UNITYSDK_OFFSET(0x1C6B7260)

inline static constexpr unsigned int IPEEBDICNJH_TypeDefinitionIndex = 36855;

	class IPEEBDICNJH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::KDAEFFHFFLP*>* GFAOCKFACHG; // 0x10
		::System::Collections::Generic::Queue_1<::LLBHAOEAMCI>* GPJLNFMIGKP; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::KDAEFFHFFLP*>*>* DCNEHLOAIJD; // 0x20
		static ::IPEEBDICNJH** StaticGet_FLMODBLFAGD()
		{
			return (::IPEEBDICNJH**)UnitySDK::FromName("", "IPEEBDICNJH")->GetStaticField(0x102E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPEEBDICNJH_CTOR_OFFSET))(this);
		}

		static ::IPEEBDICNJH* GGBLHEHJBDO()
		{
			return ((::IPEEBDICNJH*(*)())((::PBYTE)hIl2Cpp + IPEEBDICNJH_GGBLHEHJBDO_OFFSET))();
		}

		::System::Void DPDHNOAHCOL(::KDAEFFHFFLP* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KDAEFFHFFLP*, ::System::Type*))((::PBYTE)hIl2Cpp + IPEEBDICNJH_DPDHNOAHCOL_OFFSET))(this, a1, a2);
		}

		::System::Void EFKAKOOHDKC(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + IPEEBDICNJH_EFKAKOOHDKC_OFFSET))(this, a1, a2);
		}

		::System::Void LBOAJFFOFCG(::Entitas::IEntity* a1, ::Entitas::IComponent* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Entitas::IComponent*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + IPEEBDICNJH_LBOAJFFOFCG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FOKEAMHFNCK(::Entitas::IEntity* a1, ::Entitas::IComponent* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Entitas::IComponent*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + IPEEBDICNJH_FOKEAMHFNCK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PICDGLIDPPO(::Entitas::IEntity* a1, ::System::RuntimeTypeHandle a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::RuntimeTypeHandle, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + IPEEBDICNJH_PICDGLIDPPO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NJPNKCJGKLK(::Entitas::IEntity* a1, ::Entitas::IComponent* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Entitas::IComponent*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + IPEEBDICNJH_NJPNKCJGKLK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NMKEGKEICDJ(::Entitas::IEntity* a1, ::Entitas::IComponent* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Entitas::IComponent*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + IPEEBDICNJH_NMKEGKEICDJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KIPCKBIBDFG(::Entitas::IEntity* a1, ::System::RuntimeTypeHandle a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::RuntimeTypeHandle, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + IPEEBDICNJH_KIPCKBIBDFG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CAGOAEDMDID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPEEBDICNJH_CAGOAEDMDID_OFFSET))(this);
		}

		::KDAEFFHFFLP* HJOFBHEJAFO(::System::Type* a1, ::System::Type* a2)
		{
			return ((::KDAEFFHFFLP*(*)(::PVOID, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + IPEEBDICNJH_HJOFBHEJAFO_OFFSET))(this, a1, a2);
		}

	};
