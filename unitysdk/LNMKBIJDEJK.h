#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class LNMKBIJDEJK;

#define LNMKBIJDEJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D11EB20)
#define LNMKBIJDEJK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D11E9A0)

	class LNMKBIJDEJK : public ::System::Object
	{
	public:
		::System::UInt32 HIHLLBFEONI; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID JFKMCIFGHLK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNMKBIJDEJK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LNMKBIJDEJK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LNMKBIJDEJK*))((::PBYTE)hIl2Cpp + LNMKBIJDEJK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
