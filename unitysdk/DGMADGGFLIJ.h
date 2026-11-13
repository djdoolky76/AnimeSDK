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

#define DGMADGGFLIJ_AGDBDCEPOCH_OFFSET UNITYSDK_OFFSET(0x1ADBC100)
#define DGMADGGFLIJ_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1ADBCAB0)
#define DGMADGGFLIJ_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1ADBCB80)
#define DGMADGGFLIJ_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x1ADBC0A0)
#define DGMADGGFLIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1ADBCC20)
#define DGMADGGFLIJ_DMJLJCBICFM_OFFSET UNITYSDK_OFFSET(0x1ADBC550)
#define DGMADGGFLIJ_HPPCDHKEDEJ_OFFSET UNITYSDK_OFFSET(0x1ADBC9F0)
#define DGMADGGFLIJ_IFHDCHKKMCN_OFFSET UNITYSDK_OFFSET(0x1ADBC2F0)
#define DGMADGGFLIJ_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x1ADBBF60)
#define DGMADGGFLIJ_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x1ADBC2A0)
#define DGMADGGFLIJ_NFINDOKJNFH_OFFSET UNITYSDK_OFFSET(0x1ADBC1F0)
#define DGMADGGFLIJ_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1ADBBE90)
#define DGMADGGFLIJ_OFFCIEFGIAD_OFFSET UNITYSDK_OFFSET(0x1ADBC990)
#define DGMADGGFLIJ_OHLKNLJGOEK_OFFSET UNITYSDK_OFFSET(0x1ADBC3D0)
#define DGMADGGFLIJ_PANJEHFIDGO_OFFSET UNITYSDK_OFFSET(0x1ADBC5A0)
#define DGMADGGFLIJ_PKDCIBJMEJN_OFFSET UNITYSDK_OFFSET(0x1ADBC860)
#define DGMADGGFLIJ__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x1ADBBC20)
#define DGMADGGFLIJ__ONBIND_OFFSET UNITYSDK_OFFSET(0x1ADBBB20)
#define DGMADGGFLIJ__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1ADBBE40)
#define DGMADGGFLIJ__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1ADBBDA0)

inline static constexpr unsigned int DGMADGGFLIJ_TypeDefinitionIndex = 73251;

	class DGMADGGFLIJ : public ::FMPCODLIOLG
	{
	public:
		::GEDMHFPPBHN* HBKCICMELMM; // 0x60
		::KPCOIAAEGAK* FMDKIOCDOIE; // 0x68
		::System::Collections::Generic::List_1<::HEKAMNMEEOK*>* KBBMLIADILP; // 0x70
		::MCFBBMAMCON* GJHOPPOAEAL; // 0x78
		::RPG::GameCore::CharacterDataComponent* GOKPGBDMOLC; // 0x80
		::IKBAMHGDEJC* PICMKGJOBLH; // 0x88
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
