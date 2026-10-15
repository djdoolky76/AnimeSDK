#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNGPLDGOEAI.h"
class GNGPLDGOEAI;
namespace RPG::Client { class MonoExUICamera; }
namespace RPG::Client { class MonoExUICamera_CameraOutInfo; }
namespace System { class Object; }

#define MKINKBKBAKB_CTOR_OFFSET UNITYSDK_OFFSET(0xB9985A0)
#define MKINKBKBAKB_DDGDOBDOMKD_OFFSET UNITYSDK_OFFSET(0xB998960)
#define MKINKBKBAKB_DHHAGHKLIJI_OFFSET UNITYSDK_OFFSET(0xB998650)
#define MKINKBKBAKB_FHNEEELAEGK_OFFSET UNITYSDK_OFFSET(0xB9988F0)
#define MKINKBKBAKB_KEKMKCBCMGG_OFFSET UNITYSDK_OFFSET(0xB998A00)
#define MKINKBKBAKB_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xB9985F0)
#define MKINKBKBAKB_OCMKMOHFIID_OFFSET UNITYSDK_OFFSET(0xB998880)
#define MKINKBKBAKB_PEDFLCNLIOC_OFFSET UNITYSDK_OFFSET(0xB998840)
#define MKINKBKBAKB_POAACIDJOKM_OFFSET UNITYSDK_OFFSET(0xB9987E0)

inline static constexpr unsigned int MKINKBKBAKB_TypeDefinitionIndex = 72961;

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
