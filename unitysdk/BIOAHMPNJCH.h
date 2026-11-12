#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAPKINMFNIL;
class HEJLOAOKDGE;
class HMGELDJBNLH;
class KKOJJCIIKAH;
class MNBCPGLOMIE;
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define BIOAHMPNJCH_ABPKCIBACLG_OFFSET UNITYSDK_OFFSET(0xBE57D80)
#define BIOAHMPNJCH_AGCKIBJGHHI_OFFSET UNITYSDK_OFFSET(0xBE57890)
#define BIOAHMPNJCH_CTOR_OFFSET UNITYSDK_OFFSET(0xBE57650)
#define BIOAHMPNJCH_EAKBOFBNNDO_OFFSET UNITYSDK_OFFSET(0xBE57760)
#define BIOAHMPNJCH_HGHCGMFLGGH_OFFSET UNITYSDK_OFFSET(0xBE57C10)
#define BIOAHMPNJCH_HPINEOFEGBF_OFFSET UNITYSDK_OFFSET(0xBE58450)
#define BIOAHMPNJCH_IAPJKKJHOBN_OFFSET UNITYSDK_OFFSET(0xBE578E0)
#define BIOAHMPNJCH_KDOAJJDBKGH_OFFSET UNITYSDK_OFFSET(0xBE57EE0)
#define BIOAHMPNJCH_NNJPPNFPDKI_OFFSET UNITYSDK_OFFSET(0xBE57940)
#define BIOAHMPNJCH_OGPHOPILCFI_OFFSET UNITYSDK_OFFSET(0xBE58310)
#define BIOAHMPNJCH_ONIPNAILHIH_OFFSET UNITYSDK_OFFSET(0xBE57660)
#define BIOAHMPNJCH_PDAIJMDEAAF_OFFSET UNITYSDK_OFFSET(0xBE581B0)

inline static constexpr unsigned int BIOAHMPNJCH_TypeDefinitionIndex = 84946;

	class BIOAHMPNJCH : public ::System::Object
	{
	public:
		::HMGELDJBNLH* OEAKHJGPPEH; // 0x10
		::HEJLOAOKDGE* KAMLEMCONJK; // 0x18
		::KKOJJCIIKAH* MHBFNKIFLNN; // 0x20
		::System::UInt32 ODJFGIPIJBO; // 0x28
		::System::Boolean OFMFMCDIGCA; // 0x2C
		::System::Boolean ALOFAEJFLKA; // 0x2D
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIOAHMPNJCH_CTOR_OFFSET))(this);
		}

		::System::Void ONIPNAILHIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIOAHMPNJCH_ONIPNAILHIH_OFFSET))(this);
		}

		::System::Void AGCKIBJGHHI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BIOAHMPNJCH_AGCKIBJGHHI_OFFSET))(this, a1);
		}

		::System::Void IAPJKKJHOBN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BIOAHMPNJCH_IAPJKKJHOBN_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::UIController*>* EAKBOFBNNDO(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::UIController*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BIOAHMPNJCH_EAKBOFBNNDO_OFFSET))(this, a1);
		}

		::RPG::Client::UIController* NNJPPNFPDKI(::System::UInt32 a1)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BIOAHMPNJCH_NNJPPNFPDKI_OFFSET))(this, a1);
		}

		::RPG::Client::UIController* HGHCGMFLGGH(::System::UInt32 a1)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BIOAHMPNJCH_HGHCGMFLGGH_OFFSET))(this, a1);
		}

		::RPG::Client::UIController* ABPKCIBACLG(::System::UInt32 a1, ::MNBCPGLOMIE* a2)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::System::UInt32, ::MNBCPGLOMIE*))((::PBYTE)hIl2Cpp + BIOAHMPNJCH_ABPKCIBACLG_OFFSET))(this, a1, a2);
		}

		::RPG::Client::UIController* KDOAJJDBKGH(::MNBCPGLOMIE* a1)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::MNBCPGLOMIE*))((::PBYTE)hIl2Cpp + BIOAHMPNJCH_KDOAJJDBKGH_OFFSET))(this, a1);
		}

		::RPG::Client::UIController* PDAIJMDEAAF(::CAPKINMFNIL* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::CAPKINMFNIL*, ::System::Boolean))((::PBYTE)hIl2Cpp + BIOAHMPNJCH_PDAIJMDEAAF_OFFSET))(this, a1, a2);
		}

		::RPG::Client::UIController* OGPHOPILCFI()
		{
			return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIOAHMPNJCH_OGPHOPILCFI_OFFSET))(this);
		}

		::RPG::Client::UIController* HPINEOFEGBF()
		{
			return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIOAHMPNJCH_HPINEOFEGBF_OFFSET))(this);
		}

	};
