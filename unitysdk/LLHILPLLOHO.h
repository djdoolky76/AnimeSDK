#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LLHILPLLOHO;
namespace RPG::Client { class BattleLogModel; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LLHILPLLOHO_CPGGKPFCCAJ_OFFSET UNITYSDK_OFFSET(0xB766FF0)
#define LLHILPLLOHO_CTOR_OFFSET UNITYSDK_OFFSET(0xB766000)
#define LLHILPLLOHO_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0xB765F70)
#define LLHILPLLOHO_HECLMFOBHKI_OFFSET UNITYSDK_OFFSET(0xB766590)
#define LLHILPLLOHO_KAJLIAHMOGJ_OFFSET UNITYSDK_OFFSET(0xB766BC0)
#define LLHILPLLOHO_LGIDKMIKJFP_OFFSET UNITYSDK_OFFSET(0xB7660A0)
#define LLHILPLLOHO_MNOCBBBNAAG_OFFSET UNITYSDK_OFFSET(0xB7669C0)
#define LLHILPLLOHO_ONCHPKAKIEC_OFFSET UNITYSDK_OFFSET(0xB766010)
#define LLHILPLLOHO_OONGLJHMJOA_OFFSET UNITYSDK_OFFSET(0xB766920)

inline static constexpr unsigned int LLHILPLLOHO_TypeDefinitionIndex = 60959;

	class LLHILPLLOHO : public ::System::Object
	{
	public:
		static ::LLHILPLLOHO** StaticGet_EMLNOINPICJ()
		{
			return (::LLHILPLLOHO**)UnitySDK::FromName("", "LLHILPLLOHO")->GetStaticField(0x69F70);
		}

		// static const ::System::String* FMNFMDOCKBO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLHILPLLOHO_CTOR_OFFSET))(this);
		}

		static ::LLHILPLLOHO* GGBLHEHJBDO()
		{
			return ((::LLHILPLLOHO*(*)())((::PBYTE)hIl2Cpp + LLHILPLLOHO_GGBLHEHJBDO_OFFSET))();
		}

		static ::System::Boolean ONCHPKAKIEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LLHILPLLOHO_ONCHPKAKIEC_OFFSET))();
		}

		::System::Void LGIDKMIKJFP(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + LLHILPLLOHO_LGIDKMIKJFP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::BattleLogModel* HECLMFOBHKI()
		{
			return ((::RPG::Client::BattleLogModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLHILPLLOHO_HECLMFOBHKI_OFFSET))(this);
		}

		::System::Collections::IEnumerator* OONGLJHMJOA(::System::Collections::Generic::List_1<::RPG::Client::BattleLogModel*>* a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::BattleLogModel*>*))((::PBYTE)hIl2Cpp + LLHILPLLOHO_OONGLJHMJOA_OFFSET))(this, a1);
		}

		::System::String* MNOCBBBNAAG(::System::Collections::Generic::List_1<::RPG::Client::BattleLogModel*>* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::BattleLogModel*>*))((::PBYTE)hIl2Cpp + LLHILPLLOHO_MNOCBBBNAAG_OFFSET))(this, a1);
		}

		::System::Void KAJLIAHMOGJ(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LLHILPLLOHO_KAJLIAHMOGJ_OFFSET))(this, a1);
		}

		::System::Void CPGGKPFCCAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLHILPLLOHO_CPGGKPFCCAJ_OFFSET))(this);
		}

	};
