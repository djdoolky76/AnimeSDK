#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AGFLLIBLPKH.h"
#include "unitysdk/GBLMFIBAPCP.h"
#include "unitysdk/OEPMGLAGLFM.h"

class NKHOMMGFIFO;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GPGCIEAHJDJ_DCPLPALJPGF_OFFSET UNITYSDK_OFFSET(0x15D90000)
#define GPGCIEAHJDJ_DJNPHKKLOFI_OFFSET UNITYSDK_OFFSET(0x15D8FB20)
#define GPGCIEAHJDJ_EBCNHHIGPAG_OFFSET UNITYSDK_OFFSET(0x15D8F4E0)
#define GPGCIEAHJDJ_FCEJOCAFAAE_OFFSET UNITYSDK_OFFSET(0x15D8F300)
#define GPGCIEAHJDJ_JNGHCOKONJF_OFFSET UNITYSDK_OFFSET(0x15D8F8B0)
#define GPGCIEAHJDJ_LAEAAGNEHNN_OFFSET UNITYSDK_OFFSET(0x15D8FC30)
#define GPGCIEAHJDJ_MHOFMAMNIKE_OFFSET UNITYSDK_OFFSET(0x15D8EFD0)

inline static constexpr unsigned int GPGCIEAHJDJ_TypeDefinitionIndex = 83797;

class GPGCIEAHJDJ : public ::System::Object
{
public:
	static ::System::Boolean MHOFMAMNIKE(::System::Int32 BEIOAFIOABC, ::System::Collections::Generic::List_1<::AGFLLIBLPKH>*& KNGDOIPPMNM)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Collections::Generic::List_1<::AGFLLIBLPKH>*&))((::PBYTE)hIl2Cpp + GPGCIEAHJDJ_MHOFMAMNIKE_OFFSET))(BEIOAFIOABC, KNGDOIPPMNM);
	}

	static ::System::Void EBCNHHIGPAG(::System::Int32 AOCOIDIMLIH, ::System::Action_1<::System::Int32>* GJBHEJGENMI)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + GPGCIEAHJDJ_EBCNHHIGPAG_OFFSET))(AOCOIDIMLIH, GJBHEJGENMI);
	}

	static ::System::Void JNGHCOKONJF(::System::Collections::Generic::List_1<::NKHOMMGFIFO*>* DIIIMNICADL, ::System::Collections::Generic::HashSet_1<::System::Int32>* KNMHNFLGIEC, ::GBLMFIBAPCP& IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::NKHOMMGFIFO*>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::GBLMFIBAPCP&))((::PBYTE)hIl2Cpp + GPGCIEAHJDJ_JNGHCOKONJF_OFFSET))(DIIIMNICADL, KNMHNFLGIEC, IGAAKDOIPNN);
	}

	static ::System::Void FCEJOCAFAAE(::System::Collections::Generic::List_1<::NKHOMMGFIFO*>* DIIIMNICADL, ::System::Collections::Generic::HashSet_1<::System::Int32>* KNMHNFLGIEC, ::System::Collections::Generic::List_1<::AGFLLIBLPKH>*& KNGDOIPPMNM)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::NKHOMMGFIFO*>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Collections::Generic::List_1<::AGFLLIBLPKH>*&))((::PBYTE)hIl2Cpp + GPGCIEAHJDJ_FCEJOCAFAAE_OFFSET))(DIIIMNICADL, KNMHNFLGIEC, KNGDOIPPMNM);
	}

	static ::System::Void LAEAAGNEHNN(::System::Int32 AOCOIDIMLIH, ::System::Action_1<::System::Int32>* GJBHEJGENMI)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + GPGCIEAHJDJ_LAEAAGNEHNN_OFFSET))(AOCOIDIMLIH, GJBHEJGENMI);
	}

	static ::System::Boolean DCPLPALJPGF(::System::Int32 BEIOAFIOABC, ::OEPMGLAGLFM& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::System::Int32, ::OEPMGLAGLFM&))((::PBYTE)hIl2Cpp + GPGCIEAHJDJ_DCPLPALJPGF_OFFSET))(BEIOAFIOABC, IGAAKDOIPNN);
	}

	static ::AGFLLIBLPKH DJNPHKKLOFI(::NKHOMMGFIFO* LGBOKFAJMFP, ::System::Collections::Generic::HashSet_1<::System::Int32>* KNMHNFLGIEC)
	{
		return ((::AGFLLIBLPKH(*)(::NKHOMMGFIFO*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + GPGCIEAHJDJ_DJNPHKKLOFI_OFFSET))(LGBOKFAJMFP, KNMHNFLGIEC);
	}
};
