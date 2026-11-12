#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FICJADOJGMF.h"
class FICJADOJGMF_FHHABLLAPHM;
namespace RPG::Client { class WolfBroGunPlayPuzzleBoard; }
namespace RPG::Client { class WolfBroGunPlayRogue; }
namespace RPG::Client { class WolfBroGunPlayTarget; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ODLPBJENMLP_CTOR_OFFSET UNITYSDK_OFFSET(0xC6A1B10)
#define ODLPBJENMLP_DBJOFICEOOH_OFFSET UNITYSDK_OFFSET(0xC6A2920)
#define ODLPBJENMLP_DKHJDMCMMIM_OFFSET UNITYSDK_OFFSET(0xC6A1B90)
#define ODLPBJENMLP_FALMEDNDFEB_OFFSET UNITYSDK_OFFSET(0xC6A2660)
#define ODLPBJENMLP_GCCAABJLGIG_OFFSET UNITYSDK_OFFSET(0xC6A2740)
#define ODLPBJENMLP_GET_REPLACECOUNT_OFFSET UNITYSDK_OFFSET(0xC6A2940)
#define ODLPBJENMLP_JHBMHCNLAME_OFFSET UNITYSDK_OFFSET(0xC6A2880)
#define ODLPBJENMLP_JNMEEEOMIMK_OFFSET UNITYSDK_OFFSET(0xC6A1BF0)
#define ODLPBJENMLP_KGHDCJPGOKG_OFFSET UNITYSDK_OFFSET(0xC6A2960)
#define ODLPBJENMLP_MDBNDGGGHFF_OFFSET UNITYSDK_OFFSET(0xC6A25E0)
#define ODLPBJENMLP_PIJAFHECHHB_OFFSET UNITYSDK_OFFSET(0xC6A23E0)
#define ODLPBJENMLP_SET_REPLACECOUNT_OFFSET UNITYSDK_OFFSET(0xC6A2950)

inline static constexpr unsigned int ODLPBJENMLP_TypeDefinitionIndex = 70711;

	class ODLPBJENMLP : public ::FICJADOJGMF
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* DFDFBKCIPHK; // 0x80
		::RPG::Client::WolfBroGunPlayRogue* OPIJBGOENAM; // 0x88
		::System::Int32 _ReplaceCount_k__BackingField; // 0x90
		::System::Void _ctor(::RPG::Client::WolfBroGunPlayPuzzleBoard* a1, ::RPG::Client::WolfBroGunPlayRogue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::WolfBroGunPlayPuzzleBoard*, ::RPG::Client::WolfBroGunPlayRogue*))((::PBYTE)hIl2Cpp + ODLPBJENMLP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void DKHJDMCMMIM(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ODLPBJENMLP_DKHJDMCMMIM_OFFSET))(this, a1);
		}

		::System::Void JNMEEEOMIMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLPBJENMLP_JNMEEEOMIMK_OFFSET))(this);
		}

		::System::Void PIJAFHECHHB(::RPG::Client::WolfBroGunPlayTarget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::WolfBroGunPlayTarget*))((::PBYTE)hIl2Cpp + ODLPBJENMLP_PIJAFHECHHB_OFFSET))(this, a1);
		}

		::FICJADOJGMF_FHHABLLAPHM* MDBNDGGGHFF()
		{
			return ((::FICJADOJGMF_FHHABLLAPHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLPBJENMLP_MDBNDGGGHFF_OFFSET))(this);
		}

		::System::Void FALMEDNDFEB(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ODLPBJENMLP_FALMEDNDFEB_OFFSET))(this, a1, a2);
		}

		::System::Boolean GCCAABJLGIG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLPBJENMLP_GCCAABJLGIG_OFFSET))(this);
		}

		::System::Single JHBMHCNLAME()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLPBJENMLP_JHBMHCNLAME_OFFSET))(this);
		}

		::System::Boolean DBJOFICEOOH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLPBJENMLP_DBJOFICEOOH_OFFSET))(this);
		}

		::System::Int32 get_ReplaceCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLPBJENMLP_GET_REPLACECOUNT_OFFSET))(this);
		}

		::System::Void set_ReplaceCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ODLPBJENMLP_SET_REPLACECOUNT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* KGHDCJPGOKG()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLPBJENMLP_KGHDCJPGOKG_OFFSET))(this);
		}

	};
