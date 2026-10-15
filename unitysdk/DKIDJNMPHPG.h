#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLFHMKMJNPK.h"
class FDPALAEIHPB;

#define DKIDJNMPHPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA002D0)

inline static constexpr unsigned int DKIDJNMPHPG_TypeDefinitionIndex = 42386;

	class DKIDJNMPHPG : public ::HLFHMKMJNPK
	{
	public:
		::System::Void _ctor(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + DKIDJNMPHPG_CTOR_OFFSET))(this, a1);
		}

	};
