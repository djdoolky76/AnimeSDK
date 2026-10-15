#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHDNOCLECNC;
namespace RPG::GameCore { class DynamicValue; }
namespace System { class FormatException; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentBag_1; }
namespace System::Text { class StringBuilder; }

#define NHDNOCLECNC_ADBPHGHKMIP_OFFSET UNITYSDK_OFFSET(0x1D1DB460)
#define NHDNOCLECNC_BIKABOFADBP_OFFSET UNITYSDK_OFFSET(0x1D1DB250)
#define NHDNOCLECNC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1DD5A0)
#define NHDNOCLECNC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D1DB1D0)
#define NHDNOCLECNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1DB0E0)
#define NHDNOCLECNC_DHFPNFOEEKN_OFFSET UNITYSDK_OFFSET(0x1D1DB710)
#define NHDNOCLECNC_FDAFLPCLCEJ_OFFSET UNITYSDK_OFFSET(0x1D1DBA90)
#define NHDNOCLECNC_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x1D1DB800)
#define NHDNOCLECNC_HILBNFPEHPP_OFFSET UNITYSDK_OFFSET(0x1D1DC460)
#define NHDNOCLECNC_HLOPIDJMOHL_OFFSET UNITYSDK_OFFSET(0x1D1DD280)
#define NHDNOCLECNC_HNFJAEEAIJN_OFFSET UNITYSDK_OFFSET(0x1D1DD3D0)
#define NHDNOCLECNC_JHCFOOJOLOK_OFFSET UNITYSDK_OFFSET(0x1D1DCA50)
#define NHDNOCLECNC_JHGCOGAEJGI_OFFSET UNITYSDK_OFFSET(0x1D1DBBC0)
#define NHDNOCLECNC_JKHFHEMFIOH_OFFSET UNITYSDK_OFFSET(0x1D1DD330)
#define NHDNOCLECNC_MHJLHMMEAAL_OFFSET UNITYSDK_OFFSET(0x1D1DD4A0)
#define NHDNOCLECNC_NAJDHDBILDC_OFFSET UNITYSDK_OFFSET(0x1D1DB4F0)
#define NHDNOCLECNC_NDLNIGMJHIK_OFFSET UNITYSDK_OFFSET(0x1D1DBAE0)
#define NHDNOCLECNC_NLMJABPEBMB_OFFSET UNITYSDK_OFFSET(0x1D1DBAA0)
#define NHDNOCLECNC_OHKKLGFGDCE_OFFSET UNITYSDK_OFFSET(0x1D1DBFC0)

inline static constexpr unsigned int NHDNOCLECNC_TypeDefinitionIndex = 10855;

	class NHDNOCLECNC : public ::System::Object
	{
	public:
		::System::Text::StringBuilder* NBGGLAANOJH; // 0x10
		::System::String* GEPFFDDHPAI; // 0x18
		::System::Int32 CPKEFMBLLNC; // 0x20
		static ::System::Collections::Concurrent::ConcurrentBag_1<::NHDNOCLECNC*>** StaticGet_BEHHICMOFIE()
		{
			return (::System::Collections::Concurrent::ConcurrentBag_1<::NHDNOCLECNC*>**)UnitySDK::FromName("", "NHDNOCLECNC")->GetStaticField(0x40390);
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
