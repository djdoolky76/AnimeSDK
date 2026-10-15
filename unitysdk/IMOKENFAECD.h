#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FIMDJOBJCNE.h"
#include "unitysdk/GABKELEBMFM.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class JCBMNCANHAP;
namespace RPG::Client { class LiftAnchorData; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define IMOKENFAECD_ADJLNBJDKLJ_OFFSET UNITYSDK_OFFSET(0x164E2860)
#define IMOKENFAECD_AKKJMNPCLFB_OFFSET UNITYSDK_OFFSET(0x164E3660)
#define IMOKENFAECD_BKOMPEOEECI_OFFSET UNITYSDK_OFFSET(0x164E3420)
#define IMOKENFAECD_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x164E1C90)
#define IMOKENFAECD_CTOR_OFFSET UNITYSDK_OFFSET(0x164E3A80)
#define IMOKENFAECD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164E1B50)
#define IMOKENFAECD_DLFDHOJLEBG_OFFSET UNITYSDK_OFFSET(0x164E22A0)
#define IMOKENFAECD_DPHABOHGKFL_OFFSET UNITYSDK_OFFSET(0x164E30C0)
#define IMOKENFAECD_FMJPKMMNDOP_OFFSET UNITYSDK_OFFSET(0x164E21E0)
#define IMOKENFAECD_GPHJGFDKGEP_OFFSET UNITYSDK_OFFSET(0x164E26D0)
#define IMOKENFAECD_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x164E1E60)
#define IMOKENFAECD_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x164E1C10)
#define IMOKENFAECD_LJBBOGFFKNG_OFFSET UNITYSDK_OFFSET(0x164E2EA0)
#define IMOKENFAECD_MILDAIHIGAI_OFFSET UNITYSDK_OFFSET(0x164E3A10)
#define IMOKENFAECD_MOCPCLHLAHK_OFFSET UNITYSDK_OFFSET(0x164E1D10)
#define IMOKENFAECD_NFEEAJNPCCE_OFFSET UNITYSDK_OFFSET(0x164E35F0)
#define IMOKENFAECD_NGIDAKDKANM_OFFSET UNITYSDK_OFFSET(0x164E3A00)
#define IMOKENFAECD_OBOCFAJELAI_OFFSET UNITYSDK_OFFSET(0x164E2FD0)
#define IMOKENFAECD_OCNOCKAFDDN_OFFSET UNITYSDK_OFFSET(0x164E3870)
#define IMOKENFAECD_OGHLPCEKACG_OFFSET UNITYSDK_OFFSET(0x164E2200)
#define IMOKENFAECD_OPPKPPIPFFO_OFFSET UNITYSDK_OFFSET(0x164E3A20)

inline static constexpr unsigned int IMOKENFAECD_TypeDefinitionIndex = 60301;

	class IMOKENFAECD : public ::FIMDJOBJCNE
	{
	public:
		::RPG::Client::LiftAnchorData* FJEBHDPFPLB; // 0x28
		::GABKELEBMFM JNAHILDFICL; // 0x30
		::System::Boolean FIFNJAFKHDO; // 0x80
		::System::Byte _padding0[0x3];
		::System::Single IKGHBHIJKOE; // 0x84
		// static const ::System::Object EPBIEHPPNLN; // 0x0
		// static const ::System::Object BLDHFJMCKMA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOKENFAECD_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOKENFAECD_DISPOSE_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOKENFAECD_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOKENFAECD_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void MOCPCLHLAHK(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + IMOKENFAECD_MOCPCLHLAHK_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IMOKENFAECD_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void DLFDHOJLEBG(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IMOKENFAECD_DLFDHOJLEBG_OFFSET))(this, a1);
		}

		::System::Void ADJLNBJDKLJ(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::String* a3, ::System::Single a4, ::System::Action_1<::System::Boolean>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::String*, ::System::Single, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + IMOKENFAECD_ADJLNBJDKLJ_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void DPHABOHGKFL(::RPG::GameCore::GameEntity* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action*))((::PBYTE)hIl2Cpp + IMOKENFAECD_DPHABOHGKFL_OFFSET))(this, a1, a2);
		}

		::System::Void BKOMPEOEECI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IMOKENFAECD_BKOMPEOEECI_OFFSET))(this, a1);
		}

		::System::Void AKKJMNPCLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOKENFAECD_AKKJMNPCLFB_OFFSET))(this);
		}

		::System::Void OGHLPCEKACG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IMOKENFAECD_OGHLPCEKACG_OFFSET))(this, a1);
		}

		::System::Void NFEEAJNPCCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOKENFAECD_NFEEAJNPCCE_OFFSET))(this);
		}

		::System::Void GPHJGFDKGEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOKENFAECD_GPHJGFDKGEP_OFFSET))(this);
		}

		::System::Void OCNOCKAFDDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOKENFAECD_OCNOCKAFDDN_OFFSET))(this);
		}

		::System::Boolean NGIDAKDKANM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOKENFAECD_NGIDAKDKANM_OFFSET))(this);
		}

		::JCBMNCANHAP* MILDAIHIGAI()
		{
			return ((::JCBMNCANHAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOKENFAECD_MILDAIHIGAI_OFFSET))(this);
		}

		::UnityEngine::Vector3 LJBBOGFFKNG()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOKENFAECD_LJBBOGFFKNG_OFFSET))(this);
		}

		::UnityEngine::Quaternion OBOCFAJELAI()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOKENFAECD_OBOCFAJELAI_OFFSET))(this);
		}

		::System::Boolean OPPKPPIPFFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOKENFAECD_OPPKPPIPFFO_OFFSET))(this);
		}

		::System::Boolean FMJPKMMNDOP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOKENFAECD_FMJPKMMNDOP_OFFSET))(this);
		}

	};
