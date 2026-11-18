#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KBMJHBACPJM;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NMBBGIHHOOJ_EKMCLAOIPCC_OFFSET UNITYSDK_OFFSET(0xFD07A00)
#define NMBBGIHHOOJ_FAJGKGEHHIF_OFFSET UNITYSDK_OFFSET(0xFD07BE0)
#define NMBBGIHHOOJ_OLCGABNAGIG_OFFSET UNITYSDK_OFFSET(0xFD086E0)
#define NMBBGIHHOOJ__CCTOR_OFFSET UNITYSDK_OFFSET(0xFD07960)

inline static constexpr unsigned int NMBBGIHHOOJ_TypeDefinitionIndex = 72941;

class NMBBGIHHOOJ : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::KBMJHBACPJM*>** StaticGet_MKJMEHNIOAD()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::KBMJHBACPJM*>**)Il2CppClass::FromTypeDefinitionIndex(NMBBGIHHOOJ_TypeDefinitionIndex)->GetStaticField(0x522B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMBBGIHHOOJ__CCTOR_OFFSET))();
	}

	static ::System::Void EKMCLAOIPCC(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* AMPKBEEDJJH, ::System::Collections::Generic::List_1<::System::String*>* HGKANJHHLMF, ::System::Int32 IHDCGPLNEBJ)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + NMBBGIHHOOJ_EKMCLAOIPCC_OFFSET))(AMPKBEEDJJH, HGKANJHHLMF, IHDCGPLNEBJ);
	}

	static ::KBMJHBACPJM* FAJGKGEHHIF(::System::Int32 IHDCGPLNEBJ)
	{
		return ((::KBMJHBACPJM*(*)(::System::Int32))((::PBYTE)hIl2Cpp + NMBBGIHHOOJ_FAJGKGEHHIF_OFFSET))(IHDCGPLNEBJ);
	}

	static ::System::Void OLCGABNAGIG()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMBBGIHHOOJ_OLCGABNAGIG_OFFSET))();
	}
};
