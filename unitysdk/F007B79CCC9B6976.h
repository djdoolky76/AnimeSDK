#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define F007B79CCC9B6976__CTOR_OFFSET UNITYSDK_OFFSET(0x1681E00)

inline static constexpr unsigned int F007B79CCC9B6976_TypeDefinitionIndex = 420;

class F007B79CCC9B6976 : public ::E379DE61A548837D
{
public:
	::System::Boolean F7B0AC4F8F35F2D7; // 0x38
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 B95F3EB76109AD75; // 0x3C
	::System::Boolean F442C19E32FF9219; // 0x48
	::System::Byte _padding1[0x3];
	::UnityEngine::Quaternion A0FE9BD88AEBF8D9; // 0x4C
	::System::Boolean B1E6B38978F09161; // 0x5C
	::System::Byte _padding2[0x3];
	::UnityEngine::Vector3 BA5705F0486DCA2D; // 0x60
	::System::Boolean AF1C5C04BD4B6862; // 0x6C
	::System::Boolean F488B039CFAC3348; // 0x6D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F007B79CCC9B6976__CTOR_OFFSET))(this);
	}
};
