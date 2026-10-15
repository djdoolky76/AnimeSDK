#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class NIOHDNNONNN;

#define NIOHDNNONNN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D214BB0)
#define NIOHDNNONNN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D214A20)

inline static constexpr unsigned int NIOHDNNONNN_TypeDefinitionIndex = 13945;

	class NIOHDNNONNN : public ::System::Object
	{
	public:
		::System::UInt32 IIAJADPLGLH; // 0x10
		::System::UInt32 JNFGLIOMLEJ; // 0x14
		::System::Boolean JOPENKFKBOH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIOHDNNONNN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NIOHDNNONNN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NIOHDNNONNN*))((::PBYTE)hIl2Cpp + NIOHDNNONNN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
