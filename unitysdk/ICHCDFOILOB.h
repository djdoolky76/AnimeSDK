#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
template <typename T> class LEEILAFAGPH_1;

#define ICHCDFOILOB_BMKAMKDEGHD_OFFSET UNITYSDK_OFFSET(0x16A916B0)
#define ICHCDFOILOB_ILIEOEPFKNN_OFFSET UNITYSDK_OFFSET(0x16A916F0)
#define ICHCDFOILOB_LFPGECJJBHA_OFFSET UNITYSDK_OFFSET(0x16A91880)
#define ICHCDFOILOB_MLGEMMDLCJP_OFFSET UNITYSDK_OFFSET(0x16A918C0)
#define ICHCDFOILOB__CTOR_OFFSET UNITYSDK_OFFSET(0x16A916A0)

inline static constexpr unsigned int ICHCDFOILOB_TypeDefinitionIndex = 76493;

class ICHCDFOILOB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHCDFOILOB__CTOR_OFFSET))(this);
	}

	::LEEILAFAGPH_1<::System::Boolean>* BMKAMKDEGHD(::System::Boolean EJCBEJMGFAJ)
	{
		return ((::LEEILAFAGPH_1<::System::Boolean>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICHCDFOILOB_BMKAMKDEGHD_OFFSET))(this, EJCBEJMGFAJ);
	}

	::LEEILAFAGPH_1<::System::Boolean>* LFPGECJJBHA(::System::Boolean EJCBEJMGFAJ)
	{
		return ((::LEEILAFAGPH_1<::System::Boolean>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICHCDFOILOB_LFPGECJJBHA_OFFSET))(this, EJCBEJMGFAJ);
	}

	::System::Void MLGEMMDLCJP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHCDFOILOB_MLGEMMDLCJP_OFFSET))(this);
	}

	::LEEILAFAGPH_1<::System::Boolean>* ILIEOEPFKNN(::System::Boolean JIHCMBACDNJ, ::System::String* CMMFDGPKFMK)
	{
		return ((::LEEILAFAGPH_1<::System::Boolean>*(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + ICHCDFOILOB_ILIEOEPFKNN_OFFSET))(this, JIHCMBACDNJ, CMMFDGPKFMK);
	}
};
