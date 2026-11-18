#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AOLKBAIGBFN.h"
#include "unitysdk/EFLALDPPFFA.h"
#include "unitysdk/HLAGNEHLNKA.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CIMIPAJFBLK_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x1686AC90)
#define CIMIPAJFBLK_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1686AB30)
#define CIMIPAJFBLK_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1686AC10)
#define CIMIPAJFBLK_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1686AFD0)
#define CIMIPAJFBLK_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1686AA50)
#define CIMIPAJFBLK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1686AB80)
#define CIMIPAJFBLK__CTOR_OFFSET UNITYSDK_OFFSET(0x1686AC00)

inline static constexpr unsigned int CIMIPAJFBLK_TypeDefinitionIndex = 57581;

class CIMIPAJFBLK : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xCB; // 0x0
	::System::String* JAIIBOFPBCC; // 0x48
	::System::Action* BNJEMCHNCBA; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* CGICCFMGHHC; // 0x58
	::HLAGNEHLNKA PEBMOOHIIPC; // 0x60
	::System::Single MOKOEIPKGBM; // 0x64
	::AOLKBAIGBFN OAPGGOHBGBH; // 0x68
	::System::Int32 ABEDAPFIKFO; // 0x6C
	::EFLALDPPFFA COBMMBIGAOA; // 0x70
	::System::Single BJMGFKOEBGK; // 0x74
	::System::Single FPNCJPKEDGG; // 0x78
	::System::Single FDAOMNBBCNM; // 0x7C
	::System::Boolean GEGLPOEMFME; // 0x80
	::System::Byte _padding0[0x3];
	::System::Single AILAEOGDNHN; // 0x84

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIMIPAJFBLK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIMIPAJFBLK__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIMIPAJFBLK_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIMIPAJFBLK_GETCLASSID_OFFSET))(this);
	}

	static ::CIMIPAJFBLK* JFDOOELFAOA()
	{
		return ((::CIMIPAJFBLK*(*)())((::PBYTE)hIl2Cpp + CIMIPAJFBLK_JFDOOELFAOA_OFFSET))();
	}

	::System::Void GALGFCPKMGC(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* CJBJONJDOLI, ::AOLKBAIGBFN EMBKMNLMCNP, ::System::String* HAOLBAJBINF, ::HLAGNEHLNKA AIOMIBOFMJA, ::System::Single DIJADIGAGCA, ::System::Single FGDAJLELKJP, ::System::Int32 AJLEKPAGONP, ::System::Single MLKACCEHBMD, ::EFLALDPPFFA DGGNCIDEAJM, ::System::Single POIBFOMHDNA, ::System::Single EBKKDHADMFJ, ::System::Boolean BNJAIECDIHK, ::System::Action* CEOMBCGJEOK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::AOLKBAIGBFN, ::System::String*, ::HLAGNEHLNKA, ::System::Single, ::System::Single, ::System::Int32, ::System::Single, ::EFLALDPPFFA, ::System::Single, ::System::Single, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CIMIPAJFBLK_GALGFCPKMGC_OFFSET))(this, CJBJONJDOLI, EMBKMNLMCNP, HAOLBAJBINF, AIOMIBOFMJA, DIJADIGAGCA, FGDAJLELKJP, AJLEKPAGONP, MLKACCEHBMD, DGGNCIDEAJM, POIBFOMHDNA, EBKKDHADMFJ, BNJAIECDIHK, CEOMBCGJEOK);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIMIPAJFBLK_MEFBHFEOKGH_OFFSET))(this);
	}
};
