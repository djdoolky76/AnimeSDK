#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PNIFOBDJCIC.h"
#include "unitysdk/System/Object.h"

class KBDGKAJPALP;

#define PPJGCONBEGB_DMLODGCOHKP_OFFSET UNITYSDK_OFFSET(0x1DB95EE0)
#define PPJGCONBEGB_KANMDKIGDOJ_OFFSET UNITYSDK_OFFSET(0x1DB95D70)

inline static constexpr unsigned int PPJGCONBEGB_TypeDefinitionIndex = 93810;

class PPJGCONBEGB : public ::System::Object
{
public:
	static ::System::Void KANMDKIGDOJ(::KBDGKAJPALP* GEEHGDABNJF, ::PNIFOBDJCIC MGGKFACPGFE)
	{
		return ((::System::Void(*)(::KBDGKAJPALP*, ::PNIFOBDJCIC))((::PBYTE)hIl2Cpp + PPJGCONBEGB_KANMDKIGDOJ_OFFSET))(GEEHGDABNJF, MGGKFACPGFE);
	}

	static ::System::Void DMLODGCOHKP(::KBDGKAJPALP* GEEHGDABNJF, ::System::Int32 NNEBKGADDDC)
	{
		return ((::System::Void(*)(::KBDGKAJPALP*, ::System::Int32))((::PBYTE)hIl2Cpp + PPJGCONBEGB_DMLODGCOHKP_OFFSET))(GEEHGDABNJF, NNEBKGADDDC);
	}
};
