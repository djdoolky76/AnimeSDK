#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLFBLCIJPKD_CBBABPIPFNM.h"
#include "unitysdk/CLFBLCIJPKD_IJPJIAKAJIH.h"
#include "unitysdk/System/Object.h"

class CLFBLCIJPKD_PEPKKBJMJCD;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLFBLCIJPKD_NOOKBMGHMEC_CCHHKBAJGBA_OFFSET UNITYSDK_OFFSET(0x14972E50)
#define CLFBLCIJPKD_NOOKBMGHMEC_DMPELEOPDFO_OFFSET UNITYSDK_OFFSET(0x14972290)
#define CLFBLCIJPKD_NOOKBMGHMEC_EJJOOGJKLBD_OFFSET UNITYSDK_OFFSET(0x14972430)
#define CLFBLCIJPKD_NOOKBMGHMEC_GPOGHIFJKBI_OFFSET UNITYSDK_OFFSET(0x149725C0)
#define CLFBLCIJPKD_NOOKBMGHMEC_HCJPNGPMELO_OFFSET UNITYSDK_OFFSET(0x14972850)
#define CLFBLCIJPKD_NOOKBMGHMEC_IGODFCGPAPO_OFFSET UNITYSDK_OFFSET(0x14972920)

inline static constexpr unsigned int CLFBLCIJPKD_NOOKBMGHMEC_TypeDefinitionIndex = 88493;

class CLFBLCIJPKD_NOOKBMGHMEC : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Int32>* DMPELEOPDFO(::System::String* KOIBHLHLMFC)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLFBLCIJPKD_NOOKBMGHMEC_DMPELEOPDFO_OFFSET))(KOIBHLHLMFC);
	}

	static ::System::Collections::Generic::List_1<::System::String*>* EJJOOGJKLBD(::System::String* KOIBHLHLMFC)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLFBLCIJPKD_NOOKBMGHMEC_EJJOOGJKLBD_OFFSET))(KOIBHLHLMFC);
	}

	static ::System::Boolean GPOGHIFJKBI(::CLFBLCIJPKD_PEPKKBJMJCD* LDBJENJOKAC, ::MoleMole::Battle::Entity* FINEANOLAPH)
	{
		return ((::System::Boolean(*)(::CLFBLCIJPKD_PEPKKBJMJCD*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLFBLCIJPKD_NOOKBMGHMEC_GPOGHIFJKBI_OFFSET))(LDBJENJOKAC, FINEANOLAPH);
	}

	static ::System::Boolean IGODFCGPAPO(::System::Collections::Generic::List_1<::System::String*>* MOHHHNFGNNP, ::System::Collections::Generic::List_1<::System::String*>* EEFKMDOJPHM, ::CLFBLCIJPKD_IJPJIAKAJIH MFLFLNPCEKI)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::CLFBLCIJPKD_IJPJIAKAJIH))((::PBYTE)hIl2Cpp + CLFBLCIJPKD_NOOKBMGHMEC_IGODFCGPAPO_OFFSET))(MOHHHNFGNNP, EEFKMDOJPHM, MFLFLNPCEKI);
	}

	static ::System::Boolean HCJPNGPMELO(::System::Int32 DBMJDOJMHOP, ::CLFBLCIJPKD_CBBABPIPFNM DLHEFILIODF, ::CLFBLCIJPKD_PEPKKBJMJCD* KDAEHEIOJBB)
	{
		return ((::System::Boolean(*)(::System::Int32, ::CLFBLCIJPKD_CBBABPIPFNM, ::CLFBLCIJPKD_PEPKKBJMJCD*))((::PBYTE)hIl2Cpp + CLFBLCIJPKD_NOOKBMGHMEC_HCJPNGPMELO_OFFSET))(DBMJDOJMHOP, DLHEFILIODF, KDAEHEIOJBB);
	}

	static ::System::Collections::Generic::List_1<::System::Single>* CCHHKBAJGBA(::System::String* KOIBHLHLMFC)
	{
		return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLFBLCIJPKD_NOOKBMGHMEC_CCHHKBAJGBA_OFFSET))(KOIBHLHLMFC);
	}
};
