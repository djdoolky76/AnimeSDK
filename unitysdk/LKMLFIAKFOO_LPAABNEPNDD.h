#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class LKMLFIAKFOO;
namespace System { class Action; }

#define LKMLFIAKFOO_LPAABNEPNDD_JCFIAHHNADB_OFFSET UNITYSDK_OFFSET(0x184FDF80)
#define LKMLFIAKFOO_LPAABNEPNDD__CTOR_OFFSET UNITYSDK_OFFSET(0x184FDF70)

inline static constexpr unsigned int LKMLFIAKFOO_LPAABNEPNDD_TypeDefinitionIndex = 43601;

class LKMLFIAKFOO_LPAABNEPNDD : public ::System::Object
{
public:
	::LKMLFIAKFOO* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18
	::System::Int32 ECKMALONJCL; // 0x20
	::UnityEngine::Vector3 OHOGDOMNHNK; // 0x24
	::System::Int32 ANJFMPBLEHI; // 0x30
	::System::Int32 EGCGJNIJLBN; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_LPAABNEPNDD__CTOR_OFFSET))(this);
	}

	::System::Void JCFIAHHNADB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_LPAABNEPNDD_JCFIAHHNADB_OFFSET))(this);
	}
};
