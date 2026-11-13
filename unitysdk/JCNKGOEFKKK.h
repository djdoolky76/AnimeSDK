#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRichTextNodeCompiler.h"
#include "unitysdk/RPG/GameCore/ModifyCalcOpType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class DNGMCNPJHBJ;
class FMKEJLGKEMH;
namespace RPG::Client { class GridFightRoleSkillDetail; }
namespace System { class String; }

#define JCNKGOEFKKK_APKAPIKJDOA_OFFSET UNITYSDK_OFFSET(0x169684F0)
#define JCNKGOEFKKK_COMPILE_OFFSET UNITYSDK_OFFSET(0x16968030)
#define JCNKGOEFKKK_CTOR_OFFSET UNITYSDK_OFFSET(0x16968020)
#define JCNKGOEFKKK_GCEGDBMEHLN_OFFSET UNITYSDK_OFFSET(0x16968340)
#define JCNKGOEFKKK_GET_TAG_OFFSET UNITYSDK_OFFSET(0x16967FB0)
#define JCNKGOEFKKK_KALJPLALDAM_OFFSET UNITYSDK_OFFSET(0x169681B0)
#define JCNKGOEFKKK_OHHEEPFHMGK_OFFSET UNITYSDK_OFFSET(0x16968750)

inline static constexpr unsigned int JCNKGOEFKKK_TypeDefinitionIndex = 67046;

	class JCNKGOEFKKK : public ::RPG::Client::GridFightRichTextNodeCompiler
	{
	public:
		::FMKEJLGKEMH* JKLBAAHFJDJ; // 0x10
		::RPG::Client::GridFightRoleSkillDetail* NJFFGCELHIM; // 0x18
		::System::Void _ctor(::RPG::Client::GridFightRoleSkillDetail* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRoleSkillDetail*))((::PBYTE)hIl2Cpp + JCNKGOEFKKK_CTOR_OFFSET))(this, a1);
		}

		::System::String* get_Tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCNKGOEFKKK_GET_TAG_OFFSET))(this);
		}

		::System::String* Compile(::FMKEJLGKEMH* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + JCNKGOEFKKK_COMPILE_OFFSET))(this, a1, a2);
		}

		::System::String* KALJPLALDAM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCNKGOEFKKK_KALJPLALDAM_OFFSET))(this);
		}

		::System::String* GCEGDBMEHLN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCNKGOEFKKK_GCEGDBMEHLN_OFFSET))(this);
		}

		::System::String* APKAPIKJDOA(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JCNKGOEFKKK_APKAPIKJDOA_OFFSET))(this, a1);
		}

		::System::String* OHHEEPFHMGK(::RPG::GameCore::ModifyCalcOpType a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::ModifyCalcOpType, ::System::String*))((::PBYTE)hIl2Cpp + JCNKGOEFKKK_OHHEEPFHMGK_OFFSET))(this, a1, a2);
		}

	};
