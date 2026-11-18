#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define JNEFCLNAIJC_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x13C3B1B0)
#define JNEFCLNAIJC_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x13C3B120)
#define JNEFCLNAIJC_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x13C3B090)
#define JNEFCLNAIJC__CCTOR_OFFSET UNITYSDK_OFFSET(0x13C3B010)
#define JNEFCLNAIJC__CTOR_OFFSET UNITYSDK_OFFSET(0x13C3B080)

inline static constexpr unsigned int JNEFCLNAIJC_TypeDefinitionIndex = 65110;

class JNEFCLNAIJC : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x119; // 0x0
	::Il2CppArray<::System::Int32>* DACFAECIONF; // 0x20
	::System::String* NCHCMKEAHCD; // 0x28
	::Il2CppArray<::System::String*>* JEFIMHBLBOE; // 0x30
	::System::Boolean DEBGKPLOPCG; // 0x38

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNEFCLNAIJC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEFCLNAIJC__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEFCLNAIJC_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEFCLNAIJC_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::Il2CppArray<::System::Int32>* OFJMAJBGEPC, ::System::String* NCHCMKEAHCD, ::System::Boolean DEBGKPLOPCG, ::Il2CppArray<::System::String*>* JEFIMHBLBOE)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::Int32>*, ::System::String*, ::System::Boolean, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + JNEFCLNAIJC_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, OFJMAJBGEPC, NCHCMKEAHCD, DEBGKPLOPCG, JEFIMHBLBOE);
	}
};
