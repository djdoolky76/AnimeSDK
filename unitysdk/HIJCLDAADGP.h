#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIMOKFGNKCB;
class JLJHFLEECLF;
namespace RPG::Client::ActivityAlley { class AlleyPackComponent; }
namespace RPG::Client::ActivityAlley { class AlleyPackGoodData; }
namespace RPG::GameCore { class AlleyPackGoodItemConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIJCLDAADGP_ABLHBJBJGKP_OFFSET UNITYSDK_OFFSET(0x15CDDDF0)
#define HIJCLDAADGP_BGHJGGIHAII_OFFSET UNITYSDK_OFFSET(0x15CDE230)
#define HIJCLDAADGP_CDIIDCEAPEB_OFFSET UNITYSDK_OFFSET(0x15CDDFC0)
#define HIJCLDAADGP_CTOR_OFFSET UNITYSDK_OFFSET(0x15CDD410)
#define HIJCLDAADGP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CDDB30)
#define HIJCLDAADGP_EKEPCGBLIHO_OFFSET UNITYSDK_OFFSET(0x15CDD940)
#define HIJCLDAADGP_FGLNAJAFDNJ_OFFSET UNITYSDK_OFFSET(0x15CDDE80)
#define HIJCLDAADGP_HDDDGPBDLAF_OFFSET UNITYSDK_OFFSET(0x15CDDC60)
#define HIJCLDAADGP_LOMGCMAJPGI_OFFSET UNITYSDK_OFFSET(0x15CDE4F0)
#define HIJCLDAADGP_NMFMDBEJAIE_OFFSET UNITYSDK_OFFSET(0x15CDE4A0)

inline static constexpr unsigned int HIJCLDAADGP_TypeDefinitionIndex = 74109;

	class HIJCLDAADGP : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::JLJHFLEECLF*>* OGDCJIEKKNL; // 0x10
		::System::Collections::Generic::List_1<::CIMOKFGNKCB*>* LCLOFPPGBHE; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ActivityAlley::AlleyPackGoodData*>* HLGMBGDFMAB; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ActivityAlley::AlleyPackGoodData*>* PHKALAKCLOK; // 0x28
		::System::Void _ctor(::RPG::Client::ActivityAlley::AlleyPackComponent* a1, ::RPG::Client::ActivityAlley::AlleyPackGoodData* a2, ::RPG::GameCore::AlleyPackGoodItemConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*, ::RPG::Client::ActivityAlley::AlleyPackGoodData*, ::RPG::GameCore::AlleyPackGoodItemConfig*))((::PBYTE)hIl2Cpp + HIJCLDAADGP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJCLDAADGP_DISPOSE_OFFSET))(this);
		}

		::System::UInt32 HDDDGPBDLAF(::RPG::Client::ActivityAlley::AlleyPackGoodData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackGoodData*))((::PBYTE)hIl2Cpp + HIJCLDAADGP_HDDDGPBDLAF_OFFSET))(this, a1);
		}

		::CIMOKFGNKCB* ABLHBJBJGKP(::System::Int32 a1)
		{
			return ((::CIMOKFGNKCB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HIJCLDAADGP_ABLHBJBJGKP_OFFSET))(this, a1);
		}

		::System::Int32 FGLNAJAFDNJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJCLDAADGP_FGLNAJAFDNJ_OFFSET))(this);
		}

		::System::Void EKEPCGBLIHO(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HIJCLDAADGP_EKEPCGBLIHO_OFFSET))(this, a1, a2);
		}

		::System::Void CDIIDCEAPEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJCLDAADGP_CDIIDCEAPEB_OFFSET))(this);
		}

		::System::Void BGHJGGIHAII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJCLDAADGP_BGHJGGIHAII_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityAlley::AlleyPackGoodData*>* NMFMDBEJAIE()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityAlley::AlleyPackGoodData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJCLDAADGP_NMFMDBEJAIE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityAlley::AlleyPackGoodData*>* LOMGCMAJPGI()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityAlley::AlleyPackGoodData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJCLDAADGP_LOMGCMAJPGI_OFFSET))(this);
		}

	};
