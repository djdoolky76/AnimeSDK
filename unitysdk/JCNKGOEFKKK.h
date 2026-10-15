#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HEOLKMLMPML.h"
#include "unitysdk/RPG/GameCore/ModifyCalcOpType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class DNGMCNPJHBJ;
class FMKEJLGKEMH;
namespace RPG::Client { class GridFightRoleSkillDetail; }
namespace System { class String; }

#define JCNKGOEFKKK_ACMPHJJOOHE_OFFSET UNITYSDK_OFFSET(0x165A7E00)
#define JCNKGOEFKKK_APKAPIKJDOA_OFFSET UNITYSDK_OFFSET(0x165A82C0)
#define JCNKGOEFKKK_CTOR_OFFSET UNITYSDK_OFFSET(0x165A7DF0)
#define JCNKGOEFKKK_GCEGDBMEHLN_OFFSET UNITYSDK_OFFSET(0x165A8110)
#define JCNKGOEFKKK_KALJPLALDAM_OFFSET UNITYSDK_OFFSET(0x165A7F80)
#define JCNKGOEFKKK_NDMBDGKAJEK_OFFSET UNITYSDK_OFFSET(0x165A7D80)
#define JCNKGOEFKKK_OHHEEPFHMGK_OFFSET UNITYSDK_OFFSET(0x165A8520)

inline static constexpr unsigned int JCNKGOEFKKK_TypeDefinitionIndex = 65287;

	class JCNKGOEFKKK : public ::HEOLKMLMPML
	{
	public:
		::FMKEJLGKEMH* JKLBAAHFJDJ; // 0x10
		::RPG::Client::GridFightRoleSkillDetail* NJFFGCELHIM; // 0x18
		::System::Void _ctor(::RPG::Client::GridFightRoleSkillDetail* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRoleSkillDetail*))((::PBYTE)hIl2Cpp + JCNKGOEFKKK_CTOR_OFFSET))(this, a1);
		}

		::System::String* NDMBDGKAJEK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCNKGOEFKKK_NDMBDGKAJEK_OFFSET))(this);
		}

		::System::String* ACMPHJJOOHE(::FMKEJLGKEMH* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + JCNKGOEFKKK_ACMPHJJOOHE_OFFSET))(this, a1, a2);
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
