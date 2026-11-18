#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Photo { class BoneSocketConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define APDFDFADELO___C_CILEKMAMFJA_OFFSET UNITYSDK_OFFSET(0x185447A0)
#define APDFDFADELO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18544750)
#define APDFDFADELO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18544790)

inline static constexpr unsigned int APDFDFADELO___c_TypeDefinitionIndex = 91354;

class APDFDFADELO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(APDFDFADELO___c_TypeDefinitionIndex)->GetStaticField(0x36D00);
	}
	static ::System::Func_2<::MoleMole::Photo::BoneSocketConfig*, ::MoleMole::Photo::BoneSocketConfig*>** StaticGet___9__8_0()
	{
		return (::System::Func_2<::MoleMole::Photo::BoneSocketConfig*, ::MoleMole::Photo::BoneSocketConfig*>**)Il2CppClass::FromTypeDefinitionIndex(APDFDFADELO___c_TypeDefinitionIndex)->GetStaticField(0x36D08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APDFDFADELO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APDFDFADELO___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Photo::BoneSocketConfig* CILEKMAMFJA(::MoleMole::Photo::BoneSocketConfig* IPMMCGDMODG)
	{
		return ((::MoleMole::Photo::BoneSocketConfig*(*)(::PVOID, ::MoleMole::Photo::BoneSocketConfig*))((::PBYTE)hIl2Cpp + APDFDFADELO___C_CILEKMAMFJA_OFFSET))(this, IPMMCGDMODG);
	}
};
