#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNLAGKLALB.h"
#include "unitysdk/PGAJOCOBJMB_1.h"
#include "unitysdk/System/ValueType.h"

#define BFEFMAIKHFE__CCTOR_OFFSET UNITYSDK_OFFSET(0x128A4B90)
#define BFEFMAIKHFE__CTOR_OFFSET UNITYSDK_OFFSET(0x358470)

inline static constexpr unsigned int BFEFMAIKHFE_TypeDefinitionIndex = 84904;

struct alignas(8) BFEFMAIKHFE
{
	static ::BFEFMAIKHFE* StaticGet_DDGNFJDLOKA()
	{
		return (::BFEFMAIKHFE*)Il2CppClass::FromTypeDefinitionIndex(BFEFMAIKHFE_TypeDefinitionIndex)->GetStaticField(0xC430);
	}
	::PGAJOCOBJMB_1<::CHNLAGKLALB> JMINOGAOFIL; // 0x10

	::System::Void _ctor(::PGAJOCOBJMB_1<::CHNLAGKLALB> HENGGNJMOEN)
	{
		return ((::System::Void(*)(::PVOID, ::PGAJOCOBJMB_1<::CHNLAGKLALB>))((::PBYTE)hIl2Cpp + BFEFMAIKHFE__CTOR_OFFSET))(this, HENGGNJMOEN);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFEFMAIKHFE__CCTOR_OFFSET))();
	}
};
