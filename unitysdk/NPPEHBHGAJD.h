#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigPointScoreCalculatePipe; }

#define NPPEHBHGAJD__CCTOR_OFFSET UNITYSDK_OFFSET(0x106C97F0)

inline static constexpr unsigned int NPPEHBHGAJD_TypeDefinitionIndex = 89677;

class NPPEHBHGAJD : public ::System::Object
{
public:
	static ::MoleMole::ConfigPointScoreCalculatePipe** StaticGet_JAIKHDLMDBP()
	{
		return (::MoleMole::ConfigPointScoreCalculatePipe**)Il2CppClass::FromTypeDefinitionIndex(NPPEHBHGAJD_TypeDefinitionIndex)->GetStaticField(0x39C70);
	}
	static ::MoleMole::ConfigPointScoreCalculatePipe** StaticGet_JKHDCDEKCND()
	{
		return (::MoleMole::ConfigPointScoreCalculatePipe**)Il2CppClass::FromTypeDefinitionIndex(NPPEHBHGAJD_TypeDefinitionIndex)->GetStaticField(0x39C78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPPEHBHGAJD__CCTOR_OFFSET))();
	}
};
