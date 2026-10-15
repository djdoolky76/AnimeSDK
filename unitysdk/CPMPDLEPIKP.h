#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AGCPAMNLCGN;
class CPMPDLEPIKP;
class ENFDMFGIJDC;
class GECHEPGEIKF;
class HEAIEBHLCMJ;
class JBACCAGFHON;
class LGHPKEAODPH;
class MBIAPCBLHCN;
class PCBNCBNOAAE;
namespace Entitas { class IGroup; }
namespace RPG::Client { class CakeRaceCatDataItem; }
namespace RPG::Client::CakeRace { class CakeRaceCatRankGameData; }
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCatMonoView; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CPMPDLEPIKP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xDCDA1D0)
#define CPMPDLEPIKP_CFKNPHCOHBB_OFFSET UNITYSDK_OFFSET(0xDCDBAC0)
#define CPMPDLEPIKP_CHHMFCJNFBF_OFFSET UNITYSDK_OFFSET(0xDCDC7C0)
#define CPMPDLEPIKP_CTOR_OFFSET UNITYSDK_OFFSET(0xDCDA320)
#define CPMPDLEPIKP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDCDA400)
#define CPMPDLEPIKP_DKGEGCINAKP_OFFSET UNITYSDK_OFFSET(0xDCDAFB0)
#define CPMPDLEPIKP_EBNGHIECIKJ_OFFSET UNITYSDK_OFFSET(0xDCBD430)
#define CPMPDLEPIKP_EDKLAIDOHOB_OFFSET UNITYSDK_OFFSET(0xDCDC5C0)
#define CPMPDLEPIKP_EHDFDKCIHIA_OFFSET UNITYSDK_OFFSET(0xDCDB350)
#define CPMPDLEPIKP_FOLNIMANHIC_OFFSET UNITYSDK_OFFSET(0xDCDBEF0)
#define CPMPDLEPIKP_GDFHBFGAPIK_OFFSET UNITYSDK_OFFSET(0xDCDB3B0)
#define CPMPDLEPIKP_GHDIJCNKKOM_OFFSET UNITYSDK_OFFSET(0xDCDA150)
#define CPMPDLEPIKP_GMAFBMLAHLH_OFFSET UNITYSDK_OFFSET(0xDCDC100)
#define CPMPDLEPIKP_JJLNGJBKICI_OFFSET UNITYSDK_OFFSET(0xDCDA840)
#define CPMPDLEPIKP_LLKDEOMPKLG_OFFSET UNITYSDK_OFFSET(0xDCDBA50)
#define CPMPDLEPIKP_MCLOLGLBOML_OFFSET UNITYSDK_OFFSET(0xDCBD1E0)
#define CPMPDLEPIKP_MMJAIBJNFIB_OFFSET UNITYSDK_OFFSET(0xDCDC350)
#define CPMPDLEPIKP_MMKLAJKIHPB_OFFSET UNITYSDK_OFFSET(0xDCDA4C0)
#define CPMPDLEPIKP_NDJNPJOOEJG_OFFSET UNITYSDK_OFFSET(0xDCDBC20)
#define CPMPDLEPIKP_OCDAEECDMCF_OFFSET UNITYSDK_OFFSET(0xDCDA9E0)
#define CPMPDLEPIKP_OLIPOHKGJDA_OFFSET UNITYSDK_OFFSET(0xDCDB1D0)
#define CPMPDLEPIKP_OPKNAACFHPP_OFFSET UNITYSDK_OFFSET(0xDCDBDB0)

