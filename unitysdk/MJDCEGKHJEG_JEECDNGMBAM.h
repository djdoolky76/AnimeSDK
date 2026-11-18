#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
class PHECEIPKGFA;
namespace System { template <typename T> class Action_1; }

#define MJDCEGKHJEG_JEECDNGMBAM_HJNDHNGLNKO_OFFSET UNITYSDK_OFFSET(0x12D8E5E0)
#define MJDCEGKHJEG_JEECDNGMBAM__CTOR_OFFSET UNITYSDK_OFFSET(0x12D8E5D0)

inline static constexpr unsigned int MJDCEGKHJEG_JEECDNGMBAM_TypeDefinitionIndex = 56420;

class MJDCEGKHJEG_JEECDNGMBAM : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* EJGDHCIBCJH; // 0x10
	::PHECEIPKGFA* NIHEFJBLPKH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_JEECDNGMBAM__CTOR_OFFSET))(this);
	}

	::System::Void HJNDHNGLNKO(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_JEECDNGMBAM_HJNDHNGLNKO_OFFSET))(this, PIIPCLCCOIG);
	}
};
