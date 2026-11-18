#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GHOEJMIDJCI;
class NDJACLOJJJK;
class PFHMELDGPLO;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class DFDEIDBBGHG_1;

#define GCDPGLAOPMH_CGCCDEKHPKP_OFFSET UNITYSDK_OFFSET(0x10EE2110)
#define GCDPGLAOPMH_JOKCCMBBKHG_OFFSET UNITYSDK_OFFSET(0x10EE2190)
#define GCDPGLAOPMH_NNJBNMGJPMM_OFFSET UNITYSDK_OFFSET(0x10EE24D0)
#define GCDPGLAOPMH__CTOR_OFFSET UNITYSDK_OFFSET(0x10EE2090)

inline static constexpr unsigned int GCDPGLAOPMH_TypeDefinitionIndex = 39797;

class GCDPGLAOPMH : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::PFHMELDGPLO*>* HEIAEFIDLAK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCDPGLAOPMH__CTOR_OFFSET))(this);
	}

	::System::Void CGCCDEKHPKP(::GHOEJMIDJCI* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::GHOEJMIDJCI*))((::PBYTE)hIl2Cpp + GCDPGLAOPMH_CGCCDEKHPKP_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void NNJBNMGJPMM(::DFDEIDBBGHG_1<::NDJACLOJJJK*>* DOEGACMLCGI)
	{
		return ((::System::Void(*)(::PVOID, ::DFDEIDBBGHG_1<::NDJACLOJJJK*>*))((::PBYTE)hIl2Cpp + GCDPGLAOPMH_NNJBNMGJPMM_OFFSET))(this, DOEGACMLCGI);
	}

	::System::Void JOKCCMBBKHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCDPGLAOPMH_JOKCCMBBKHG_OFFSET))(this);
	}
};
