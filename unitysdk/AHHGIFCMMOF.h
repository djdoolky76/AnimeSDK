#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MBNHGIMGNHE;

#define AHHGIFCMMOF_CJBEPDHDHMA_OFFSET UNITYSDK_OFFSET(0x1E5DD680)
#define AHHGIFCMMOF_GBGINDGJGEG_OFFSET UNITYSDK_OFFSET(0x1E5DD210)
#define AHHGIFCMMOF_MCGOOKBLCMI_OFFSET UNITYSDK_OFFSET(0x1E5DDAF0)

inline static constexpr unsigned int AHHGIFCMMOF_TypeDefinitionIndex = 34095;

class AHHGIFCMMOF : public ::System::Object
{
public:
	static ::System::Boolean GBGINDGJGEG(::MBNHGIMGNHE* CPNLILDAHJD, ::System::UInt16& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::MBNHGIMGNHE*, ::System::UInt16&))((::PBYTE)hIl2Cpp + AHHGIFCMMOF_GBGINDGJGEG_OFFSET))(CPNLILDAHJD, EGEGIMGMJHN);
	}

	static ::System::Boolean CJBEPDHDHMA(::MBNHGIMGNHE* CPNLILDAHJD, ::System::UInt32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::MBNHGIMGNHE*, ::System::UInt32&))((::PBYTE)hIl2Cpp + AHHGIFCMMOF_CJBEPDHDHMA_OFFSET))(CPNLILDAHJD, EGEGIMGMJHN);
	}

	static ::System::Boolean MCGOOKBLCMI(::MBNHGIMGNHE* CPNLILDAHJD, ::System::UInt64& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::MBNHGIMGNHE*, ::System::UInt64&))((::PBYTE)hIl2Cpp + AHHGIFCMMOF_MCGOOKBLCMI_OFFSET))(CPNLILDAHJD, EGEGIMGMJHN);
	}
};
