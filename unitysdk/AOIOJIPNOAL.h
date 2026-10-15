#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenConditionType.h"
#include "unitysdk/System/Object.h"
class AOIOJIPNOAL;
class FCOEMCEDLNL;
namespace System { class String; }

#define AOIOJIPNOAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCEA6D0)
#define AOIOJIPNOAL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCEA590)

	class AOIOJIPNOAL : public ::System::Object
	{
	public:
		::System::String* NNACKOBKFGE; // 0x10
		::RPG::GameCore::HipplenConditionType GMPGDEINODK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOIOJIPNOAL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AOIOJIPNOAL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AOIOJIPNOAL*))((::PBYTE)hIl2Cpp + AOIOJIPNOAL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
