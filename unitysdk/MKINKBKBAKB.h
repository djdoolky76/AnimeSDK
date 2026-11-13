#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNGPLDGOEAI.h"
class GNGPLDGOEAI;
namespace RPG::Client { class MonoExUICamera; }
namespace RPG::Client { class MonoExUICamera_CameraOutInfo; }
namespace System { class Object; }

#define MKINKBKBAKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1B906FB0)
#define MKINKBKBAKB_DDGDOBDOMKD_OFFSET UNITYSDK_OFFSET(0x1B907370)
#define MKINKBKBAKB_DHHAGHKLIJI_OFFSET UNITYSDK_OFFSET(0x1B907060)
#define MKINKBKBAKB_FHNEEELAEGK_OFFSET UNITYSDK_OFFSET(0x1B907300)
#define MKINKBKBAKB_KEKMKCBCMGG_OFFSET UNITYSDK_OFFSET(0x1B907410)
#define MKINKBKBAKB_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x1B907000)
#define MKINKBKBAKB_OCMKMOHFIID_OFFSET UNITYSDK_OFFSET(0x1B907290)
#define MKINKBKBAKB_PEDFLCNLIOC_OFFSET UNITYSDK_OFFSET(0x1B907250)
#define MKINKBKBAKB_POAACIDJOKM_OFFSET UNITYSDK_OFFSET(0x1B9071F0)

inline static constexpr unsigned int MKINKBKBAKB_TypeDefinitionIndex = 75072;

	class MKINKBKBAKB : public ::GNGPLDGOEAI
	{
	public:
		::RPG::Client::MonoExUICamera_CameraOutInfo* IDKOLBAHOOL; // 0x18
		::System::Boolean OOIPOIDNGNN; // 0x20
		::System::Void _ctor(::RPG::Client::MonoExUICamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoExUICamera*))((::PBYTE)hIl2Cpp + MKINKBKBAKB_CTOR_OFFSET))(this, a1);
		}

		::System::Void KIGBILLGNOH(::GNGPLDGOEAI* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GNGPLDGOEAI*, ::System::Object*))((::PBYTE)hIl2Cpp + MKINKBKBAKB_KIGBILLGNOH_OFFSET))(this, a1, a2);
		}

		::System::Void DHHAGHKLIJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKINKBKBAKB_DHHAGHKLIJI_OFFSET))(this);
		}

		::System::Void POAACIDJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKINKBKBAKB_POAACIDJOKM_OFFSET))(this);
		}

		::System::Void PEDFLCNLIOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKINKBKBAKB_PEDFLCNLIOC_OFFSET))(this);
		}

		::System::Void OCMKMOHFIID(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MKINKBKBAKB_OCMKMOHFIID_OFFSET))(this, a1);
		}

		::System::Void FHNEEELAEGK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MKINKBKBAKB_FHNEEELAEGK_OFFSET))(this, a1);
		}

		::System::Void DDGDOBDOMKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKINKBKBAKB_DDGDOBDOMKD_OFFSET))(this);
		}

		::System::Boolean KEKMKCBCMGG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MKINKBKBAKB_KEKMKCBCMGG_OFFSET))(this);
		}

	};
