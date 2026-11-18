#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class RenderMaterial; }
namespace System { class String; }

#define GGDNMCIEPOP_KBJJHGCKDPM_IKKEENHFBBF_OFFSET UNITYSDK_OFFSET(0x14CE3AA0)
#define GGDNMCIEPOP_KBJJHGCKDPM__CTOR_OFFSET UNITYSDK_OFFSET(0x14CE3A90)

inline static constexpr unsigned int GGDNMCIEPOP_KBJJHGCKDPM_TypeDefinitionIndex = 42992;

class GGDNMCIEPOP_KBJJHGCKDPM : public ::System::Object
{
public:
	::MoleMole::Config::RenderMaterial* PNPMMLNCDNK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGDNMCIEPOP_KBJJHGCKDPM__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::RenderMaterial* IKKEENHFBBF(::System::String* IPMMCGDMODG)
	{
		return ((::MoleMole::Config::RenderMaterial*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GGDNMCIEPOP_KBJJHGCKDPM_IKKEENHFBBF_OFFSET))(this, IPMMCGDMODG);
	}
};
