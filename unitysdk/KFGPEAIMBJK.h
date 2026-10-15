#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class KFGPEAIMBJK;
namespace System { class String; }

#define KFGPEAIMBJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D08CEE0)
#define KFGPEAIMBJK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D08CDE0)

	class KFGPEAIMBJK : public ::System::Object
	{
	public:
		::System::String* OENAMINOLLF; // 0x10
		::System::UInt32 MNAKIEOGPDK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGPEAIMBJK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KFGPEAIMBJK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KFGPEAIMBJK*))((::PBYTE)hIl2Cpp + KFGPEAIMBJK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
