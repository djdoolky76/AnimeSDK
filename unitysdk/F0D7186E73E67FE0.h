#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FA9F4348D6D5FDDA.h"

class FCF2A17764106DAB;
namespace System { template <typename T> class Action_1; }

#define F0D7186E73E67FE0_F84EAC6D5296FD94_OFFSET UNITYSDK_OFFSET(0x184CA30)
#define F0D7186E73E67FE0_FA432F43E853386A_OFFSET UNITYSDK_OFFSET(0x184C9B0)
#define F0D7186E73E67FE0__CTOR_OFFSET UNITYSDK_OFFSET(0x16572C0)

inline static constexpr unsigned int F0D7186E73E67FE0_TypeDefinitionIndex = 1226;

class F0D7186E73E67FE0 : public ::FA9F4348D6D5FDDA
{
public:
	::FCF2A17764106DAB* E495F34BFF6CD57F; // 0x160
	::System::Action_1<::FCF2A17764106DAB*>* FCCD2716B1B4CDF5; // 0x168

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F0D7186E73E67FE0__CTOR_OFFSET))(this);
	}

	::System::Void F84EAC6D5296FD94(::System::Action_1<::FCF2A17764106DAB*>* FABBF4F55603A392)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::FCF2A17764106DAB*>*))((::PBYTE)hIl2Cpp + F0D7186E73E67FE0_F84EAC6D5296FD94_OFFSET))(this, FABBF4F55603A392);
	}

	::System::Void FA432F43E853386A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F0D7186E73E67FE0_FA432F43E853386A_OFFSET))(this);
	}
};
