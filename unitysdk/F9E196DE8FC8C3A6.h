#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define F9E196DE8FC8C3A6_A7C959942BAE119A_OFFSET UNITYSDK_OFFSET(0x2826DE0)
#define F9E196DE8FC8C3A6_B7480ED35B753156_OFFSET UNITYSDK_OFFSET(0x2826D50)
#define F9E196DE8FC8C3A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F9E196DE8FC8C3A6_TypeDefinitionIndex = 16871;

class F9E196DE8FC8C3A6 : public ::System::Object
{
public:
	::System::Int32 ECCEF972B1253756; // 0x10
	::System::Int32 EA0F88F24C146C86; // 0x14
	::System::Int32 B65F1DCAABE3AF47; // 0x18
	::System::Int32 B367737A50DE2DA3; // 0x1C
	::System::Int32 B7572BB1F7517E5E; // 0x20
	::System::Int32 F303E6F80F25BFF7; // 0x24
	::System::Int32 B4CC1BA494522E4B; // 0x28
	::System::Int32 B5C9A935AE1C520D; // 0x2C
	::System::Int32 E9558C51E9526131; // 0x30
	::System::Int32 EC6922281E3A5844; // 0x34
	::System::Int32 A8B4FCF00C3364D8; // 0x38

	::System::Int32 B7480ED35B753156(::System::Boolean BB19BC2DF86C4CE9, ::System::Boolean EF91FD6928932BF3, ::System::Int32 E57CA45462F14A22, ::System::Boolean B8931D92A009ACD4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + F9E196DE8FC8C3A6_B7480ED35B753156_OFFSET))(this, BB19BC2DF86C4CE9, EF91FD6928932BF3, E57CA45462F14A22, B8931D92A009ACD4);
	}

	::System::Boolean A7C959942BAE119A(::System::Int32 EB0A9C3A5003B8A8)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + F9E196DE8FC8C3A6_A7C959942BAE119A_OFFSET))(this, EB0A9C3A5003B8A8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F9E196DE8FC8C3A6__CTOR_OFFSET))(this);
	}
};
