#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FCAF83CD1FC8CAB9_A2784C42D31F802C_OFFSET UNITYSDK_OFFSET(0x2747660)
#define FCAF83CD1FC8CAB9_E20DF337BAD48C22_OFFSET UNITYSDK_OFFSET(0x27476F0)
#define FCAF83CD1FC8CAB9_E65923718502C98F_OFFSET UNITYSDK_OFFSET(0x2747740)
#define FCAF83CD1FC8CAB9_E77525A11A288D56_OFFSET UNITYSDK_OFFSET(0x2747850)
#define FCAF83CD1FC8CAB9_F25AB5B4453E6546_OFFSET UNITYSDK_OFFSET(0x27476C0)
#define FCAF83CD1FC8CAB9_F80CF8E03E85D450_OFFSET UNITYSDK_OFFSET(0x2747690)
#define FCAF83CD1FC8CAB9__CCTOR_OFFSET UNITYSDK_OFFSET(0x2747580)
#define FCAF83CD1FC8CAB9__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FCAF83CD1FC8CAB9_TypeDefinitionIndex = 3071;

class FCAF83CD1FC8CAB9 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_FBAFC1B028E13BB8()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FCAF83CD1FC8CAB9_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Boolean E65923718502C98F()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FCAF83CD1FC8CAB9_E65923718502C98F_OFFSET))();
	}

	static ::Il2CppArray<::System::String*>* E20DF337BAD48C22()
	{
		return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + FCAF83CD1FC8CAB9_E20DF337BAD48C22_OFFSET))();
	}

	static ::System::String* F25AB5B4453E6546()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FCAF83CD1FC8CAB9_F25AB5B4453E6546_OFFSET))();
	}

	static ::System::String* A2784C42D31F802C()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FCAF83CD1FC8CAB9_A2784C42D31F802C_OFFSET))();
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCAF83CD1FC8CAB9__CCTOR_OFFSET))();
	}

	static ::System::String* F80CF8E03E85D450()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FCAF83CD1FC8CAB9_F80CF8E03E85D450_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAF83CD1FC8CAB9__CTOR_OFFSET))(this);
	}

	static ::System::String* E77525A11A288D56()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FCAF83CD1FC8CAB9_E77525A11A288D56_OFFSET))();
	}
};
