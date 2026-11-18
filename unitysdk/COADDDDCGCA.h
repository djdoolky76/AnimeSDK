#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HFNMHMDCDOG.h"

class NLNIIPDCABP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define COADDDDCGCA_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x1A1C23A0)
#define COADDDDCGCA_FOCEINODJLH_1_OFFSET UNITYSDK_OFFSET(0x1A1C2460)
#define COADDDDCGCA_FOCEINODJLH_OFFSET UNITYSDK_OFFSET(0x1A1C1F90)
#define COADDDDCGCA_HENCGGMBDPO_OFFSET UNITYSDK_OFFSET(0x1A1C2220)
#define COADDDDCGCA_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x1A1C2390)
#define COADDDDCGCA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1C1F80)

inline static constexpr unsigned int COADDDDCGCA_TypeDefinitionIndex = 49816;

class COADDDDCGCA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* KIOBMLLFIHA; // 0x10
	::System::Action* CBDBDDFEPEK; // 0x18
	::System::Int32 IIJHIGNEDDJ; // 0x20
	::System::Int32 PGDCPDMJEPH; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COADDDDCGCA__CTOR_OFFSET))(this);
	}

	::System::Void FOCEINODJLH(::System::Int32 EIHFNEHPNEH, ::System::Int32 ADFNJNOELMG, ::System::Collections::Generic::List_1<::HFNMHMDCDOG>* IJDCDOBJJGI, ::NLNIIPDCABP* ICAAMDMMDDJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::HFNMHMDCDOG>*, ::NLNIIPDCABP*))((::PBYTE)hIl2Cpp + COADDDDCGCA_FOCEINODJLH_OFFSET))(this, EIHFNEHPNEH, ADFNJNOELMG, IJDCDOBJJGI, ICAAMDMMDDJ);
	}

	::System::Void HENCGGMBDPO(::NLNIIPDCABP* ICAAMDMMDDJ)
	{
		return ((::System::Void(*)(::PVOID, ::NLNIIPDCABP*))((::PBYTE)hIl2Cpp + COADDDDCGCA_HENCGGMBDPO_OFFSET))(this, ICAAMDMMDDJ);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COADDDDCGCA_JDAPDDEOCEA_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COADDDDCGCA_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void FOCEINODJLH_1(::System::Int32 EIHFNEHPNEH, ::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + COADDDDCGCA_FOCEINODJLH_1_OFFSET))(this, EIHFNEHPNEH, EJGDHCIBCJH);
	}
};
