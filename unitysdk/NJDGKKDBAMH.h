#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class NJDGKKDBAMH;

#define NJDGKKDBAMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E7A90)
#define NJDGKKDBAMH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1E7970)

inline static constexpr unsigned int NJDGKKDBAMH_TypeDefinitionIndex = 14630;

	class NJDGKKDBAMH : public ::System::Object
	{
	public:
		::System::UInt32 APAKCBFMCAB; // 0x10
		::System::UInt32 PIDHMKCOFAE; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJDGKKDBAMH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NJDGKKDBAMH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NJDGKKDBAMH*))((::PBYTE)hIl2Cpp + NJDGKKDBAMH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
