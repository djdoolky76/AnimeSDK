#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGANMKKLJJI_JNJDLBHHJKB.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define EGANMKKLJJI_IMDABAJIJCH_OFFSET UNITYSDK_OFFSET(0x16994620)
#define EGANMKKLJJI__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16994610)
#define EGANMKKLJJI__CTOR_2_OFFSET UNITYSDK_OFFSET(0x16994600)
#define EGANMKKLJJI__CTOR_OFFSET UNITYSDK_OFFSET(0x169945E0)

inline static constexpr unsigned int EGANMKKLJJI_TypeDefinitionIndex = 54889;

class EGANMKKLJJI : public ::UnityEngine::PropertyAttribute
{
public:
	::System::Int32 FCNBMIJDKFF; // 0x10
	::EGANMKKLJJI_JNJDLBHHJKB NGHICGDOLHJ; // 0x14
	::System::Int32 ICBIINFEFOM; // 0x18

	::System::Void _ctor(::System::Int32 EGAGCJIBMPC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EGANMKKLJJI__CTOR_OFFSET))(this, EGAGCJIBMPC);
	}

	::System::Void _ctor_1(::System::Int32 EGAGCJIBMPC, ::System::Int32 IBCCONDOMNF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EGANMKKLJJI__CTOR_1_OFFSET))(this, EGAGCJIBMPC, IBCCONDOMNF);
	}

	::System::Void _ctor_2(::EGANMKKLJJI_JNJDLBHHJKB GEJCKFFFKCL, ::System::Int32 EGAGCJIBMPC, ::System::Int32 IBCCONDOMNF)
	{
		return ((::System::Void(*)(::PVOID, ::EGANMKKLJJI_JNJDLBHHJKB, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EGANMKKLJJI__CTOR_2_OFFSET))(this, GEJCKFFFKCL, EGAGCJIBMPC, IBCCONDOMNF);
	}

	::System::Int32 IMDABAJIJCH(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EGANMKKLJJI_IMDABAJIJCH_OFFSET))(this, EGEGIMGMJHN);
	}
};
