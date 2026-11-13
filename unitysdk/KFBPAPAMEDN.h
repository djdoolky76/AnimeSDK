#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJJKGFLKBPH.h"
#include "unitysdk/System/Object.h"
class JFKNHCMPADM;
namespace RPG::Client { class QuestData; }
namespace System { class Action; }
namespace System { class Object; }

#define KFBPAPAMEDN_ADD_PROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x1B5ED9A0)
#define KFBPAPAMEDN_AHECGEMLKLA_OFFSET UNITYSDK_OFFSET(0x176C8E60)
#define KFBPAPAMEDN_CTOR_OFFSET UNITYSDK_OFFSET(0x176C91C0)
#define KFBPAPAMEDN_FHIBBCCFNKI_OFFSET UNITYSDK_OFFSET(0x1B5EDA60)
#define KFBPAPAMEDN_HGDFGHFLGKM_OFFSET UNITYSDK_OFFSET(0x176C8D40)
#define KFBPAPAMEDN_LKEJIOLFFCC_OFFSET UNITYSDK_OFFSET(0x176C8FE0)
#define KFBPAPAMEDN_LLJGELNDAAE_OFFSET UNITYSDK_OFFSET(0x176C9060)
#define KFBPAPAMEDN_MHOGDEIPMJH_OFFSET UNITYSDK_OFFSET(0x176C8B60)
#define KFBPAPAMEDN_OFBKIOEEMKE_OFFSET UNITYSDK_OFFSET(0x176C90F0)
#define KFBPAPAMEDN_REMOVE_PROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x1B5EDA00)
#define KFBPAPAMEDN_START_OFFSET UNITYSDK_OFFSET(0x1B5EDAD0)
#define KFBPAPAMEDN_STOP_OFFSET UNITYSDK_OFFSET(0x1B5EDB70)

inline static constexpr unsigned int KFBPAPAMEDN_TypeDefinitionIndex = 84860;

	class KFBPAPAMEDN : public ::System::Object
	{
	public:
		::System::Action* ProgressChanged; // 0x10
		::GJJKGFLKBPH NKJKFPNJOGJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBPAPAMEDN_CTOR_OFFSET))(this);
		}

		::System::Void add_ProgressChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KFBPAPAMEDN_ADD_PROGRESSCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_ProgressChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KFBPAPAMEDN_REMOVE_PROGRESSCHANGED_OFFSET))(this, a1);
		}

		::System::Boolean FHIBBCCFNKI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBPAPAMEDN_FHIBBCCFNKI_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBPAPAMEDN_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBPAPAMEDN_STOP_OFFSET))(this);
		}

		::JFKNHCMPADM* MHOGDEIPMJH()
		{
			return ((::JFKNHCMPADM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBPAPAMEDN_MHOGDEIPMJH_OFFSET))(this);
		}

		::System::Boolean HGDFGHFLGKM(::GJJKGFLKBPH a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GJJKGFLKBPH))((::PBYTE)hIl2Cpp + KFBPAPAMEDN_HGDFGHFLGKM_OFFSET))(this, a1);
		}

		::System::Boolean LKEJIOLFFCC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBPAPAMEDN_LKEJIOLFFCC_OFFSET))(this);
		}

		::System::Void LLJGELNDAAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBPAPAMEDN_LLJGELNDAAE_OFFSET))(this);
		}

		::System::Void OFBKIOEEMKE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFBPAPAMEDN_OFBKIOEEMKE_OFFSET))(this, a1);
		}

		static ::System::Boolean AHECGEMLKLA(::RPG::Client::QuestData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + KFBPAPAMEDN_AHECGEMLKLA_OFFSET))(a1);
		}

	};
