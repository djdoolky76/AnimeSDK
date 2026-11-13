#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGMMFJHJECA.h"

#define ABDEIMLGPPP_CTOR_OFFSET UNITYSDK_OFFSET(0x18C9FCC0)
#define ABDEIMLGPPP_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x18C9FB80)

inline static constexpr unsigned int ABDEIMLGPPP_TypeDefinitionIndex = 65584;

	class ABDEIMLGPPP : public ::HGMMFJHJECA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDEIMLGPPP_CTOR_OFFSET))(this);
		}

		::System::Double KFGJEKJHIMB()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDEIMLGPPP_KFGJEKJHIMB_OFFSET))(this);
		}

	};
