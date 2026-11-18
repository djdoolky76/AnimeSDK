#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

class COFHDNHCCAO;
template <typename T> class LJHFMILANJA_1;

#define APLJOKNOFIK_GFHNMBHLLHC_OFFSET UNITYSDK_OFFSET(0x134EF660)
#define APLJOKNOFIK_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x134EF5A0)
#define APLJOKNOFIK__CTOR_OFFSET UNITYSDK_OFFSET(0x134EF650)

inline static constexpr unsigned int APLJOKNOFIK_TypeDefinitionIndex = 65479;

class APLJOKNOFIK : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::UInt32>* MGMDJCCEAIB; // 0x88
	::LJHFMILANJA_1<::System::UInt32>* GGCKFEGMPLC; // 0x90
	::LJHFMILANJA_1<::System::Int32>* HFPCJJLPEBD; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLJOKNOFIK__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLJOKNOFIK_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void GFHNMBHLLHC(::COFHDNHCCAO* IPMMCGDMODG)
	{
		return ((::System::Void(*)(::PVOID, ::COFHDNHCCAO*))((::PBYTE)hIl2Cpp + APLJOKNOFIK_GFHNMBHLLHC_OFFSET))(this, IPMMCGDMODG);
	}
};
