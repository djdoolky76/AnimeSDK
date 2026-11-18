#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ILAGIDEHCJG;
namespace System { class Action; }

#define ILAGIDEHCJG_NFLBFEAJBJJ_CPGONFBDAFJ_OFFSET UNITYSDK_OFFSET(0x14A28CB0)
#define ILAGIDEHCJG_NFLBFEAJBJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14A28CA0)

inline static constexpr unsigned int ILAGIDEHCJG_NFLBFEAJBJJ_TypeDefinitionIndex = 56503;

class ILAGIDEHCJG_NFLBFEAJBJJ : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::ILAGIDEHCJG* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_NFLBFEAJBJJ__CTOR_OFFSET))(this);
	}

	::System::Void CPGONFBDAFJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAGIDEHCJG_NFLBFEAJBJJ_CPGONFBDAFJ_OFFSET))(this);
	}
};
