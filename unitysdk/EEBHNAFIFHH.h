#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHFDEBPOBOG.h"
#include "unitysdk/System/Object.h"

#define EEBHNAFIFHH__CCTOR_OFFSET UNITYSDK_OFFSET(0xFDD91A0)
#define EEBHNAFIFHH__CTOR_OFFSET UNITYSDK_OFFSET(0xFDD9180)

inline static constexpr unsigned int EEBHNAFIFHH_TypeDefinitionIndex = 70244;

class EEBHNAFIFHH : public ::System::Object
{
public:
	static ::System::Single* StaticGet_LEHCAKGLGAH()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(EEBHNAFIFHH_TypeDefinitionIndex)->GetStaticField(0xC8D0);
	}
	static ::System::Int32* StaticGet_FBGGDPOHKAB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EEBHNAFIFHH_TypeDefinitionIndex)->GetStaticField(0xC8D4);
	}
	static ::System::Single* StaticGet_MIHLMNJMAPK()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(EEBHNAFIFHH_TypeDefinitionIndex)->GetStaticField(0xC8D8);
	}
	::System::Single OPNLKMKNLAH; // 0x10
	::System::UInt32 IIFAHCHDEOB; // 0x14
	::HHFDEBPOBOG EICDGJPHHHJ; // 0x18
	::System::Single GGOIIAAAHOE; // 0x1C
	::System::Boolean CHIEMIEJBEE; // 0x20
	::System::Boolean DIHNCJDKDIL; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEBHNAFIFHH__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEBHNAFIFHH__CCTOR_OFFSET))();
	}
};
