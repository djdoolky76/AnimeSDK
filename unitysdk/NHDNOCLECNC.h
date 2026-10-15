#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHDNOCLECNC;
namespace RPG::GameCore { class DynamicValue; }
namespace System { class FormatException; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentBag_1; }
namespace System::Text { class StringBuilder; }

#define NHDNOCLECNC_ADBPHGHKMIP_OFFSET UNITYSDK_OFFSET(0x1D2090C0)
#define NHDNOCLECNC_BIKABOFADBP_OFFSET UNITYSDK_OFFSET(0x1D208EB0)
#define NHDNOCLECNC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D20B200)
#define NHDNOCLECNC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D208E30)
#define NHDNOCLECNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D208D40)
#define NHDNOCLECNC_DHFPNFOEEKN_OFFSET UNITYSDK_OFFSET(0x1D209370)
#define NHDNOCLECNC_FDAFLPCLCEJ_OFFSET UNITYSDK_OFFSET(0x1D2096F0)
#define NHDNOCLECNC_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x1D209460)
#define NHDNOCLECNC_HILBNFPEHPP_OFFSET UNITYSDK_OFFSET(0x1D20A0C0)
#define NHDNOCLECNC_HLOPIDJMOHL_OFFSET UNITYSDK_OFFSET(0x1D20AEE0)
#define NHDNOCLECNC_HNFJAEEAIJN_OFFSET UNITYSDK_OFFSET(0x1D20B030)
#define NHDNOCLECNC_JHCFOOJOLOK_OFFSET UNITYSDK_OFFSET(0x1D20A6B0)
#define NHDNOCLECNC_JHGCOGAEJGI_OFFSET UNITYSDK_OFFSET(0x1D209820)
#define NHDNOCLECNC_JKHFHEMFIOH_OFFSET UNITYSDK_OFFSET(0x1D20AF90)
#define NHDNOCLECNC_MHJLHMMEAAL_OFFSET UNITYSDK_OFFSET(0x1D20B100)
#define NHDNOCLECNC_NAJDHDBILDC_OFFSET UNITYSDK_OFFSET(0x1D209150)
#define NHDNOCLECNC_NDLNIGMJHIK_OFFSET UNITYSDK_OFFSET(0x1D209740)
#define NHDNOCLECNC_NLMJABPEBMB_OFFSET UNITYSDK_OFFSET(0x1D209700)
#define NHDNOCLECNC_OHKKLGFGDCE_OFFSET UNITYSDK_OFFSET(0x1D209C20)

	class NHDNOCLECNC : public ::System::Object
	{
	public:
		::System::String* GEPFFDDHPAI; // 0x10
		::System::Text::StringBuilder* NBGGLAANOJH; // 0x18
		::System::Int32 CPKEFMBLLNC; // 0x20
		static ::System::Collections::Concurrent::ConcurrentBag_1<::NHDNOCLECNC*>** StaticGet_BEHHICMOFIE()
		{
			return (::System::Collections::Concurrent::ConcurrentBag_1<::NHDNOCLECNC*>**)UnitySDK::FromName("", "NHDNOCLECNC")->GetStaticField(0x2E4E0);
		}

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NHDNOCLECNC_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDNOCLECNC_CTOR_1_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHDNOCLECNC_CCTOR_OFFSET))();
		}

		::RPG::GameCore::DynamicValue* BIKABOFADBP()
		{
			return ((::RPG::GameCore::DynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDNOCLECNC_BIKABOFADBP_OFFSET))(this);
		}

		static ::RPG::GameCore::DynamicValue* FPKLDCGAJGP(::System::String* a1)
		{
			return ((::RPG::GameCore::DynamicValue*(*)(::System::String*))((::PBYTE)hIl2Cpp + NHDNOCLECNC_FPKLDCGAJGP_OFFSET))(a1);
		}

		::RPG::GameCore::DynamicValue* NAJDHDBILDC()
		{
			return ((::RPG::GameCore::DynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDNOCLECNC_NAJDHDBILDC_OFFSET))(this);
		}

		::RPG::GameCore::DynamicValue* NLMJABPEBMB()
		{
			return ((::RPG::GameCore::DynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDNOCLECNC_NLMJABPEBMB_OFFSET))(this);
		}

		::RPG::GameCore::DynamicValue* NDLNIGMJHIK()
		{
			return ((::RPG::GameCore::DynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDNOCLECNC_NDLNIGMJHIK_OFFSET))(this);
		}

		::RPG::GameCore::DynamicValue* JHGCOGAEJGI()
		{
			return ((::RPG::GameCore::DynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDNOCLECNC_JHGCOGAEJGI_OFFSET))(this);
		}

		::System::Char MHJLHMMEAAL()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDNOCLECNC_MHJLHMMEAAL_OFFSET))(this);
		}

		::RPG::GameCore::DynamicValue* JHCFOOJOLOK()
		{
			return ((::RPG::GameCore::DynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDNOCLECNC_JHCFOOJOLOK_OFFSET))(this);
		}

		::RPG::GameCore::DynamicValue* OHKKLGFGDCE()
		{
			return ((::RPG::GameCore::DynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDNOCLECNC_OHKKLGFGDCE_OFFSET))(this);
		}

		::RPG::GameCore::DynamicValue* HILBNFPEHPP()
		{
			return ((::RPG::GameCore::DynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDNOCLECNC_HILBNFPEHPP_OFFSET))(this);
		}

		::System::Void ADBPHGHKMIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDNOCLECNC_ADBPHGHKMIP_OFFSET))(this);
		}

		::System::Char JKHFHEMFIOH()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDNOCLECNC_JKHFHEMFIOH_OFFSET))(this);
		}

		::System::Void HNFJAEEAIJN(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + NHDNOCLECNC_HNFJAEEAIJN_OFFSET))(this, a1);
		}

		::System::Void HLOPIDJMOHL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NHDNOCLECNC_HLOPIDJMOHL_OFFSET))(this, a1);
		}

		::System::FormatException* DHFPNFOEEKN(::System::String* a1)
		{
			return ((::System::FormatException*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NHDNOCLECNC_DHFPNFOEEKN_OFFSET))(this, a1);
		}

		::System::Void FDAFLPCLCEJ(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NHDNOCLECNC_FDAFLPCLCEJ_OFFSET))(this, a1);
		}

	};
