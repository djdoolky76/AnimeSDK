#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class GCIMMDDIFBJ;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define HFBNJOHANJG_DODLOJPNIAB_OFFSET UNITYSDK_OFFSET(0x15B44B70)
#define HFBNJOHANJG__CTOR_OFFSET UNITYSDK_OFFSET(0x771420)

inline static constexpr unsigned int HFBNJOHANJG_TypeDefinitionIndex = 57401;

struct alignas(8) HFBNJOHANJG
{
	::System::Boolean IJIIOGHDFKG; // 0x10
	::System::Byte _padding0[0x7];
	::UnityEngine::Material* OBCAEACJPFD; // 0x18
	::UnityEngine::GameObject* PDACHPLBKIE; // 0x20
	::GCIMMDDIFBJ* OBNLBMABFPF; // 0x28
	::System::String* KLMIGKPGHDN; // 0x30
	::System::String* BEBCHDABCCO; // 0x38

	::System::Void _ctor(::UnityEngine::Material* DNNJDDMLFEJ, ::UnityEngine::GameObject* IAPKABMDJNF, ::GCIMMDDIFBJ* AOKJEGNBALI, ::System::String* LOCHHOPFKFB, ::System::String* PKDJFFNNGJJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::GameObject*, ::GCIMMDDIFBJ*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HFBNJOHANJG__CTOR_OFFSET))(this, DNNJDDMLFEJ, IAPKABMDJNF, AOKJEGNBALI, LOCHHOPFKFB, PKDJFFNNGJJ);
	}

	static ::System::String* DODLOJPNIAB(::System::String* PHGBOCIDLEI, ::System::String* HIONLFKEGIA)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HFBNJOHANJG_DODLOJPNIAB_OFFSET))(PHGBOCIDLEI, HIONLFKEGIA);
	}
};
