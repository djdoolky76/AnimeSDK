#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class JICLAHGGFJL;

#define JICLAHGGFJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0345F0)
#define JICLAHGGFJL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D034480)

inline static constexpr unsigned int JICLAHGGFJL_TypeDefinitionIndex = 11694;

	class JICLAHGGFJL : public ::System::Object
	{
	public:
		::System::Int32 OOGCAPCIJGN; // 0x10
		::System::Int32 JLLGOBPAGLD; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JICLAHGGFJL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JICLAHGGFJL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JICLAHGGFJL*))((::PBYTE)hIl2Cpp + JICLAHGGFJL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
