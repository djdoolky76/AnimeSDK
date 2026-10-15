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

#define BIOAHMPNJCH_ABPKCIBACLG_OFFSET UNITYSDK_OFFSET(0xB78FEF0)
#define BIOAHMPNJCH_AGCKIBJGHHI_OFFSET UNITYSDK_OFFSET(0xB78FA00)
#define BIOAHMPNJCH_CTOR_OFFSET UNITYSDK_OFFSET(0xB78F7C0)
#define BIOAHMPNJCH_EAKBOFBNNDO_OFFSET UNITYSDK_OFFSET(0xB78F8D0)
#define BIOAHMPNJCH_HGHCGMFLGGH_OFFSET UNITYSDK_OFFSET(0xB78FD80)
#define BIOAHMPNJCH_HPINEOFEGBF_OFFSET UNITYSDK_OFFSET(0xB7905C0)
#define BIOAHMPNJCH_IAPJKKJHOBN_OFFSET UNITYSDK_OFFSET(0xB78FA50)
#define BIOAHMPNJCH_KDOAJJDBKGH_OFFSET UNITYSDK_OFFSET(0xB790050)
#define BIOAHMPNJCH_NNJPPNFPDKI_OFFSET UNITYSDK_OFFSET(0xB78FAB0)
#define BIOAHMPNJCH_OGPHOPILCFI_OFFSET UNITYSDK_OFFSET(0xB790480)
#define BIOAHMPNJCH_ONIPNAILHIH_OFFSET UNITYSDK_OFFSET(0xB78F7D0)
#define BIOAHMPNJCH_PDAIJMDEAAF_OFFSET UNITYSDK_OFFSET(0xB790320)

inline static constexpr unsigned int BIOAHMPNJCH_TypeDefinitionIndex = 82072;

	class BIOAHMPNJCH : public ::System::Object
	{
	public:
		::HMGELDJBNLH* OEAKHJGPPEH; // 0x10
		::KKOJJCIIKAH* MHBFNKIFLNN; // 0x18
		::HEJLOAOKDGE* KAMLEMCONJK; // 0x20
		::System::Boolean OFMFMCDIGCA; // 0x28
		::System::Boolean ALOFAEJFLKA; // 0x29
		::System::Byte _padding0[0x2];
		::System::UInt32 ODJFGIPIJBO; // 0x2C
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
