#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HEOLKMLMPML.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class DNGMCNPJHBJ;
class FMKEJLGKEMH;
namespace System { class String; }

#define AKILPHPMMBF_ACMPHJJOOHE_OFFSET UNITYSDK_OFFSET(0x12CCF620)
#define AKILPHPMMBF_CTOR_OFFSET UNITYSDK_OFFSET(0x12CCFEC0)
#define AKILPHPMMBF_GHBFNFFDGLJ_OFFSET UNITYSDK_OFFSET(0x12CCFBD0)
#define AKILPHPMMBF_GMFJFBJFMFH_OFFSET UNITYSDK_OFFSET(0x12CCF8B0)
#define AKILPHPMMBF_NDMBDGKAJEK_OFFSET UNITYSDK_OFFSET(0x12CCF5D0)

inline static constexpr unsigned int AKILPHPMMBF_TypeDefinitionIndex = 65294;

	class AKILPHPMMBF : public ::HEOLKMLMPML
	{
	public:
		::FMKEJLGKEMH* JKLBAAHFJDJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKILPHPMMBF_CTOR_OFFSET))(this);
		}

		::System::String* NDMBDGKAJEK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKILPHPMMBF_NDMBDGKAJEK_OFFSET))(this);
		}

		::System::String* ACMPHJJOOHE(::FMKEJLGKEMH* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + AKILPHPMMBF_ACMPHJJOOHE_OFFSET))(this, a1, a2);
		}

		::System::Int32 GMFJFBJFMFH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKILPHPMMBF_GMFJFBJFMFH_OFFSET))(this);
		}

		::System::UInt32 GHBFNFFDGLJ(::RPG::GameCore::FixPoint a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + AKILPHPMMBF_GHBFNFFDGLJ_OFFSET))(this, a1, a2, a3);
		}

	};
