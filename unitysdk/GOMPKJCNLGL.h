#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ELKANIHDJPJ;

#define GOMPKJCNLGL_LJPJBPCIEAF_OFFSET UNITYSDK_OFFSET(0x15F40120)
#define GOMPKJCNLGL_MHGIFJGGPGM_OFFSET UNITYSDK_OFFSET(0x15F40240)
#define GOMPKJCNLGL__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F40200)
#define GOMPKJCNLGL__CTOR_OFFSET UNITYSDK_OFFSET(0x15F401F0)

inline static constexpr unsigned int GOMPKJCNLGL_TypeDefinitionIndex = 70599;

class GOMPKJCNLGL : public ::System::Object
{
public:
	static ::GOMPKJCNLGL** StaticGet_NJLLMPCDOEB()
	{
		return (::GOMPKJCNLGL**)Il2CppClass::FromTypeDefinitionIndex(GOMPKJCNLGL_TypeDefinitionIndex)->GetStaticField(0x463B0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMPKJCNLGL__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOMPKJCNLGL__CCTOR_OFFSET))();
	}

	::ELKANIHDJPJ* LJPJBPCIEAF(::System::Int32 OBNIAHNMHPF)
	{
		return ((::ELKANIHDJPJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOMPKJCNLGL_LJPJBPCIEAF_OFFSET))(this, OBNIAHNMHPF);
	}

	static ::System::Boolean MHGIFJGGPGM(::System::Int32 BBMDGPCOFOF)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + GOMPKJCNLGL_MHGIFJGGPGM_OFFSET))(BBMDGPCOFOF);
	}
};
