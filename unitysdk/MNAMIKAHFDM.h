#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class MNAMIKAHFDM;
namespace System { class String; }

#define MNAMIKAHFDM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1A6180)
#define MNAMIKAHFDM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1A6050)

inline static constexpr unsigned int MNAMIKAHFDM_TypeDefinitionIndex = 12487;

	class MNAMIKAHFDM : public ::System::Object
	{
	public:
		::System::String* MCCIHOMFKFK; // 0x10
		::System::UInt32 JGFADOCKGOO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNAMIKAHFDM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MNAMIKAHFDM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MNAMIKAHFDM*))((::PBYTE)hIl2Cpp + MNAMIKAHFDM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
