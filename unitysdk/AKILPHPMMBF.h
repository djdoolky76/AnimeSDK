#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRichTextNodeCompiler.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class DNGMCNPJHBJ;
class FMKEJLGKEMH;
namespace System { class String; }

#define AKILPHPMMBF_COMPILE_OFFSET UNITYSDK_OFFSET(0x12DBA4F0)
#define AKILPHPMMBF_CTOR_OFFSET UNITYSDK_OFFSET(0x12DBAD90)
#define AKILPHPMMBF_GET_TAG_OFFSET UNITYSDK_OFFSET(0x12DBA4A0)
#define AKILPHPMMBF_GHBFNFFDGLJ_OFFSET UNITYSDK_OFFSET(0x12DBAAA0)
#define AKILPHPMMBF_GMFJFBJFMFH_OFFSET UNITYSDK_OFFSET(0x12DBA780)

inline static constexpr unsigned int AKILPHPMMBF_TypeDefinitionIndex = 67054;

	class AKILPHPMMBF : public ::RPG::Client::GridFightRichTextNodeCompiler
	{
	public:
		::FMKEJLGKEMH* JKLBAAHFJDJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKILPHPMMBF_CTOR_OFFSET))(this);
		}

		::System::String* get_Tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKILPHPMMBF_GET_TAG_OFFSET))(this);
		}

		::System::String* Compile(::FMKEJLGKEMH* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + AKILPHPMMBF_COMPILE_OFFSET))(this, a1, a2);
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
