#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKDDEOLBGEI.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimMoveBakedConfig; }

#define KAKGILFLPNA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE2AB60)

inline static constexpr unsigned int KAKGILFLPNA_TypeDefinitionIndex = 44252;

	class KAKGILFLPNA : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimMoveBakedConfig* ENHIBABPIMP; // 0x10
		::System::Single FMCAINKKPCL; // 0x18
		::System::UInt32 CAKDJNJIFAJ; // 0x1C
		::DKDDEOLBGEI EFDGPNNMJFK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKGILFLPNA_CTOR_OFFSET))(this);
		}

	};
