#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class IDBNLIKLDKJ;

#define IDBNLIKLDKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEE4F80)
#define IDBNLIKLDKJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEE4E70)

	class IDBNLIKLDKJ : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* LMEBOHHDIAG; // 0x10
		::System::UInt32 DBLDCKODNEN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBNLIKLDKJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IDBNLIKLDKJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IDBNLIKLDKJ*))((::PBYTE)hIl2Cpp + IDBNLIKLDKJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
