#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FCLEMGPEMJJ_BLBIIBDHFNF_CTOR_OFFSET UNITYSDK_OFFSET(0x156C1EC0)
#define FCLEMGPEMJJ_BLBIIBDHFNF_GET_CHIPID_OFFSET UNITYSDK_OFFSET(0x156C1EA0)
#define FCLEMGPEMJJ_BLBIIBDHFNF_SET_CHIPID_OFFSET UNITYSDK_OFFSET(0x156C1EB0)

inline static constexpr unsigned int FCLEMGPEMJJ_BLBIIBDHFNF_TypeDefinitionIndex = 79464;

	class FCLEMGPEMJJ_BLBIIBDHFNF : public ::System::Object
	{
	public:
		::System::UInt32 _ChipID_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ_BLBIIBDHFNF_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ChipID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ_BLBIIBDHFNF_GET_CHIPID_OFFSET))(this);
		}

		::System::Void set_ChipID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ_BLBIIBDHFNF_SET_CHIPID_OFFSET))(this, a1);
		}

	};
