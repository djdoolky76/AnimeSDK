#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define A781BC157EBF6DB2__CTOR_OFFSET UNITYSDK_OFFSET(0x19F6D10)

inline static constexpr unsigned int A781BC157EBF6DB2_TypeDefinitionIndex = 1775;

class A781BC157EBF6DB2 : public ::E379DE61A548837D
{
public:
	::UnityEngine::Vector3 E3745817B46098F1; // 0x38
	::System::Boolean F067277C9C5BFFB4; // 0x44
	::System::Byte _padding0[0x3];
	::UnityEngine::Quaternion B14F5F733E2AD130; // 0x48
	::System::Boolean F412DFCBFBDB5A48; // 0x58
	::System::Boolean F757048C04D59B58; // 0x59

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A781BC157EBF6DB2__CTOR_OFFSET))(this);
	}
};
