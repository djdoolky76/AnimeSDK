#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IMLOGBPOBLN.h"
#include "unitysdk/JHKOPDIHKJK.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/NDAKCMCCFLF.h"
#include "unitysdk/OHDCKNOCMFK_GGCMPBKGJMO.h"
#include "unitysdk/OHDCKNOCMFK_JLIGPEJPJGG.h"

class GIPCMLEONLI;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
template <typename T> class JKPDIPKKFEI_1;

#define OHDCKNOCMFK_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xFB8B380)
#define OHDCKNOCMFK_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0xFB8B6D0)
#define OHDCKNOCMFK_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0xFB8B640)
#define OHDCKNOCMFK_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xFB8B450)
#define OHDCKNOCMFK__CCTOR_OFFSET UNITYSDK_OFFSET(0xFB8B3D0)
#define OHDCKNOCMFK__CTOR_OFFSET UNITYSDK_OFFSET(0xFB8B560)

inline static constexpr unsigned int OHDCKNOCMFK_TypeDefinitionIndex = 82877;

class OHDCKNOCMFK : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x22B; // 0x0
	::System::Collections::Generic::List_1<::JKPDIPKKFEI_1<::MoleMole::HollowChessboard::HollowCell>*>* AEAFLLDMMPH; // 0x50
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* KEGJHNHPJJF; // 0x58
	::GIPCMLEONLI* ICMMFMKBHLF; // 0x60
	::System::Collections::Generic::Queue_1<::System::Object*>* ANGNDELNLKC; // 0x68
	::System::Boolean IDGANFPIACO; // 0x70
	::System::Boolean FOJMDCDPCML; // 0x71
	::System::Boolean GOGGIHEHBDP; // 0x72
	::System::Byte _padding0[0x1];
	::IMLOGBPOBLN NCHLKOHEAKP; // 0x74
	::OHDCKNOCMFK_GGCMPBKGJMO PMEJAAKIEAI; // 0x78
	::System::Int32 HPLPBONGAAF; // 0x98
	::OHDCKNOCMFK_JLIGPEJPJGG HOBPGKIEPIE; // 0x9C
	::System::Int32 JLGFKGIKDHB; // 0xA0
	::NDAKCMCCFLF PAMNDMALMJA; // 0xA4

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHDCKNOCMFK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHDCKNOCMFK__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHDCKNOCMFK_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHDCKNOCMFK_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHDCKNOCMFK_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::OHDCKNOCMFK* JFDOOELFAOA()
	{
		return ((::OHDCKNOCMFK*(*)())((::PBYTE)hIl2Cpp + OHDCKNOCMFK_JFDOOELFAOA_OFFSET))();
	}
};
