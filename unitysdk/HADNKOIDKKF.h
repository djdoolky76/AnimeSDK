#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class HADNKOIDKKF;

#define HADNKOIDKKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE7C440)
#define HADNKOIDKKF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE7C350)

inline static constexpr unsigned int HADNKOIDKKF_TypeDefinitionIndex = 14878;

	class HADNKOIDKKF : public ::System::Object
	{
	public:
		::System::UInt32 GDDPJLJKGEO; // 0x10
		::System::UInt32 LPCBFACBGAE; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HADNKOIDKKF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HADNKOIDKKF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HADNKOIDKKF*))((::PBYTE)hIl2Cpp + HADNKOIDKKF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
