#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MAFGFDMEHOG;
class MEHLONLGMGK;
namespace MoleMole { class UIBaseController; }

#define MAFGFDMEHOG_MDDFCHHIPMP_FKJLNLFLCLE_OFFSET UNITYSDK_OFFSET(0xD442000)
#define MAFGFDMEHOG_MDDFCHHIPMP__CTOR_OFFSET UNITYSDK_OFFSET(0xD441FF0)

inline static constexpr unsigned int MAFGFDMEHOG_MDDFCHHIPMP_TypeDefinitionIndex = 46026;

class MAFGFDMEHOG_MDDFCHHIPMP : public ::System::Object
{
public:
	::MAFGFDMEHOG* KLHPEBKNIFB; // 0x10
	::MoleMole::UIBaseController* DBEGNAMMHKA; // 0x18
	::MEHLONLGMGK* ACDDJPELOHC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFGFDMEHOG_MDDFCHHIPMP__CTOR_OFFSET))(this);
	}

	::System::Void FKJLNLFLCLE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFGFDMEHOG_MDDFCHHIPMP_FKJLNLFLCLE_OFFSET))(this);
	}
};
