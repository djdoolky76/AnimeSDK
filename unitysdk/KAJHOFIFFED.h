#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHOBPPAJKIL.h"

class EAIOHODECAO;
namespace System { class Random; }

#define KAJHOFIFFED_AIHKBDOOHDJ_OFFSET UNITYSDK_OFFSET(0x1FCE6700)
#define KAJHOFIFFED_CGPMCKKHOKC_OFFSET UNITYSDK_OFFSET(0x1FCE67E0)
#define KAJHOFIFFED_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1FCE65C0)
#define KAJHOFIFFED_LCCOLFFKAGJ_OFFSET UNITYSDK_OFFSET(0x1FCE6690)
#define KAJHOFIFFED_LGOFCOBFLCA_OFFSET UNITYSDK_OFFSET(0x1FCE6770)
#define KAJHOFIFFED_MPEGDJKPICI_OFFSET UNITYSDK_OFFSET(0x1FCE6610)
#define KAJHOFIFFED_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1FCE6500)
#define KAJHOFIFFED__CTOR_OFFSET UNITYSDK_OFFSET(0x1FCE6600)

inline static constexpr unsigned int KAJHOFIFFED_TypeDefinitionIndex = 95246;

class KAJHOFIFFED : public ::MHOBPPAJKIL
{
public:
	::System::Random* MFEPCLGOHPI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJHOFIFFED__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::EAIOHODECAO* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::EAIOHODECAO*))((::PBYTE)hIl2Cpp + KAJHOFIFFED_OJENCMOGDKL_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJHOFIFFED_KMMIPNMJILI_OFFSET))(this);
	}

	::System::Int32 MPEGDJKPICI(::System::Int32 GDBANLBHNJK, ::System::Int32 DNFNKBNBJHM)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KAJHOFIFFED_MPEGDJKPICI_OFFSET))(this, GDBANLBHNJK, DNFNKBNBJHM);
	}

	::System::Boolean LCCOLFFKAGJ(::System::Int32 HHHPDKABJNP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KAJHOFIFFED_LCCOLFFKAGJ_OFFSET))(this, HHHPDKABJNP);
	}

	::System::Int32 AIHKBDOOHDJ(::System::Int32 GDBANLBHNJK, ::System::Int32 DNFNKBNBJHM)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KAJHOFIFFED_AIHKBDOOHDJ_OFFSET))(this, GDBANLBHNJK, DNFNKBNBJHM);
	}

	::System::Int32 LGOFCOBFLCA(::System::Int32 GDBANLBHNJK, ::System::Int32 DNFNKBNBJHM)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KAJHOFIFFED_LGOFCOBFLCA_OFFSET))(this, GDBANLBHNJK, DNFNKBNBJHM);
	}

	::System::Random* CGPMCKKHOKC()
	{
		return ((::System::Random*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJHOFIFFED_CGPMCKKHOKC_OFFSET))(this);
	}
};
