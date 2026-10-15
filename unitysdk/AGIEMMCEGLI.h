#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMDKMIJLJFH.h"
class FBMAGNGKMNI;

#define AGIEMMCEGLI_CTOR_OFFSET UNITYSDK_OFFSET(0xCF2BC90)

inline static constexpr unsigned int AGIEMMCEGLI_TypeDefinitionIndex = 77634;

	class AGIEMMCEGLI : public ::HMDKMIJLJFH
	{
	public:
		::System::Void _ctor(::FBMAGNGKMNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBMAGNGKMNI*))((::PBYTE)hIl2Cpp + AGIEMMCEGLI_CTOR_OFFSET))(this, a1);
		}

	};
