#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/JLACGDIAFNB.h"
#include "unitysdk/KFOFNLFJFOF.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataAliveType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

class EBEAAFHPBJG;
class MNJLDJDPEGH;
class PHCAOEMIJPJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IEGMIHHJMEP_GGKCBDPBIBF_BDAHJAMOAAJ_OFFSET UNITYSDK_OFFSET(0x611F10)
#define IEGMIHHJMEP_GGKCBDPBIBF_CBDKEBKFELO_OFFSET UNITYSDK_OFFSET(0x611F00)
#define IEGMIHHJMEP_GGKCBDPBIBF_CIDPIBKADIF_OFFSET UNITYSDK_OFFSET(0x611E30)
#define IEGMIHHJMEP_GGKCBDPBIBF_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x10138CC0)
#define IEGMIHHJMEP_GGKCBDPBIBF_LPJGKDCENOO_OFFSET UNITYSDK_OFFSET(0x611EC0)
#define IEGMIHHJMEP_GGKCBDPBIBF_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x611ED0)

inline static constexpr unsigned int IEGMIHHJMEP_GGKCBDPBIBF_TypeDefinitionIndex = 39112;

struct alignas(8) IEGMIHHJMEP_GGKCBDPBIBF
{
	::System::Collections::Generic::List_1<::PHCAOEMIJPJ*>* EFBHDHJCDCP; // 0x10
	::MoleMole::HollowChessboard::RenderDataAliveType NJINEMLOICB; // 0x18
	::System::Byte _padding0[0x4];
	::Foundation::Unreal::FGameplayTagContainer JHIJPCJBOCJ; // 0x20
	::JLACGDIAFNB FCECHFEDIFM; // 0x90

	::System::Void CIDPIBKADIF(::PHCAOEMIJPJ* COMOHJAHKAL)
	{
		return ((::System::Void(*)(::PVOID, ::PHCAOEMIJPJ*))((::PBYTE)hIl2Cpp + IEGMIHHJMEP_GGKCBDPBIBF_CIDPIBKADIF_OFFSET))(this, COMOHJAHKAL);
	}

	::System::Void LPJGKDCENOO(::KFOFNLFJFOF AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::KFOFNLFJFOF))((::PBYTE)hIl2Cpp + IEGMIHHJMEP_GGKCBDPBIBF_LPJGKDCENOO_OFFSET))(this, AELLPLBJELA);
	}

	::MoleMole::HollowChessboard::RenderDataHandle PKOGNPKCHHE(::EBEAAFHPBJG* DKELJKPOHOC, ::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::PVOID, ::EBEAAFHPBJG*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + IEGMIHHJMEP_GGKCBDPBIBF_PKOGNPKCHHE_OFFSET))(this, DKELJKPOHOC, EKPEBNCLJPM);
	}

	/*
	static ::IEGMIHHJMEP_GGKCBDPBIBF COKNIICCODC()
	{
		return ((::IEGMIHHJMEP_GGKCBDPBIBF(*)())((::PBYTE)hIl2Cpp + IEGMIHHJMEP_GGKCBDPBIBF_COKNIICCODC_OFFSET))();
	}
	*/

	::System::Void CBDKEBKFELO(::Foundation::Unreal::FGameplayTag AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + IEGMIHHJMEP_GGKCBDPBIBF_CBDKEBKFELO_OFFSET))(this, AELLPLBJELA);
	}

	::System::Void BDAHJAMOAAJ(::MNJLDJDPEGH* COMOHJAHKAL)
	{
		return ((::System::Void(*)(::PVOID, ::MNJLDJDPEGH*))((::PBYTE)hIl2Cpp + IEGMIHHJMEP_GGKCBDPBIBF_BDAHJAMOAAJ_OFFSET))(this, COMOHJAHKAL);
	}
};
