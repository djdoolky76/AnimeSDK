#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECLDJGAJPJM.h"
#include "unitysdk/FLAIPLENGHF.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/Config/TeamProperty.h"

class DMLLGKLKDCK;
class GGJGNGBBCFP;
class KJANNJMDOFK;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NJJPBAEPPCJ_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1375DED0)
#define NJJPBAEPPCJ_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1375E260)
#define NJJPBAEPPCJ_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1375E1D0)
#define NJJPBAEPPCJ_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1375D990)
#define NJJPBAEPPCJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x1375DF20)
#define NJJPBAEPPCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1375DFA0)

inline static constexpr unsigned int NJJPBAEPPCJ_TypeDefinitionIndex = 86196;

class NJJPBAEPPCJ : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::String* CGNMBFDNDNH; // 0x0
	// static const ::System::String* EIEAKFOIEAP; // 0x0
	// static const ::System::Int32 IPAPPCOIEIF = 0x7A; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::TeamProperty>* PCAKAEMEDGG; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>*>* ODKEHGFNKLE; // 0x50
	::System::Collections::Generic::List_1<::System::Double>* BDEMNDIGNNN; // 0x58
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::TeamProperty, ::ECLDJGAJPJM>* HJOGLDCFCDH; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* BCMBFDIENJE; // 0x68
	::MGHNAPKHBOG JDMNPGDMHPL; // 0x70
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::KJANNJMDOFK*>*>* OAEEABLMPBP; // 0x88
	::DMLLGKLKDCK* ALJCBLELMNP; // 0x90
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::GGJGNGBBCFP*>*>* OPKILLPEFAN; // 0x98
	::System::Double JDPOECBALMF; // 0xA0
	::FLAIPLENGHF OAJKBJKHOPJ; // 0xA8

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJJPBAEPPCJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJPBAEPPCJ__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJPBAEPPCJ_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJPBAEPPCJ_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJPBAEPPCJ_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::NJJPBAEPPCJ* JFDOOELFAOA()
	{
		return ((::NJJPBAEPPCJ*(*)())((::PBYTE)hIl2Cpp + NJJPBAEPPCJ_JFDOOELFAOA_OFFSET))();
	}
};
