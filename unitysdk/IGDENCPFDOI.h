#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IGDENCPFDOI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD3BB70)

inline static constexpr unsigned int IGDENCPFDOI_TypeDefinitionIndex = 43426;

	class IGDENCPFDOI : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* CCJHPPFPNDK; // 0x10
		::Il2CppArray<::System::UInt32>* PKOJHPBOBKM; // 0x18
		::System::Boolean FHMMAOOCOPN; // 0x20
		::System::Boolean HMAIEJIODHO; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDENCPFDOI_CTOR_OFFSET))(this);
		}

	};
