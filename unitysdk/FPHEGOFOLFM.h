#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenGameGradeType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class FPHEGOFOLFM;
namespace System { class String; }

#define FPHEGOFOLFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE1AD30)
#define FPHEGOFOLFM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE1ABF0)

	class FPHEGOFOLFM : public ::System::Object
	{
	public:
		::System::String* NNACKOBKFGE; // 0x10
		::RPG::GameCore::HipplenGameGradeType GMPGDEINODK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPHEGOFOLFM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FPHEGOFOLFM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FPHEGOFOLFM*))((::PBYTE)hIl2Cpp + FPHEGOFOLFM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
