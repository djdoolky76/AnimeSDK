#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIOGGGIHCAE_CIFBPIABDBJ.h"
#include "unitysdk/System/ValueType.h"

class GEKNEEMAHBC;

#define NNLNDDHBNNO_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x5C55C0)
#define NNLNDDHBNNO_CHEAJKCIEFC_OFFSET UNITYSDK_OFFSET(0x3581C0)
#define NNLNDDHBNNO_DBGACAKCADO_OFFSET UNITYSDK_OFFSET(0x359320)
#define NNLNDDHBNNO_EGOFHPFFKNN_OFFSET UNITYSDK_OFFSET(0x374AF0)
#define NNLNDDHBNNO__CCTOR_OFFSET UNITYSDK_OFFSET(0xED3B920)
#define NNLNDDHBNNO__CTOR_OFFSET UNITYSDK_OFFSET(0x5C55A0)

inline static constexpr unsigned int NNLNDDHBNNO_TypeDefinitionIndex = 86370;

struct alignas(4) NNLNDDHBNNO
{
	static ::NNLNDDHBNNO* StaticGet_FDJHEBHLJLD()
	{
		return (::NNLNDDHBNNO*)Il2CppClass::FromTypeDefinitionIndex(NNLNDDHBNNO_TypeDefinitionIndex)->GetStaticField(0xD840);
	}
	::System::Int32 EHNJCPCLCOJ; // 0x10
	::System::Int32 ODAFPGHJGGL; // 0x14
	::System::Int32 NACGJJKHEJE; // 0x18
	::System::Int32 JHKACBBCGKL; // 0x1C
	::System::Int32 GNHEHOMMHPB; // 0x20
	::System::Int32 _LGDPMHLMJLP_k__BackingField; // 0x24

	::System::Void _ctor(::System::Int32 EHNJCPCLCOJ, ::GEKNEEMAHBC* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::GEKNEEMAHBC*))((::PBYTE)hIl2Cpp + NNLNDDHBNNO__CTOR_OFFSET))(this, EHNJCPCLCOJ, AAOCANGHBDG);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNLNDDHBNNO__CCTOR_OFFSET))();
	}

	::System::Int32 CHEAJKCIEFC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLNDDHBNNO_CHEAJKCIEFC_OFFSET))(this);
	}

	::AIOGGGIHCAE_CIFBPIABDBJ DBGACAKCADO()
	{
		return ((::AIOGGGIHCAE_CIFBPIABDBJ(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLNDDHBNNO_DBGACAKCADO_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::GEKNEEMAHBC* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::GEKNEEMAHBC*))((::PBYTE)hIl2Cpp + NNLNDDHBNNO_BBOMJDBNHIC_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void EGOFHPFFKNN(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NNLNDDHBNNO_EGOFHPFFKNN_OFFSET))(this, EGEGIMGMJHN);
	}
};
