#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDLCNGPGEFP;
class GBHADOLNLHE;
class HCFLAPPBPOP;
class ICKLANINJDB;
class JBACCAGFHON;
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceReplayData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define GBHADOLNLHE_BMKFDHBBOMN_OFFSET UNITYSDK_OFFSET(0x1594EB00)
#define GBHADOLNLHE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1594EC10)
#define GBHADOLNLHE_CCALFPOIOMO_OFFSET UNITYSDK_OFFSET(0x1594F610)
#define GBHADOLNLHE_CCMFGEEFNME_OFFSET UNITYSDK_OFFSET(0x1594EDB0)
#define GBHADOLNLHE_CKHGAECGJDC_OFFSET UNITYSDK_OFFSET(0x1594F930)
#define GBHADOLNLHE_CTOR_OFFSET UNITYSDK_OFFSET(0x1594EC90)
#define GBHADOLNLHE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1594ED70)
#define GBHADOLNLHE_EDLCGNBKEOG_OFFSET UNITYSDK_OFFSET(0x1594F380)
#define GBHADOLNLHE_GDOCHFMJCNG_OFFSET UNITYSDK_OFFSET(0x1594EF30)
#define GBHADOLNLHE_JBACGEKGGCI_OFFSET UNITYSDK_OFFSET(0x1594F0B0)
#define GBHADOLNLHE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1594ECA0)
#define GBHADOLNLHE_LNJFJBPLJPN_OFFSET UNITYSDK_OFFSET(0x1594F680)

	class GBHADOLNLHE : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::CakeRace::CakeRaceReplayData* GLBKFKJJPGO; // 0x10
		::JBACCAGFHON* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::JBACCAGFHON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + GBHADOLNLHE_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean BMKFDHBBOMN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHADOLNLHE_BMKFDHBBOMN_OFFSET))(this);
		}

		static ::GBHADOLNLHE* BPLPBPMEODA(::JBACCAGFHON* a1)
		{
			return ((::GBHADOLNLHE*(*)(::JBACCAGFHON*))((::PBYTE)hIl2Cpp + GBHADOLNLHE_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHADOLNLHE_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHADOLNLHE_DISPOSE_OFFSET))(this);
		}

		::System::Void CCMFGEEFNME(::HCFLAPPBPOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCFLAPPBPOP*))((::PBYTE)hIl2Cpp + GBHADOLNLHE_CCMFGEEFNME_OFFSET))(this, a1);
		}

		::System::Void GDOCHFMJCNG(::ICKLANINJDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICKLANINJDB*))((::PBYTE)hIl2Cpp + GBHADOLNLHE_GDOCHFMJCNG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Queue_1<::FDLCNGPGEFP*>* JBACGEKGGCI(::System::String* a1)
		{
			return ((::System::Collections::Generic::Queue_1<::FDLCNGPGEFP*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GBHADOLNLHE_JBACGEKGGCI_OFFSET))(this, a1);
		}

		static ::System::String* CCALFPOIOMO()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + GBHADOLNLHE_CCALFPOIOMO_OFFSET))();
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceReplayData* EDLCGNBKEOG(::System::String* a1)
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceReplayData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GBHADOLNLHE_EDLCGNBKEOG_OFFSET))(this, a1);
		}

		::System::Void LNJFJBPLJPN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GBHADOLNLHE_LNJFJBPLJPN_OFFSET))(this, a1);
		}

		::System::Void CKHGAECGJDC(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + GBHADOLNLHE_CKHGAECGJDC_OFFSET))(this, a1, a2, a3);
		}

	};
