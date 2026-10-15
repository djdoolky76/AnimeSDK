#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FloorOperationType.h"
#include "unitysdk/System/Object.h"
class BPANGADOKAM;
class FCOEMCEDLNL;
namespace System { class String; }

#define BPANGADOKAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9F7140)
#define BPANGADOKAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9F7030)

	class BPANGADOKAM : public ::System::Object
	{
	public:
		::System::String* NNACKOBKFGE; // 0x10
		::RPG::GameCore::FloorOperationType GMPGDEINODK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPANGADOKAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BPANGADOKAM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BPANGADOKAM*))((::PBYTE)hIl2Cpp + BPANGADOKAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
