#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Cinemachine { class CinemachineVirtualCamera; }

#define IIMEBHGNNKP_HIEPBDHAPIE_CTOR_OFFSET UNITYSDK_OFFSET(0x17408BF0)

inline static constexpr unsigned int IIMEBHGNNKP_HIEPBDHAPIE_TypeDefinitionIndex = 81543;

	class IIMEBHGNNKP_HIEPBDHAPIE : public ::System::Object
	{
	public:
		::Cinemachine::CinemachineVirtualCamera* ODPDOBEGCOE; // 0x10
		::System::Single OFJGJBFKOAM; // 0x18
		::System::Single PMHMEGEJDGP; // 0x1C
		::System::Boolean IOBJFEJFLJP; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single HKOEMLMGHFI; // 0x24
		::System::Single IEHPFADHJFD; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_HIEPBDHAPIE_CTOR_OFFSET))(this);
		}

	};
