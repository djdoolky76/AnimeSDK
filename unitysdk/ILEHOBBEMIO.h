#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ILEHOBBEMIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC36EA0)

inline static constexpr unsigned int ILEHOBBEMIO_TypeDefinitionIndex = 44710;

	class ILEHOBBEMIO : public ::System::Object
	{
	public:
		::System::Single FLIMFDOILEO; // 0x10
		::System::Single PMHMEGEJDGP; // 0x14
		::System::Boolean KEOKEELBKHI; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single IEHPFADHJFD; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEHOBBEMIO_CTOR_OFFSET))(this);
		}

	};
