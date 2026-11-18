#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KMEKMOAHFHB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define HGIACIDLMFP_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x146F9D30)
#define HGIACIDLMFP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x146F9620)
#define HGIACIDLMFP__CTOR_OFFSET UNITYSDK_OFFSET(0x146F9D20)

inline static constexpr unsigned int HGIACIDLMFP_TypeDefinitionIndex = 62267;

class HGIACIDLMFP : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* MNBFHEJELDO; // 0x10
	::System::Single PBFBDBCMALP; // 0x18
	::System::Single BDEDDEGJFKL; // 0x1C
	::System::Single NFIGNCAHJJA; // 0x20
	::System::Single LJKINFADFEP; // 0x24
	::System::Single AEOAPMADONK; // 0x28
	::System::Single OEOACEKAHBK; // 0x2C
	::UnityEngine::Vector3 EGEGIMGMJHN; // 0x30
	::KMEKMOAHFHB OBNIAHNMHPF; // 0x3C
	::System::Single ELHMOANKHFM; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGIACIDLMFP__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGIACIDLMFP_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGIACIDLMFP_DPIHOJBBGLA_OFFSET))(this);
	}
};
