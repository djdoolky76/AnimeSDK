#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AB642D1382756991;
class E44CD09E8766BD58;

#define E697300F1614B92C__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E697300F1614B92C_TypeDefinitionIndex = 1256;

class E697300F1614B92C : public ::E379DE61A548837D
{
public:
	::System::UInt32 E21B3114ADEEE8A1; // 0x38
	::UnityEngine::Vector3 EE8B505B9D2B1840; // 0x3C
	::UnityEngine::Quaternion A0FE9BD88AEBF8D9; // 0x48
	::AB642D1382756991* B8B98F546463D732; // 0x58
	::E44CD09E8766BD58* BD6C42EE9D8C7862; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E697300F1614B92C__CTOR_OFFSET))(this);
	}
};
