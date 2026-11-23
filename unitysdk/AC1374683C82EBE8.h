#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A970A434E9CC38AD/FDDB78A80153CFFD.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/BC3145134F59AEB2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define AC1374683C82EBE8__CTOR_OFFSET UNITYSDK_OFFSET(0x19164E0)

inline static constexpr unsigned int AC1374683C82EBE8_TypeDefinitionIndex = 1534;

class AC1374683C82EBE8 : public ::E379DE61A548837D
{
public:
	::A970A434E9CC38AD::FDDB78A80153CFFD F562DA1C00CE60C6; // 0x38
	::E68AA4EB51923C98::BC3145134F59AEB2 F71AB452361949C7; // 0x3C
	::UnityEngine::Vector3 EE8B505B9D2B1840; // 0x40
	::System::Boolean A511F2BC11407590; // 0x4C
	::System::Byte _padding0[0x3];
	::UnityEngine::Quaternion A0FE9BD88AEBF8D9; // 0x50
	::System::Boolean A2408866762C5ACE; // 0x60
	::System::Boolean A4F36192F4529428; // 0x61
	::System::Boolean AF2D5470C3C4814D; // 0x62

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AC1374683C82EBE8__CTOR_OFFSET))(this);
	}
};