inline static constexpr unsigned int CPMPDLEPIKP_TypeDefinitionIndex = 78085;

	class CPMPDLEPIKP : public ::System::Object
	{
	public:
		::JBACCAGFHON* PDENFEFCAGN; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* MNDJFFBGNDO; // 0x18
		::HEAIEBHLCMJ* MGBABGFLKHN; // 0x20
		::System::Void _ctor(::JBACCAGFHON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + CPMPDLEPIKP_CTOR_OFFSET))(this, a1);
		}

		::LGHPKEAODPH* GHDIJCNKKOM()
		{
			return ((::LGHPKEAODPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMPDLEPIKP_GHDIJCNKKOM_OFFSET))(this);
		}

		static ::CPMPDLEPIKP* BPLPBPMEODA(::JBACCAGFHON* a1)
		{
			return ((::CPMPDLEPIKP*(*)(::JBACCAGFHON*))((::PBYTE)hIl2Cpp + CPMPDLEPIKP_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMPDLEPIKP_DISPOSE_OFFSET))(this);
		}

		::AGCPAMNLCGN* MMKLAJKIHPB(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::AGCPAMNLCGN*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CPMPDLEPIKP_MMKLAJKIHPB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OCDAEECDMCF(::GECHEPGEIKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GECHEPGEIKF*))((::PBYTE)hIl2Cpp + CPMPDLEPIKP_OCDAEECDMCF_OFFSET))(this, a1);
		}

		::System::Void EHDFDKCIHIA(::PCBNCBNOAAE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCBNCBNOAAE*))((::PBYTE)hIl2Cpp + CPMPDLEPIKP_EHDFDKCIHIA_OFFSET))(this, a1);
		}

		::System::Void LLKDEOMPKLG(::MBIAPCBLHCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBIAPCBLHCN*))((::PBYTE)hIl2Cpp + CPMPDLEPIKP_LLKDEOMPKLG_OFFSET))(this, a1);
		}

		::System::Void DKGEGCINAKP(::ENFDMFGIJDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENFDMFGIJDC*))((::PBYTE)hIl2Cpp + CPMPDLEPIKP_DKGEGCINAKP_OFFSET))(this, a1);
		}

		::System::Void CFKNPHCOHBB(::UnityEngine::GameObject* a1, ::RPG::Client::CakeRaceCatDataItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::CakeRaceCatDataItem*))((::PBYTE)hIl2Cpp + CPMPDLEPIKP_CFKNPHCOHBB_OFFSET))(this, a1, a2);
		}

		::System::Void NDJNPJOOEJG(::UnityEngine::GameObject* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + CPMPDLEPIKP_NDJNPJOOEJG_OFFSET))(this, a1, a2);
		}

		::System::Void GDFHBFGAPIK(::System::Collections::Generic::IEnumerable_1<::ENFDMFGIJDC*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::ENFDMFGIJDC*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CPMPDLEPIKP_GDFHBFGAPIK_OFFSET))(this, a1, a2);
		}

		::Entitas::IGroup* OLIPOHKGJDA()
		{
			return ((::Entitas::IGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMPDLEPIKP_OLIPOHKGJDA_OFFSET))(this);
		}

		::AGCPAMNLCGN* OPKNAACFHPP()
		{
			return ((::AGCPAMNLCGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMPDLEPIKP_OPKNAACFHPP_OFFSET))(this);
		}

		::AGCPAMNLCGN* MCLOLGLBOML(::System::UInt32 a1)
		{
			return ((::AGCPAMNLCGN*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPMPDLEPIKP_MCLOLGLBOML_OFFSET))(this, a1);
		}

		::System::Boolean FOLNIMANHIC(::System::UInt32 a1, ::AGCPAMNLCGN* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::AGCPAMNLCGN*))((::PBYTE)hIl2Cpp + CPMPDLEPIKP_FOLNIMANHIC_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* EBNGHIECIKJ(::System::UInt32 a1)
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPMPDLEPIKP_EBNGHIECIKJ_OFFSET))(this, a1);
		}

		::System::Void JJLNGJBKICI(::AGCPAMNLCGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGCPAMNLCGN*))((::PBYTE)hIl2Cpp + CPMPDLEPIKP_JJLNGJBKICI_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GMAFBMLAHLH()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMPDLEPIKP_GMAFBMLAHLH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* MMJAIBJNFIB()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMPDLEPIKP_MMJAIBJNFIB_OFFSET))(this);
		}

		::RPG::Client::CakeRace::CakeRaceCatRankGameData* EDKLAIDOHOB()
		{
			return ((::RPG::Client::CakeRace::CakeRaceCatRankGameData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMPDLEPIKP_EDKLAIDOHOB_OFFSET))(this);
		}

		::System::UInt32 CHHMFCJNFBF(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPMPDLEPIKP_CHHMFCJNFBF_OFFSET))(this, a1);
		}

	};
