#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
namespace RPG::Client { class AdventurePhase; }
namespace RPG::GameCore { class PropSoundConfig; }
namespace System { class Action; }
namespace System { class String; }

#define FFHOFPEAFMO_AAKDGCAPKKB_OFFSET UNITYSDK_OFFSET(0x15733290)
#define FFHOFPEAFMO_AIGLDEJHJOB_OFFSET UNITYSDK_OFFSET(0x15733690)
#define FFHOFPEAFMO_AOCMNCFEBEP_OFFSET UNITYSDK_OFFSET(0x15733770)
#define FFHOFPEAFMO_BEFOREDISPOSE_OFFSET UNITYSDK_OFFSET(0x15732A80)
#define FFHOFPEAFMO_BMDCFJLGAJM_OFFSET UNITYSDK_OFFSET(0x15733210)
#define FFHOFPEAFMO_CTOR_OFFSET UNITYSDK_OFFSET(0x15733A00)
#define FFHOFPEAFMO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15732CB0)
#define FFHOFPEAFMO_ECHGHPECCNG_OFFSET UNITYSDK_OFFSET(0x157338C0)
#define FFHOFPEAFMO_EGPHJJOOICA_OFFSET UNITYSDK_OFFSET(0x157334C0)
#define FFHOFPEAFMO_IODPLALIMFD_OFFSET UNITYSDK_OFFSET(0x15732D40)
#define FFHOFPEAFMO_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x15732D00)
#define FFHOFPEAFMO_NDPMAPIOPMA_OFFSET UNITYSDK_OFFSET(0x15732AD0)
#define FFHOFPEAFMO_OGPCDGJCILO_OFFSET UNITYSDK_OFFSET(0x15733570)
#define FFHOFPEAFMO_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x157329E0)
#define FFHOFPEAFMO_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x15732A40)

inline static constexpr unsigned int FFHOFPEAFMO_TypeDefinitionIndex = 57257;

	class FFHOFPEAFMO : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Action* HHOPLKLKLMO; // 0x18
		::RPG::GameCore::PropSoundConfig* CAOBOIDHIDN; // 0x20
		::RPG::Client::AdventurePhase* HKDOPJJJALA; // 0x28
		::System::Single PPMOGCCDHAA; // 0x30
		::System::Single PMNIOEMJIDP; // 0x34
		::System::Single HILOIBFHCKN; // 0x38
		::System::Single IDLEELLLCDL; // 0x3C
		::System::Boolean JLBLDDLFIHB; // 0x40
		::System::Byte _padding0[0x3];
		::System::Single GGBAJJJLDPO; // 0x44
		::System::Single GCBJGHPKPIP; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHOFPEAFMO_CTOR_OFFSET))(this);
		}

		::System::Void OnModelRootLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHOFPEAFMO_ONMODELROOTLOADED_OFFSET))(this);
		}

		::System::Void OnModelRootUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHOFPEAFMO_ONMODELROOTUNLOADED_OFFSET))(this);
		}

		::System::Void BeforeDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHOFPEAFMO_BEFOREDISPOSE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHOFPEAFMO_DISPOSE_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHOFPEAFMO_LMCEDCHJKFF_OFFSET))(this);
		}

		::System::Void IODPLALIMFD(::RPG::GameCore::PropSoundConfig* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropSoundConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + FFHOFPEAFMO_IODPLALIMFD_OFFSET))(this, a1, a2);
		}

		::System::Void AAKDGCAPKKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHOFPEAFMO_AAKDGCAPKKB_OFFSET))(this);
		}

		::System::Void NDPMAPIOPMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHOFPEAFMO_NDPMAPIOPMA_OFFSET))(this);
		}

		::System::Void AOCMNCFEBEP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FFHOFPEAFMO_AOCMNCFEBEP_OFFSET))(this, a1);
		}

		::System::Void OGPCDGJCILO(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FFHOFPEAFMO_OGPCDGJCILO_OFFSET))(this, a1);
		}

		::System::Void ECHGHPECCNG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FFHOFPEAFMO_ECHGHPECCNG_OFFSET))(this, a1);
		}

		::System::Void AIGLDEJHJOB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FFHOFPEAFMO_AIGLDEJHJOB_OFFSET))(this, a1);
		}

		::System::Boolean EGPHJJOOICA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHOFPEAFMO_EGPHJJOOICA_OFFSET))(this);
		}

		::System::Void BMDCFJLGAJM(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FFHOFPEAFMO_BMDCFJLGAJM_OFFSET))(this, a1);
		}

	};
