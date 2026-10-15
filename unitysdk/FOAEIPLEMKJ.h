#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class EAODNLIPMEO;
class FBAMAFLOBGA;
class HFGMOFBDAON;
class HNGODOCOCCF;
class LILFFGAGIHG_IFOHMFLJIED;
class LPIHJBELIBN;
class MNHJPIONJHO;
class NHCHDKJLNBJ;
class OMOEFAHFJFL;
class PBICIFBPKHF;
class PENGPJKHIJF;
class PHKPDMEAMBP;
class POCJJHEDFOD;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class ChallengeMazeConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define FOAEIPLEMKJ_ADD_ONPROGRESSCLEAR_OFFSET UNITYSDK_OFFSET(0x158DE5B0)
#define FOAEIPLEMKJ_CEKLNALFNDB_OFFSET UNITYSDK_OFFSET(0x158DDBA0)
#define FOAEIPLEMKJ_CHCOGKDIBDK_OFFSET UNITYSDK_OFFSET(0x158DE7A0)
#define FOAEIPLEMKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x158DD2F0)
#define FOAEIPLEMKJ_DBOOOLCKOLD_OFFSET UNITYSDK_OFFSET(0x158DE6F0)
#define FOAEIPLEMKJ_DHBFCCOAPGJ_OFFSET UNITYSDK_OFFSET(0x158DD750)
#define FOAEIPLEMKJ_DKBLOPPJAOD_OFFSET UNITYSDK_OFFSET(0x158DD9D0)
#define FOAEIPLEMKJ_GKPLIIIFHAL_OFFSET UNITYSDK_OFFSET(0x158DE510)
#define FOAEIPLEMKJ_GONNPHDKLAK_OFFSET UNITYSDK_OFFSET(0x158DD890)
#define FOAEIPLEMKJ_JMOAELLJCAI_OFFSET UNITYSDK_OFFSET(0x158DE3D0)
#define FOAEIPLEMKJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x158DD300)
#define FOAEIPLEMKJ_LIDOMLFPNOI_OFFSET UNITYSDK_OFFSET(0x158DD380)
#define FOAEIPLEMKJ_MBOBEIJPGGK_OFFSET UNITYSDK_OFFSET(0x158DE090)
#define FOAEIPLEMKJ_MIILDBOPOCL_OFFSET UNITYSDK_OFFSET(0x158DD410)
#define FOAEIPLEMKJ_NFCOJMFBIGI_OFFSET UNITYSDK_OFFSET(0x158DDF50)
#define FOAEIPLEMKJ_OEPKONFNJKK_OFFSET UNITYSDK_OFFSET(0x158DE560)
#define FOAEIPLEMKJ_OPEDEIHOOFD_OFFSET UNITYSDK_OFFSET(0x158DE740)
#define FOAEIPLEMKJ_PBPMPLNCFFO_OFFSET UNITYSDK_OFFSET(0x158DDB10)
#define FOAEIPLEMKJ_REMOVE_ONPROGRESSCLEAR_OFFSET UNITYSDK_OFFSET(0x158DE650)

