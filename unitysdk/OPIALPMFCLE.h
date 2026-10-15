#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBKAHIEOBEI;
namespace System { class Version; }

#define OPIALPMFCLE_BEBOKHOMPMI_OFFSET UNITYSDK_OFFSET(0xBFADA60)
#define OPIALPMFCLE_CCCMHJAPKOM_OFFSET UNITYSDK_OFFSET(0xBFAD960)
#define OPIALPMFCLE_CCPFIDGHPJB_OFFSET UNITYSDK_OFFSET(0xBFAD660)
#define OPIALPMFCLE_CCTOR_OFFSET UNITYSDK_OFFSET(0xBFADC70)
#define OPIALPMFCLE_CIKPNFHPAFN_OFFSET UNITYSDK_OFFSET(0xBFAD200)
#define OPIALPMFCLE_CTOR_OFFSET UNITYSDK_OFFSET(0xBFADC60)
#define OPIALPMFCLE_DKAJOBNLPNF_OFFSET UNITYSDK_OFFSET(0xBFAC240)
#define OPIALPMFCLE_EMJHNDCFHHO_OFFSET UNITYSDK_OFFSET(0xBFADB60)
#define OPIALPMFCLE_JOEDJEBKMHO_OFFSET UNITYSDK_OFFSET(0xBFAD860)
#define OPIALPMFCLE_KEFJKLKJLLF_OFFSET UNITYSDK_OFFSET(0xBFAD760)
#define OPIALPMFCLE_LFGOJFIKGON_OFFSET UNITYSDK_OFFSET(0xBFAD430)
#define OPIALPMFCLE_MGEOHCECPBG_OFFSET UNITYSDK_OFFSET(0xBFACA20)
#define OPIALPMFCLE_PAPEOMCOAAB_OFFSET UNITYSDK_OFFSET(0xBFABC00)

inline static constexpr unsigned int OPIALPMFCLE_TypeDefinitionIndex = 82251;

	class OPIALPMFCLE : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_LJGJAPMGLNB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "OPIALPMFCLE")->GetStaticField(0x14770);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIALPMFCLE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPIALPMFCLE_CCTOR_OFFSET))();
		}

		static ::EBKAHIEOBEI* PAPEOMCOAAB()
		{
			return ((::EBKAHIEOBEI*(*)())((::PBYTE)hIl2Cpp + OPIALPMFCLE_PAPEOMCOAAB_OFFSET))();
		}

		static ::EBKAHIEOBEI* DKAJOBNLPNF()
		{
			return ((::EBKAHIEOBEI*(*)())((::PBYTE)hIl2Cpp + OPIALPMFCLE_DKAJOBNLPNF_OFFSET))();
		}

		static ::EBKAHIEOBEI* MGEOHCECPBG()
		{
			return ((::EBKAHIEOBEI*(*)())((::PBYTE)hIl2Cpp + OPIALPMFCLE_MGEOHCECPBG_OFFSET))();
		}

		static ::System::Void CIKPNFHPAFN(::EBKAHIEOBEI* a1, ::System::Version* a2, ::System::Version* a3)
		{
			return ((::System::Void(*)(::EBKAHIEOBEI*, ::System::Version*, ::System::Version*))((::PBYTE)hIl2Cpp + OPIALPMFCLE_CIKPNFHPAFN_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LFGOJFIKGON(::EBKAHIEOBEI* a1, ::System::Version* a2, ::System::Version* a3)
		{
			return ((::System::Void(*)(::EBKAHIEOBEI*, ::System::Version*, ::System::Version*))((::PBYTE)hIl2Cpp + OPIALPMFCLE_LFGOJFIKGON_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CCPFIDGHPJB()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPIALPMFCLE_CCPFIDGHPJB_OFFSET))();
		}

		static ::System::Void KEFJKLKJLLF()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPIALPMFCLE_KEFJKLKJLLF_OFFSET))();
		}

		static ::System::Void JOEDJEBKMHO()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPIALPMFCLE_JOEDJEBKMHO_OFFSET))();
		}

		static ::System::Void CCCMHJAPKOM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPIALPMFCLE_CCCMHJAPKOM_OFFSET))();
		}

		static ::System::Void BEBOKHOMPMI()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPIALPMFCLE_BEBOKHOMPMI_OFFSET))();
		}

		static ::System::Void EMJHNDCFHHO()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPIALPMFCLE_EMJHNDCFHHO_OFFSET))();
		}

	};
