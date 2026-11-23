#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABEBA93AD61764EF.h"

namespace UnityEngine { class Texture2D; }

#define F8D60A80933FB619_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x28E8390)
#define F8D60A80933FB619__CTOR_OFFSET UNITYSDK_OFFSET(0x2865810)

inline static constexpr unsigned int F8D60A80933FB619_TypeDefinitionIndex = 16379;

class F8D60A80933FB619 : public ::ABEBA93AD61764EF
{
public:
	::UnityEngine::Texture2D* A83C2EB6925B2140; // 0x18
	::System::Single F569B15BCCC209B6; // 0x20
	::System::Single B355215F41CA5489; // 0x24
	::System::Single E93C44247AF1CC81; // 0x28
	::System::Single F2DC24A556A090A7; // 0x2C
	::System::Single F1C8E6683727FFA0; // 0x30
	::System::Single FA638C3A45C04A3B; // 0x34
	::System::Single FC22DCA6AF307D08; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F8D60A80933FB619__CTOR_OFFSET))(this);
	}

	::System::Boolean FC3208D7B8C7EE04(::F8D60A80933FB619* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::F8D60A80933FB619*))((::PBYTE)hIl2Cpp + F8D60A80933FB619_FC3208D7B8C7EE04_OFFSET))(this, BEEE7A5A60941632);
	}
};