inline static constexpr unsigned int FOAEIPLEMKJ_TypeDefinitionIndex = 81496;

	class FOAEIPLEMKJ : public ::System::Object
	{
	public:
		::LILFFGAGIHG_IFOHMFLJIED* BHADCLDHFHB; // 0x10
		::OMOEFAHFJFL* MJHHLOPFDNK; // 0x18
		::System::Void _ctor(::OMOEFAHFJFL* a1, ::LILFFGAGIHG_IFOHMFLJIED* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OMOEFAHFJFL*, ::LILFFGAGIHG_IFOHMFLJIED*))((::PBYTE)hIl2Cpp + FOAEIPLEMKJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KPJGDHLENIP(::NHCHDKJLNBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHCHDKJLNBJ*))((::PBYTE)hIl2Cpp + FOAEIPLEMKJ_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::ValueTuple>* LIDOMLFPNOI()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAEIPLEMKJ_LIDOMLFPNOI_OFFSET))(this);
		}

		::EAODNLIPMEO* MIILDBOPOCL(::HNGODOCOCCF* a1)
		{
			return ((::EAODNLIPMEO*(*)(::PVOID, ::HNGODOCOCCF*))((::PBYTE)hIl2Cpp + FOAEIPLEMKJ_MIILDBOPOCL_OFFSET))(this, a1);
		}

		::EAODNLIPMEO* CEKLNALFNDB(::PENGPJKHIJF* a1)
		{
			return ((::EAODNLIPMEO*(*)(::PVOID, ::PENGPJKHIJF*))((::PBYTE)hIl2Cpp + FOAEIPLEMKJ_CEKLNALFNDB_OFFSET))(this, a1);
		}

		::EAODNLIPMEO* MBOBEIJPGGK(::PBICIFBPKHF* a1)
		{
			return ((::EAODNLIPMEO*(*)(::PVOID, ::PBICIFBPKHF*))((::PBYTE)hIl2Cpp + FOAEIPLEMKJ_MBOBEIJPGGK_OFFSET))(this, a1);
		}

		::System::String* PBPMPLNCFFO(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOAEIPLEMKJ_PBPMPLNCFFO_OFFSET))(this, a1);
		}

		::POCJJHEDFOD* DHBFCCOAPGJ(::RPG::GameCore::ChallengeMazeConfigRow* a1)
		{
			return ((::POCJJHEDFOD*(*)(::PVOID, ::RPG::GameCore::ChallengeMazeConfigRow*))((::PBYTE)hIl2Cpp + FOAEIPLEMKJ_DHBFCCOAPGJ_OFFSET))(this, a1);
		}

		::POCJJHEDFOD* GONNPHDKLAK(::RPG::GameCore::ChallengeMazeConfigRow* a1)
		{
			return ((::POCJJHEDFOD*(*)(::PVOID, ::RPG::GameCore::ChallengeMazeConfigRow*))((::PBYTE)hIl2Cpp + FOAEIPLEMKJ_GONNPHDKLAK_OFFSET))(this, a1);
		}

		::POCJJHEDFOD* DKBLOPPJAOD(::HNGODOCOCCF* a1)
		{
			return ((::POCJJHEDFOD*(*)(::PVOID, ::HNGODOCOCCF*))((::PBYTE)hIl2Cpp + FOAEIPLEMKJ_DKBLOPPJAOD_OFFSET))(this, a1);
		}

		::POCJJHEDFOD* NFCOJMFBIGI(::PENGPJKHIJF* a1)
		{
			return ((::POCJJHEDFOD*(*)(::PVOID, ::PENGPJKHIJF*))((::PBYTE)hIl2Cpp + FOAEIPLEMKJ_NFCOJMFBIGI_OFFSET))(this, a1);
		}

		::POCJJHEDFOD* JMOAELLJCAI(::PBICIFBPKHF* a1)
		{
			return ((::POCJJHEDFOD*(*)(::PVOID, ::PBICIFBPKHF*))((::PBYTE)hIl2Cpp + FOAEIPLEMKJ_JMOAELLJCAI_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* GKPLIIIFHAL()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAEIPLEMKJ_GKPLIIIFHAL_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* OEPKONFNJKK()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAEIPLEMKJ_OEPKONFNJKK_OFFSET))(this);
		}

		::System::Void add_OnProgressClear(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FOAEIPLEMKJ_ADD_ONPROGRESSCLEAR_OFFSET))(this, a1);
		}

		::System::Void remove_OnProgressClear(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FOAEIPLEMKJ_REMOVE_ONPROGRESSCLEAR_OFFSET))(this, a1);
		}

		::System::Void DBOOOLCKOLD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOAEIPLEMKJ_DBOOOLCKOLD_OFFSET))(this, a1);
		}

		::MNHJPIONJHO* OPEDEIHOOFD(::System::UInt32 a1)
		{
			return ((::MNHJPIONJHO*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOAEIPLEMKJ_OPEDEIHOOFD_OFFSET))(this, a1);
		}

		::PHKPDMEAMBP* CHCOGKDIBDK()
		{
			return ((::PHKPDMEAMBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAEIPLEMKJ_CHCOGKDIBDK_OFFSET))(this);
		}

	};
