#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class AAHPFGHKBOJ;
class GEDMHFPPBHN;
class HEKAMNMEEOK;
class IKBAMHGDEJC;
class KPCOIAAEGAK;
class MADHNHEMBOJ;
class MCFBBMAMCON;
namespace RPG::GameCore { class CharacterDataComponent; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DGMADGGFLIJ_AGDBDCEPOCH_OFFSET UNITYSDK_OFFSET(0xF424590)
#define DGMADGGFLIJ_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xF424F60)
#define DGMADGGFLIJ_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xF425030)
#define DGMADGGFLIJ_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xF424530)
#define DGMADGGFLIJ_CTOR_OFFSET UNITYSDK_OFFSET(0xF4250D0)
#define DGMADGGFLIJ_DMJLJCBICFM_OFFSET UNITYSDK_OFFSET(0xF4249E0)
#define DGMADGGFLIJ_HPPCDHKEDEJ_OFFSET UNITYSDK_OFFSET(0xF424EA0)
#define DGMADGGFLIJ_IFHDCHKKMCN_OFFSET UNITYSDK_OFFSET(0xF424780)
#define DGMADGGFLIJ_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xF4243F0)
#define DGMADGGFLIJ_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xF424730)
#define DGMADGGFLIJ_NFINDOKJNFH_OFFSET UNITYSDK_OFFSET(0xF424680)
#define DGMADGGFLIJ_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xF424320)
#define DGMADGGFLIJ_OFFCIEFGIAD_OFFSET UNITYSDK_OFFSET(0xF424E40)
#define DGMADGGFLIJ_OHLKNLJGOEK_OFFSET UNITYSDK_OFFSET(0xF424860)
#define DGMADGGFLIJ_PANJEHFIDGO_OFFSET UNITYSDK_OFFSET(0xF424A30)
#define DGMADGGFLIJ_PKDCIBJMEJN_OFFSET UNITYSDK_OFFSET(0xF424D00)
#define DGMADGGFLIJ__INITVARONCE_OFFSET UNITYSDK_OFFSET(0xF4240B0)
#define DGMADGGFLIJ__ONBIND_OFFSET UNITYSDK_OFFSET(0xF423FC0)
#define DGMADGGFLIJ__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xF4242D0)
#define DGMADGGFLIJ__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xF424230)

inline static constexpr unsigned int DGMADGGFLIJ_TypeDefinitionIndex = 73252;

	class DGMADGGFLIJ : public ::FMPCODLIOLG
	{
	public:
		::KPCOIAAEGAK* FMDKIOCDOIE; // 0x60
		::RPG::GameCore::CharacterDataComponent* GOKPGBDMOLC; // 0x68
		::IKBAMHGDEJC* PICMKGJOBLH; // 0x70
		::MCFBBMAMCON* GJHOPPOAEAL; // 0x78
		::System::Collections::Generic::List_1<::HEKAMNMEEOK*>* KBBMLIADILP; // 0x80
		::GEDMHFPPBHN* HBKCICMELMM; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMADGGFLIJ_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMADGGFLIJ__ONBIND_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMADGGFLIJ__INITVARONCE_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + DGMADGGFLIJ__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMADGGFLIJ__ONDISPOSE_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::MADHNHEMBOJ* a1, ::GEDMHFPPBHN* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::MADHNHEMBOJ*, ::GEDMHFPPBHN*, ::System::Boolean))((::PBYTE)hIl2Cpp + DGMADGGFLIJ_NKPPGDENJAE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DGMADGGFLIJ_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void LJBCDJNNBJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMADGGFLIJ_LJBCDJNNBJH_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMADGGFLIJ_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void IFHDCHKKMCN(::AAHPFGHKBOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAHPFGHKBOJ*))((::PBYTE)hIl2Cpp + DGMADGGFLIJ_IFHDCHKKMCN_OFFSET))(this, a1);
		}

		::System::Void AGDBDCEPOCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMADGGFLIJ_AGDBDCEPOCH_OFFSET))(this);
		}

		::System::Void NFINDOKJNFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMADGGFLIJ_NFINDOKJNFH_OFFSET))(this);
		}

		::System::Void PANJEHFIDGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMADGGFLIJ_PANJEHFIDGO_OFFSET))(this);
		}

		::System::Void OFFCIEFGIAD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DGMADGGFLIJ_OFFCIEFGIAD_OFFSET))(this, a1);
		}

		::System::Void PKDCIBJMEJN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DGMADGGFLIJ_PKDCIBJMEJN_OFFSET))(this, a1);
		}

		::System::Void DMJLJCBICFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMADGGFLIJ_DMJLJCBICFM_OFFSET))(this);
		}

		::System::Void OHLKNLJGOEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMADGGFLIJ_OHLKNLJGOEK_OFFSET))(this);
		}

		::System::Void HPPCDHKEDEJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DGMADGGFLIJ_HPPCDHKEDEJ_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMADGGFLIJ_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMADGGFLIJ_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
