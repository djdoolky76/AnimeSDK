#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NNPDAHNCAMK.h"

#define LGDGPIPEMFE_CTOR_OFFSET UNITYSDK_OFFSET(0xB689270)

inline static constexpr unsigned int LGDGPIPEMFE_TypeDefinitionIndex = 62370;

	class LGDGPIPEMFE : public ::NNPDAHNCAMK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGDGPIPEMFE_CTOR_OFFSET))(this);
		}

	};
