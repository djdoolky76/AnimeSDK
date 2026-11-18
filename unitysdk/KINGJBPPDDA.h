#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNAGFFCCOHI.h"

class LOICBEJNBOB;
template <typename T1, typename T2> class LJIIAALIKDB_2;

#define KINGJBPPDDA_EBMMOPHPNFJ_OFFSET UNITYSDK_OFFSET(0x15B93940)
#define KINGJBPPDDA_EOCFHOPHFJC_OFFSET UNITYSDK_OFFSET(0x15B939E0)
#define KINGJBPPDDA_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x15B937D0)
#define KINGJBPPDDA_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x15B93950)
#define KINGJBPPDDA_JMAAAIFLDDG_OFFSET UNITYSDK_OFFSET(0x15B93930)
#define KINGJBPPDDA__CTOR_OFFSET UNITYSDK_OFFSET(0x15B93920)

inline static constexpr unsigned int KINGJBPPDDA_TypeDefinitionIndex = 65524;

class KINGJBPPDDA : public ::JNAGFFCCOHI
{
public:
	::LJIIAALIKDB_2<::System::Int32, ::LOICBEJNBOB*>* _FFOHJEPELOH_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KINGJBPPDDA__CTOR_OFFSET))(this);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KINGJBPPDDA_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void JMAAAIFLDDG(::LJIIAALIKDB_2<::System::Int32, ::LOICBEJNBOB*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LJIIAALIKDB_2<::System::Int32, ::LOICBEJNBOB*>*))((::PBYTE)hIl2Cpp + KINGJBPPDDA_JMAAAIFLDDG_OFFSET))(this, EGEGIMGMJHN);
	}

	::LJIIAALIKDB_2<::System::Int32, ::LOICBEJNBOB*>* EBMMOPHPNFJ()
	{
		return ((::LJIIAALIKDB_2<::System::Int32, ::LOICBEJNBOB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KINGJBPPDDA_EBMMOPHPNFJ_OFFSET))(this);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KINGJBPPDDA_IFHNMAGGFAE_OFFSET))(this);
	}

	::System::Void EOCFHOPHFJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KINGJBPPDDA_EOCFHOPHFJC_OFFSET))(this);
	}
};
