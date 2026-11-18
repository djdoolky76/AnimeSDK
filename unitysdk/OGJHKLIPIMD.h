#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/KNEMBGMEHIJ.h"
#include "unitysdk/NMDKMCBAJIC.h"

class LFMEJAFNBLB;
class PKLAICEMAHO;
class PLDJFGCHMKK;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class DFDEIDBBGHG_1;

#define OGJHKLIPIMD_BBCMAMLAEPC_OFFSET UNITYSDK_OFFSET(0x16F76850)
#define OGJHKLIPIMD_BLHCLFFJBBK_1_OFFSET UNITYSDK_OFFSET(0x16F77470)
#define OGJHKLIPIMD_BLHCLFFJBBK_OFFSET UNITYSDK_OFFSET(0x16F770C0)
#define OGJHKLIPIMD_GAPPMEKLFKL_OFFSET UNITYSDK_OFFSET(0x16F769E0)
#define OGJHKLIPIMD_LHHLGFMNKBG_OFFSET UNITYSDK_OFFSET(0x16F76CC0)
#define OGJHKLIPIMD__CTOR_OFFSET UNITYSDK_OFFSET(0x16F76840)

inline static constexpr unsigned int OGJHKLIPIMD_TypeDefinitionIndex = 43152;

class OGJHKLIPIMD : public ::System::Object
{
public:
	// static const ::System::Int32 CKHMDADODKD = 0x0; // 0x0
	// static const ::System::Int32 CILCPMDKPCB = 0x1; // 0x0
	// static const ::System::Int32 CKFPMKFBNHK = 0x2; // 0x0
	// static const ::System::Int32 FGGFOIGBJOP = 0x3; // 0x0
	// static const ::System::Int32 ELDINOAGHFM = 0x4; // 0x0
	::PKLAICEMAHO* MIGAOFOKENO; // 0x10
	::System::Int32 JLFAFECBOLK; // 0x18
	::System::Int32 CBFAOALGOOA; // 0x1C
	::System::Boolean IAOJECCOMPN; // 0x20

	::System::Void _ctor(::PKLAICEMAHO* MIGAOFOKENO)
	{
		return ((::System::Void(*)(::PVOID, ::PKLAICEMAHO*))((::PBYTE)hIl2Cpp + OGJHKLIPIMD__CTOR_OFFSET))(this, MIGAOFOKENO);
	}

	::System::Int32 BBCMAMLAEPC(::NMDKMCBAJIC FLDHLCHPFMK, ::NMDKMCBAJIC JHFIDDCKHGH)
	{
		return ((::System::Int32(*)(::PVOID, ::NMDKMCBAJIC, ::NMDKMCBAJIC))((::PBYTE)hIl2Cpp + OGJHKLIPIMD_BBCMAMLAEPC_OFFSET))(this, FLDHLCHPFMK, JHFIDDCKHGH);
	}

	::System::Void GAPPMEKLFKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGJHKLIPIMD_GAPPMEKLFKL_OFFSET))(this);
	}

	::NMDKMCBAJIC LHHLGFMNKBG(::System::Int32 OIKFFGKDHME, ::System::Int32 ABMMHDHLILI, ::LFMEJAFNBLB* FFCMLKECMMP)
	{
		return ((::NMDKMCBAJIC(*)(::PVOID, ::System::Int32, ::System::Int32, ::LFMEJAFNBLB*))((::PBYTE)hIl2Cpp + OGJHKLIPIMD_LHHLGFMNKBG_OFFSET))(this, OIKFFGKDHME, ABMMHDHLILI, FFCMLKECMMP);
	}

	::System::Collections::Generic::List_1<::NMDKMCBAJIC>* BLHCLFFJBBK(::DFDEIDBBGHG_1<::PLDJFGCHMKK*>* KFKNPIBMGBN)
	{
		return ((::System::Collections::Generic::List_1<::NMDKMCBAJIC>*(*)(::PVOID, ::DFDEIDBBGHG_1<::PLDJFGCHMKK*>*))((::PBYTE)hIl2Cpp + OGJHKLIPIMD_BLHCLFFJBBK_OFFSET))(this, KFKNPIBMGBN);
	}

	::System::Collections::Generic::List_1<::NMDKMCBAJIC>* BLHCLFFJBBK_1(::System::Collections::Generic::List_1<::KNEMBGMEHIJ>* GOLOEFJPHCF)
	{
		return ((::System::Collections::Generic::List_1<::NMDKMCBAJIC>*(*)(::PVOID, ::System::Collections::Generic::List_1<::KNEMBGMEHIJ>*))((::PBYTE)hIl2Cpp + OGJHKLIPIMD_BLHCLFFJBBK_1_OFFSET))(this, GOLOEFJPHCF);
	}
};
