#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MonsterFunctionType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define NHKKAEBJNEN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1314C590)
#define NHKKAEBJNEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1314C570)

inline static constexpr unsigned int NHKKAEBJNEN_TypeDefinitionIndex = 60970;

class NHKKAEBJNEN : public ::System::Object
{
public:
	static ::Il2CppArray<::MoleMole::Config::MonsterFunctionType>** StaticGet_NELLKDPNNNP()
	{
		return (::Il2CppArray<::MoleMole::Config::MonsterFunctionType>**)Il2CppClass::FromTypeDefinitionIndex(NHKKAEBJNEN_TypeDefinitionIndex)->GetStaticField(0x42530);
	}
	::Il2CppArray<::MoleMole::Config::MonsterFunctionType>* KLACCJEKBGN; // 0x10
	::System::String* AHJIJEIEGCC; // 0x18
	::System::Boolean IDGPDGFHGID; // 0x20
	::System::Boolean KEPDMEFJHEE; // 0x21
	::System::Boolean DGCMFKGBOJL; // 0x22
	::System::Byte _padding0[0x1];
	::UnityEngine::Vector3 GDMPIAJHJCF; // 0x24
	::System::Boolean OGFKOKDOKIN; // 0x30
	::System::Boolean FANKPJHKLGA; // 0x31
	::System::Boolean JCKGGEJBPPC; // 0x32
	::System::Boolean JLNAAKAPEKJ; // 0x33
	::System::Boolean ECGEMOJKKGB; // 0x34
	::System::Boolean GLPIIDJLINO; // 0x35
	::System::Byte _padding1[0x2];
	::System::Single OMPDDBEDAJN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKKAEBJNEN__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHKKAEBJNEN__CCTOR_OFFSET))();
	}
};
