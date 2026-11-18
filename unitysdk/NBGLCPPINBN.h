#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"
#include "unitysdk/PAMPOBIPLCE.h"

namespace System { class String; }
template <typename T> class LJHFMILANJA_1;

#define NBGLCPPINBN_IEIFPEJKEJM_OFFSET UNITYSDK_OFFSET(0x17271C80)
#define NBGLCPPINBN_IMHFLNFGBKO_OFFSET UNITYSDK_OFFSET(0x17271BC0)
#define NBGLCPPINBN_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x17271B70)
#define NBGLCPPINBN__CTOR_OFFSET UNITYSDK_OFFSET(0x17271C70)

inline static constexpr unsigned int NBGLCPPINBN_TypeDefinitionIndex = 50866;

class NBGLCPPINBN : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::Boolean>* BCDBICKDMBF; // 0x88
	::LJHFMILANJA_1<::System::Boolean>* GHPNGLMOGAO; // 0x90
	::LJHFMILANJA_1<::System::Boolean>* HICNNOPLGMG; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGLCPPINBN__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGLCPPINBN_ONCREATEPROPERTY_OFFSET))(this);
	}

	::LJHFMILANJA_1<::System::Boolean>* IEIFPEJKEJM(::PAMPOBIPLCE KAMJLKGLFDB, ::System::String* AELLPLBJELA)
	{
		return ((::LJHFMILANJA_1<::System::Boolean>*(*)(::PVOID, ::PAMPOBIPLCE, ::System::String*))((::PBYTE)hIl2Cpp + NBGLCPPINBN_IEIFPEJKEJM_OFFSET))(this, KAMJLKGLFDB, AELLPLBJELA);
	}

	::System::Void IMHFLNFGBKO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGLCPPINBN_IMHFLNFGBKO_OFFSET))(this);
	}
};
