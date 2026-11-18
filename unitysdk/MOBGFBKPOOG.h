#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define MOBGFBKPOOG_FLDPDIKAJNF_OFFSET UNITYSDK_OFFSET(0x18B5C5D0)
#define MOBGFBKPOOG_GNEPLOLCDFI_OFFSET UNITYSDK_OFFSET(0x18B5C200)
#define MOBGFBKPOOG_KLCOOKNNHLG_OFFSET UNITYSDK_OFFSET(0x18B5BF60)
#define MOBGFBKPOOG_NAECMOIEDJL_OFFSET UNITYSDK_OFFSET(0x18B5C320)

inline static constexpr unsigned int MOBGFBKPOOG_TypeDefinitionIndex = 84266;

class MOBGFBKPOOG : public ::System::Object
{
public:
	static ::System::Void KLCOOKNNHLG(::UnityEngine::GameObject* NJOAJLDJCCJ, ::System::Boolean FIPHFGHNNBE)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOBGFBKPOOG_KLCOOKNNHLG_OFFSET))(NJOAJLDJCCJ, FIPHFGHNNBE);
	}

	static ::System::Boolean NAECMOIEDJL(::UnityEngine::GameObject* NJOAJLDJCCJ)
	{
		return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOBGFBKPOOG_NAECMOIEDJL_OFFSET))(NJOAJLDJCCJ);
	}

	static ::System::Boolean GNEPLOLCDFI()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOBGFBKPOOG_GNEPLOLCDFI_OFFSET))();
	}

	static ::System::Boolean FLDPDIKAJNF(::UnityEngine::GameObject* NJOAJLDJCCJ)
	{
		return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOBGFBKPOOG_FLDPDIKAJNF_OFFSET))(NJOAJLDJCCJ);
	}
};
