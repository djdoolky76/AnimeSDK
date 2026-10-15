#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FHFCJKKKNLP_ADNKIOJGPOG_OFFSET UNITYSDK_OFFSET(0x1576D7C0)
#define FHFCJKKKNLP_CTOR_OFFSET UNITYSDK_OFFSET(0x1576D1C0)
#define FHFCJKKKNLP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1576D2A0)
#define FHFCJKKKNLP_EGLJFLJFOLI_OFFSET UNITYSDK_OFFSET(0x1576D4B0)
#define FHFCJKKKNLP_HGFNJHBNIEF_OFFSET UNITYSDK_OFFSET(0x1576D120)
#define FHFCJKKKNLP_IEHPALNAGLG_OFFSET UNITYSDK_OFFSET(0x1576D660)
#define FHFCJKKKNLP_IICFOCHDDON_OFFSET UNITYSDK_OFFSET(0x1576D0E0)
#define FHFCJKKKNLP_IPPDBBAOIEM_OFFSET UNITYSDK_OFFSET(0x1576DE10)
#define FHFCJKKKNLP_KEDOHGDABHM_OFFSET UNITYSDK_OFFSET(0x1576DC80)
#define FHFCJKKKNLP_NHEONBFKIAL_OFFSET UNITYSDK_OFFSET(0x1576DA30)
#define FHFCJKKKNLP___SENDCOLLECTINCOMEREQ_B__11_0_OFFSET UNITYSDK_OFFSET(0x1576E020)
#define FHFCJKKKNLP___WAITFORGETDATA_B__12_0_OFFSET UNITYSDK_OFFSET(0x1576E0D0)

inline static constexpr unsigned int FHFCJKKKNLP_TypeDefinitionIndex = 75388;

	class FHFCJKKKNLP : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* OMDHLKPAGPI; // 0x10
		::RPG::Client::Promises::Promise* OCGNCLOOMEF; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* MIMJHMFJNFE; // 0x20
		::RPG::Client::UIController* JONJFNGDLKI; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFCJKKKNLP_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* IICFOCHDDON()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFCJKKKNLP_IICFOCHDDON_OFFSET))(this);
		}

		::System::Void HGFNJHBNIEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFCJKKKNLP_HGFNJHBNIEF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFCJKKKNLP_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* EGLJFLJFOLI()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFCJKKKNLP_EGLJFLJFOLI_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* IEHPALNAGLG()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFCJKKKNLP_IEHPALNAGLG_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* ADNKIOJGPOG()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFCJKKKNLP_ADNKIOJGPOG_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* NHEONBFKIAL()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFCJKKKNLP_NHEONBFKIAL_OFFSET))(this);
		}

		::System::Void KEDOHGDABHM(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + FHFCJKKKNLP_KEDOHGDABHM_OFFSET))(this, a1, a2);
		}

		::System::Void IPPDBBAOIEM(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + FHFCJKKKNLP_IPPDBBAOIEM_OFFSET))(this, a1, a2);
		}

		::System::Void __SendCollectIncomeReq_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFCJKKKNLP___SENDCOLLECTINCOMEREQ_B__11_0_OFFSET))(this);
		}

		::System::Void __WaitForGetData_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFCJKKKNLP___WAITFORGETDATA_B__12_0_OFFSET))(this);
		}

	};
