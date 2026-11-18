#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define NCCPEHMPCOO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16B600A0)

inline static constexpr unsigned int NCCPEHMPCOO_TypeDefinitionIndex = 64887;

class NCCPEHMPCOO : public ::System::Object
{
public:
	static ::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NCCPEHMPCOO_LODDGCEMGJO_OFFSET))(EJGDHCIBCJH);
	}
};
