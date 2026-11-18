#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNGNECAGPNE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RectTransform_Axis.h"
#include "unitysdk/OIJMFNHGANO.h"

namespace MoleMole { class MonoGamepadBaseList; }

#define HAFIBPOFNDL_CNFPLMANCBI_OFFSET UNITYSDK_OFFSET(0x1816D7B0)
#define HAFIBPOFNDL_PBPLFOHALFF_OFFSET UNITYSDK_OFFSET(0x1816D830)
#define HAFIBPOFNDL_PPCBOKHGGBM_OFFSET UNITYSDK_OFFSET(0x1816D1D0)
#define HAFIBPOFNDL__CTOR_OFFSET UNITYSDK_OFFSET(0x1816D1C0)

inline static constexpr unsigned int HAFIBPOFNDL_TypeDefinitionIndex = 89829;

class HAFIBPOFNDL : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFIBPOFNDL__CTOR_OFFSET))(this);
	}

	static ::System::Int32 PPCBOKHGGBM(::MoleMole::MonoGamepadBaseList* KHGFAKJKDGG, ::MoleMole::MonoGamepadBaseList* HODAIDNDKHD, ::HNGNECAGPNE IOOOALDFNGH, ::OIJMFNHGANO DOJMANAIEBF)
	{
		return ((::System::Int32(*)(::MoleMole::MonoGamepadBaseList*, ::MoleMole::MonoGamepadBaseList*, ::HNGNECAGPNE, ::OIJMFNHGANO))((::PBYTE)hIl2Cpp + HAFIBPOFNDL_PPCBOKHGGBM_OFFSET))(KHGFAKJKDGG, HODAIDNDKHD, IOOOALDFNGH, DOJMANAIEBF);
	}

	static ::System::Int32 CNFPLMANCBI(::System::Single LIDLEIPPLOO, ::System::Int32 NHCAKKOBLOP, ::System::Int32 CHPJFHDIIMK)
	{
		return ((::System::Int32(*)(::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HAFIBPOFNDL_CNFPLMANCBI_OFFSET))(LIDLEIPPLOO, NHCAKKOBLOP, CHPJFHDIIMK);
	}

	static ::System::Int32 PBPLFOHALFF(::System::Int32 PCEFKJHBDDF, ::System::Int32 CHIFPJGLFPK, ::System::Int32 IEPGOLAPKPE, ::System::Int32 NGLKGFIEPBL, ::UnityEngine::RectTransform_Axis OPPFDNCJFGJ, ::System::Int32 BABIHDEGHAB)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RectTransform_Axis, ::System::Int32))((::PBYTE)hIl2Cpp + HAFIBPOFNDL_PBPLFOHALFF_OFFSET))(PCEFKJHBDDF, CHIFPJGLFPK, IEPGOLAPKPE, NGLKGFIEPBL, OPPFDNCJFGJ, BABIHDEGHAB);
	}
};
