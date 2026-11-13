#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBKAHIEOBEI;
namespace System { class Version; }

#define OPIALPMFCLE_BEBOKHOMPMI_OFFSET UNITYSDK_OFFSET(0x18ABC990)
#define OPIALPMFCLE_CCCMHJAPKOM_OFFSET UNITYSDK_OFFSET(0x18ABC890)
#define OPIALPMFCLE_CCPFIDGHPJB_OFFSET UNITYSDK_OFFSET(0x18ABC590)
#define OPIALPMFCLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x18ABCBA0)
#define OPIALPMFCLE_CIKPNFHPAFN_OFFSET UNITYSDK_OFFSET(0x18ABC130)
#define OPIALPMFCLE_CTOR_OFFSET UNITYSDK_OFFSET(0x18ABCB90)
#define OPIALPMFCLE_DKAJOBNLPNF_OFFSET UNITYSDK_OFFSET(0x18ABB170)
#define OPIALPMFCLE_EMJHNDCFHHO_OFFSET UNITYSDK_OFFSET(0x18ABCA90)
#define OPIALPMFCLE_JOEDJEBKMHO_OFFSET UNITYSDK_OFFSET(0x18ABC790)
#define OPIALPMFCLE_KEFJKLKJLLF_OFFSET UNITYSDK_OFFSET(0x18ABC690)
#define OPIALPMFCLE_LFGOJFIKGON_OFFSET UNITYSDK_OFFSET(0x18ABC360)
#define OPIALPMFCLE_MGEOHCECPBG_OFFSET UNITYSDK_OFFSET(0x18ABB950)
#define OPIALPMFCLE_PAPEOMCOAAB_OFFSET UNITYSDK_OFFSET(0x18ABAB30)

inline static constexpr unsigned int OPIALPMFCLE_TypeDefinitionIndex = 85123;

	class OPIALPMFCLE : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_LJGJAPMGLNB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "OPIALPMFCLE")->GetStaticField(0x14F20);
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
