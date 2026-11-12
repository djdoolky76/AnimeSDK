#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AGGHHCLPALK_CTOR_OFFSET UNITYSDK_OFFSET(0xD5E6990)

inline static constexpr unsigned int AGGHHCLPALK_TypeDefinitionIndex = 57542;

	class AGGHHCLPALK : public ::System::Object
	{
	public:
		::System::UInt32 MBCACNKDMFG; // 0x10
		::System::UInt32 AAGKEBFHLMC; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGHHCLPALK_CTOR_OFFSET))(this);
		}

	};
