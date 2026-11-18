#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMLLGKLKDCK.h"
#include "unitysdk/DMLLGKLKDCK_ACBGPILEPBK.h"

namespace System { class String; }

#define EHKDCNKAPIF_DKCCELBNBLM_OFFSET UNITYSDK_OFFSET(0x10F30F40)
#define EHKDCNKAPIF_KMGAPACHIHK_OFFSET UNITYSDK_OFFSET(0x10F30A50)
#define EHKDCNKAPIF_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x10F31020)
#define EHKDCNKAPIF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x10F30B20)
#define EHKDCNKAPIF_PLJOGPIBEIA_OFFSET UNITYSDK_OFFSET(0x10F30BA0)
#define EHKDCNKAPIF_PMEOBCCMEPB_1_OFFSET UNITYSDK_OFFSET(0x10F30D10)
#define EHKDCNKAPIF_PMEOBCCMEPB_OFFSET UNITYSDK_OFFSET(0x10F30CA0)
#define EHKDCNKAPIF__CTOR_OFFSET UNITYSDK_OFFSET(0x10F30A20)

inline static constexpr unsigned int EHKDCNKAPIF_TypeDefinitionIndex = 53180;

class EHKDCNKAPIF : public ::DMLLGKLKDCK
{
public:
	// static const ::System::Int32 ALDNFNLFJKJ = 0x1; // 0x0
	// static const ::System::Int32 OLAEPGKMFGM = 0x0; // 0x0
	// static const ::System::Int32 FINLNNHFCMB = 0x3; // 0x0
	::Il2CppArray<::System::Byte>* NNDGOECPIOH; // 0x70
	::Il2CppArray<::System::String*>* OAGEMCCFLGE; // 0x78

	::System::Void _ctor(::System::Single FMAELFPAEII, ::DMLLGKLKDCK_ACBGPILEPBK AJEDCCDKEIC, ::System::Single NJNOHDNDNAF, ::System::Single GKBHFDMJAFJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::DMLLGKLKDCK_ACBGPILEPBK, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EHKDCNKAPIF__CTOR_OFFSET))(this, FMAELFPAEII, AJEDCCDKEIC, NJNOHDNDNAF, GKBHFDMJAFJ);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKDCNKAPIF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void PLJOGPIBEIA(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EHKDCNKAPIF_PLJOGPIBEIA_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Boolean PMEOBCCMEPB(::System::Int32& LGJDIKAJJNK, ::System::String*& OFAMJILHKGF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32&, ::System::String*&))((::PBYTE)hIl2Cpp + EHKDCNKAPIF_PMEOBCCMEPB_OFFSET))(this, LGJDIKAJJNK, OFAMJILHKGF);
	}

	::System::Int32 DKCCELBNBLM(::System::Single EGEGIMGMJHN, ::System::String* OFAMJILHKGF, ::System::Int32 DKOFFFNEFJC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + EHKDCNKAPIF_DKCCELBNBLM_OFFSET))(this, EGEGIMGMJHN, OFAMJILHKGF, DKOFFFNEFJC);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKDCNKAPIF_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Boolean PMEOBCCMEPB_1(::System::Int32& LGJDIKAJJNK, ::System::String*& OFAMJILHKGF, ::System::Int32& KNEHCHHABMI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32&, ::System::String*&, ::System::Int32&))((::PBYTE)hIl2Cpp + EHKDCNKAPIF_PMEOBCCMEPB_1_OFFSET))(this, LGJDIKAJJNK, OFAMJILHKGF, KNEHCHHABMI);
	}

	::System::Void KMGAPACHIHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKDCNKAPIF_KMGAPACHIHK_OFFSET))(this);
	}
};
