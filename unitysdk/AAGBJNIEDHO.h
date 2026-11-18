#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/PIJMOAJLFGE.h"

class HJNDAFNLCBJ;
namespace MoleMole::Config { class PerceptionSenseConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AAGBJNIEDHO_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x16D58C50)
#define AAGBJNIEDHO_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x16D58840)
#define AAGBJNIEDHO_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x16D589A0)
#define AAGBJNIEDHO_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x16D58E40)
#define AAGBJNIEDHO_MMCODKIJOFO_OFFSET UNITYSDK_OFFSET(0x16D58AA0)
#define AAGBJNIEDHO_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x16D587D0)
#define AAGBJNIEDHO__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D58890)
#define AAGBJNIEDHO__CTOR_OFFSET UNITYSDK_OFFSET(0x16D58910)

inline static constexpr unsigned int AAGBJNIEDHO_TypeDefinitionIndex = 83845;

class AAGBJNIEDHO : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x1; // 0x0
	::System::Collections::Generic::List_1<::HJNDAFNLCBJ*>* NAKNDMLALGF; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAGBJNIEDHO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAGBJNIEDHO__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAGBJNIEDHO_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAGBJNIEDHO_GETCLASSID_OFFSET))(this);
	}

	static ::AAGBJNIEDHO* JFDOOELFAOA()
	{
		return ((::AAGBJNIEDHO*(*)())((::PBYTE)hIl2Cpp + AAGBJNIEDHO_JFDOOELFAOA_OFFSET))();
	}

	::PIJMOAJLFGE MMCODKIJOFO(::System::String* HIAIKHDFCLN)
	{
		return ((::PIJMOAJLFGE(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AAGBJNIEDHO_MMCODKIJOFO_OFFSET))(this, HIAIKHDFCLN);
	}

	::System::Void GALGFCPKMGC(::System::Collections::Generic::List_1<::MoleMole::Config::PerceptionSenseConfig*>* KADJFHOODMJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::PerceptionSenseConfig*>*))((::PBYTE)hIl2Cpp + AAGBJNIEDHO_GALGFCPKMGC_OFFSET))(this, KADJFHOODMJ);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAGBJNIEDHO_MEFBHFEOKGH_OFFSET))(this);
	}
};
