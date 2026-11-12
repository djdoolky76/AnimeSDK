#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBKAHIEOBEI;
namespace System { class Version; }

#define OPIALPMFCLE_BEBOKHOMPMI_OFFSET UNITYSDK_OFFSET(0xC8AF030)
#define OPIALPMFCLE_CCCMHJAPKOM_OFFSET UNITYSDK_OFFSET(0xC8AEF30)
#define OPIALPMFCLE_CCPFIDGHPJB_OFFSET UNITYSDK_OFFSET(0xC8AEC30)
#define OPIALPMFCLE_CCTOR_OFFSET UNITYSDK_OFFSET(0xC8AF240)
#define OPIALPMFCLE_CIKPNFHPAFN_OFFSET UNITYSDK_OFFSET(0xC8AE7D0)
#define OPIALPMFCLE_CTOR_OFFSET UNITYSDK_OFFSET(0xC8AF230)
#define OPIALPMFCLE_DKAJOBNLPNF_OFFSET UNITYSDK_OFFSET(0xC8AD810)
#define OPIALPMFCLE_EMJHNDCFHHO_OFFSET UNITYSDK_OFFSET(0xC8AF130)
#define OPIALPMFCLE_JOEDJEBKMHO_OFFSET UNITYSDK_OFFSET(0xC8AEE30)
#define OPIALPMFCLE_KEFJKLKJLLF_OFFSET UNITYSDK_OFFSET(0xC8AED30)
#define OPIALPMFCLE_LFGOJFIKGON_OFFSET UNITYSDK_OFFSET(0xC8AEA00)
#define OPIALPMFCLE_MGEOHCECPBG_OFFSET UNITYSDK_OFFSET(0xC8ADFF0)
#define OPIALPMFCLE_PAPEOMCOAAB_OFFSET UNITYSDK_OFFSET(0xC8AD1D0)

inline static constexpr unsigned int OPIALPMFCLE_TypeDefinitionIndex = 85124;

	class OPIALPMFCLE : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_LJGJAPMGLNB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "OPIALPMFCLE")->GetStaticField(0x13CA0);
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
