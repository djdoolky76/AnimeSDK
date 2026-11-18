#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Object; }

#define ONOHPDOINGF_NNALOJDIANJ_OFFSET UNITYSDK_OFFSET(0x15FF2F80)

inline static constexpr unsigned int ONOHPDOINGF_TypeDefinitionIndex = 66552;

class ONOHPDOINGF : public ::System::Object
{
public:
	static ::System::Int32 NNALOJDIANJ(::UnityEngine::Object* BADJMNIDNID)
	{
		return ((::System::Int32(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + ONOHPDOINGF_NNALOJDIANJ_OFFSET))(BADJMNIDNID);
	}
};
