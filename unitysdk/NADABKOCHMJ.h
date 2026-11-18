#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NADABKOCHMJ_COMOGGMBIHC_OFFSET UNITYSDK_OFFSET(0x13B4C830)
#define NADABKOCHMJ_DBDFEBOJNDN_OFFSET UNITYSDK_OFFSET(0x13B4C1C0)
#define NADABKOCHMJ_DOBOJNMCBFH_OFFSET UNITYSDK_OFFSET(0x13B4C8C0)
#define NADABKOCHMJ_EABDIMBHAMA_OFFSET UNITYSDK_OFFSET(0x13B4C4E0)
#define NADABKOCHMJ_FPDELAHKADK_OFFSET UNITYSDK_OFFSET(0x13B4C9A0)
#define NADABKOCHMJ_IMOGBIJMHJL_OFFSET UNITYSDK_OFFSET(0x13B4C6A0)
#define NADABKOCHMJ_JPOLBPCHLHK_OFFSET UNITYSDK_OFFSET(0x13B4C650)
#define NADABKOCHMJ_NDHHDBBCBJK_OFFSET UNITYSDK_OFFSET(0x13B4C720)
#define NADABKOCHMJ_NKAOLNCPDDA_OFFSET UNITYSDK_OFFSET(0x13B4C7C0)

inline static constexpr unsigned int NADABKOCHMJ_TypeDefinitionIndex = 50437;

class NADABKOCHMJ : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::MoleMole::Config::BaseProperty>** StaticGet_AKEGHOKALNP()
	{
		return (::System::Collections::Generic::HashSet_1<::MoleMole::Config::BaseProperty>**)Il2CppClass::FromTypeDefinitionIndex(NADABKOCHMJ_TypeDefinitionIndex)->GetStaticField(0x51990);
	}

	static ::System::Void DBDFEBOJNDN()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NADABKOCHMJ_DBDFEBOJNDN_OFFSET))();
	}

	static ::System::Void JPOLBPCHLHK()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NADABKOCHMJ_JPOLBPCHLHK_OFFSET))();
	}

	static ::System::Boolean IMOGBIJMHJL(::MoleMole::Config::BaseProperty ECAJMFPANNE)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + NADABKOCHMJ_IMOGBIJMHJL_OFFSET))(ECAJMFPANNE);
	}

	static ::System::Double NDHHDBBCBJK(::System::Double EGEGIMGMJHN, ::System::Double JCJILJMPADN)
	{
		return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + NADABKOCHMJ_NDHHDBBCBJK_OFFSET))(EGEGIMGMJHN, JCJILJMPADN);
	}

	static ::System::Double NKAOLNCPDDA(::System::Double EGEGIMGMJHN, ::System::Double JCJILJMPADN)
	{
		return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + NADABKOCHMJ_NKAOLNCPDDA_OFFSET))(EGEGIMGMJHN, JCJILJMPADN);
	}

	static ::System::Boolean COMOGGMBIHC(::System::Int32& NOLOFENFLHA, ::System::Int32 DDLELCGCFAG, ::System::Int32 GOKEGHENOGP, ::System::Int32 FBCNNPLFAAG)
	{
		return ((::System::Boolean(*)(::System::Int32&, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NADABKOCHMJ_COMOGGMBIHC_OFFSET))(NOLOFENFLHA, DDLELCGCFAG, GOKEGHENOGP, FBCNNPLFAAG);
	}

	static ::System::Single DOBOJNMCBFH(::MoleMole::Config::BaseProperty OBNIAHNMHPF)
	{
		return ((::System::Single(*)(::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + NADABKOCHMJ_DOBOJNMCBFH_OFFSET))(OBNIAHNMHPF);
	}

	static ::System::Void EABDIMBHAMA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NADABKOCHMJ_EABDIMBHAMA_OFFSET))();
	}

	static ::System::Boolean FPDELAHKADK(::MoleMole::Config::BaseProperty ECAJMFPANNE)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + NADABKOCHMJ_FPDELAHKADK_OFFSET))(ECAJMFPANNE);
	}
};
