#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOLDGFEBJNO_CTOR_OFFSET UNITYSDK_OFFSET(0x158EC460)

inline static constexpr unsigned int FOLDGFEBJNO_TypeDefinitionIndex = 54318;

	class FOLDGFEBJNO : public ::System::Object
	{
	public:
		::System::UInt32 JIDLKIHJLFL; // 0x10
		::System::UInt32 AAGKEBFHLMC; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOLDGFEBJNO_CTOR_OFFSET))(this);
		}

	};
