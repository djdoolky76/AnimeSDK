#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGameFlowContext.h"
class BJIAFAFAFNE;
class DACLGPPLFMO;
class EEFNMFGDGMA;
class MIBPJLAGBLD;
namespace RPG::Client { class BaseGameFlow; }
namespace RPG::Client::CakeRace { class CakeRaceLoanPrepareData; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIBPJLAGBLD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1A389C10)
#define MIBPJLAGBLD_CTOR_OFFSET UNITYSDK_OFFSET(0x1A389CC0)
#define MIBPJLAGBLD_DDGMIJMDDEB_OFFSET UNITYSDK_OFFSET(0x1A38A470)
#define MIBPJLAGBLD_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x1A389CD0)
#define MIBPJLAGBLD_ENBHHDLMIFI_OFFSET UNITYSDK_OFFSET(0x1A38A8B0)
#define MIBPJLAGBLD_EOJNNBGNLBI_OFFSET UNITYSDK_OFFSET(0x1A389D10)
#define MIBPJLAGBLD_GNLDCCIMFIH_OFFSET UNITYSDK_OFFSET(0x1A389B70)
#define MIBPJLAGBLD_JAHNBFBMNME_OFFSET UNITYSDK_OFFSET(0x1A389FD0)
#define MIBPJLAGBLD_PGJFMAFIDPK_OFFSET UNITYSDK_OFFSET(0x1A38A590)
#define MIBPJLAGBLD_PIHJDKODOLB_OFFSET UNITYSDK_OFFSET(0x1A389AD0)

inline static constexpr unsigned int MIBPJLAGBLD_TypeDefinitionIndex = 78790;

	class MIBPJLAGBLD : public ::RPG::Client::BaseGameFlowContext
	{
	public:
		::System::Void _ctor(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + MIBPJLAGBLD_CTOR_OFFSET))(this, a1);
		}

		::BJIAFAFAFNE* PIHJDKODOLB()
		{
			return ((::BJIAFAFAFNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBPJLAGBLD_PIHJDKODOLB_OFFSET))(this);
		}

		::DACLGPPLFMO* GNLDCCIMFIH()
		{
			return ((::DACLGPPLFMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBPJLAGBLD_GNLDCCIMFIH_OFFSET))(this);
		}

		static ::MIBPJLAGBLD* BPLPBPMEODA(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::MIBPJLAGBLD*(*)(::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + MIBPJLAGBLD_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBPJLAGBLD_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void EOJNNBGNLBI(::RPG::Client::CakeRace::CakeRaceLoanPrepareData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceLoanPrepareData*))((::PBYTE)hIl2Cpp + MIBPJLAGBLD_EOJNNBGNLBI_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* JAHNBFBMNME(::RPG::Client::CakeRace::CakeRaceLoanPrepareData* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceLoanPrepareData*))((::PBYTE)hIl2Cpp + MIBPJLAGBLD_JAHNBFBMNME_OFFSET))(this, a1);
		}

		::System::Void DDGMIJMDDEB(::EEFNMFGDGMA* a1, ::RPG::Client::CakeRace::CakeRaceLoanPrepareData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EEFNMFGDGMA*, ::RPG::Client::CakeRace::CakeRaceLoanPrepareData*))((::PBYTE)hIl2Cpp + MIBPJLAGBLD_DDGMIJMDDEB_OFFSET))(this, a1, a2);
		}

		::System::Void PGJFMAFIDPK(::EEFNMFGDGMA* a1, ::RPG::Client::CakeRace::CakeRaceLoanPrepareData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EEFNMFGDGMA*, ::RPG::Client::CakeRace::CakeRaceLoanPrepareData*))((::PBYTE)hIl2Cpp + MIBPJLAGBLD_PGJFMAFIDPK_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* ENBHHDLMIFI(::RPG::Client::CakeRace::CakeRaceLoanPrepareData* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceLoanPrepareData*))((::PBYTE)hIl2Cpp + MIBPJLAGBLD_ENBHHDLMIFI_OFFSET))(this, a1);
		}

	};
