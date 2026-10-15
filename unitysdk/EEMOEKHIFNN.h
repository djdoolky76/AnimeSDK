#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJCPGIHOMCN;
class FNHBHPDJACF;
class GNDPHNBIDJJ;
class MEDFLBNBFGD;
class OBJANKHLNGO;
namespace RPG::Client::FateRin::HouguMap { class FateRinHouguMapFight; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }

#define EEMOEKHIFNN_CHMMPHLBLGK_OFFSET UNITYSDK_OFFSET(0x13A3ED30)
#define EEMOEKHIFNN_CTOR_OFFSET UNITYSDK_OFFSET(0x13A3EA30)
#define EEMOEKHIFNN_DHLHOPFFAJM_OFFSET UNITYSDK_OFFSET(0x13A3F150)
#define EEMOEKHIFNN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A3EB80)
#define EEMOEKHIFNN_FEIHGKFLMGL_OFFSET UNITYSDK_OFFSET(0x13A3F250)
#define EEMOEKHIFNN_GOBDPGIPEAB_OFFSET UNITYSDK_OFFSET(0x13A3F450)
#define EEMOEKHIFNN_IJEBMBAGOJB_OFFSET UNITYSDK_OFFSET(0x13A3F2F0)
#define EEMOEKHIFNN_MDAIKMFPPLG_OFFSET UNITYSDK_OFFSET(0x13A3EC10)
#define EEMOEKHIFNN_NIAEFEOCEAB_OFFSET UNITYSDK_OFFSET(0x13A3ED80)
#define EEMOEKHIFNN_PIOBKHJFFFK_OFFSET UNITYSDK_OFFSET(0x13A3F1B0)
#define EEMOEKHIFNN_PMFGMIBNFEO_OFFSET UNITYSDK_OFFSET(0x13A3F0A0)
#define EEMOEKHIFNN__TRACKFIGHT_B__2_0_OFFSET UNITYSDK_OFFSET(0x13A3F5C0)

inline static constexpr unsigned int EEMOEKHIFNN_TypeDefinitionIndex = 80763;

	class EEMOEKHIFNN : public ::System::Object
	{
	public:
		::FJCPGIHOMCN* LBNAGLIGKIO; // 0x10
		::GNDPHNBIDJJ* MJHHLOPFDNK; // 0x18
		::OBJANKHLNGO* GJALMBBNNOF; // 0x20
		::System::UInt32 OAKPOBHKJJC; // 0x28
		::System::UInt32 FHNOJKDIFHL; // 0x2C
		::System::Void _ctor(::FJCPGIHOMCN* a1, ::GNDPHNBIDJJ* a2, ::OBJANKHLNGO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::FJCPGIHOMCN*, ::GNDPHNBIDJJ*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + EEMOEKHIFNN_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMOEKHIFNN_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* MDAIKMFPPLG(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EEMOEKHIFNN_MDAIKMFPPLG_OFFSET))(this, a1);
		}

		::System::Void CHMMPHLBLGK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EEMOEKHIFNN_CHMMPHLBLGK_OFFSET))(this, a1);
		}

		::System::UInt32 PMFGMIBNFEO(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EEMOEKHIFNN_PMFGMIBNFEO_OFFSET))(this, a1);
		}

		::System::Void DHLHOPFFAJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMOEKHIFNN_DHLHOPFFAJM_OFFSET))(this);
		}

		::System::Void PIOBKHJFFFK(::MEDFLBNBFGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEDFLBNBFGD*))((::PBYTE)hIl2Cpp + EEMOEKHIFNN_PIOBKHJFFFK_OFFSET))(this, a1);
		}

		::System::Void FEIHGKFLMGL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EEMOEKHIFNN_FEIHGKFLMGL_OFFSET))(this, a1);
		}

		::System::Void NIAEFEOCEAB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EEMOEKHIFNN_NIAEFEOCEAB_OFFSET))(this, a1);
		}

		static ::System::UInt32 GOBDPGIPEAB(::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight* a1)
		{
			return ((::System::UInt32(*)(::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight*))((::PBYTE)hIl2Cpp + EEMOEKHIFNN_GOBDPGIPEAB_OFFSET))(a1);
		}

		::System::Void IJEBMBAGOJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMOEKHIFNN_IJEBMBAGOJB_OFFSET))(this);
		}

		::System::Void _TrackFight_b__2_0(::FNHBHPDJACF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNHBHPDJACF*))((::PBYTE)hIl2Cpp + EEMOEKHIFNN__TRACKFIGHT_B__2_0_OFFSET))(this, a1);
		}

	};
