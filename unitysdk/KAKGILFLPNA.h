#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKDDEOLBGEI.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimMoveBakedConfig; }

#define KAKGILFLPNA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBB02E0)

	class KAKGILFLPNA : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimMoveBakedConfig* ENHIBABPIMP; // 0x10
		::DKDDEOLBGEI EFDGPNNMJFK; // 0x18
		::System::Single FMCAINKKPCL; // 0x50
		::System::UInt32 CAKDJNJIFAJ; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKGILFLPNA_CTOR_OFFSET))(this);
		}

	};
