#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }

#define EDEGFGIEHJE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16BD2EB0)

inline static constexpr unsigned int EDEGFGIEHJE_TypeDefinitionIndex = 73442;

struct alignas(8) EDEGFGIEHJE
{
	static ::System::String** StaticGet_FAKOJBNDEKI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(EDEGFGIEHJE_TypeDefinitionIndex)->GetStaticField(0x3F9E0);
	}
	::System::String* KIHGNGKBADE; // 0x10
	::System::String* EBLKBABPBEB; // 0x18
	::System::Boolean HCDMKEBKAGF; // 0x20
	::System::Byte _padding0[0x3];
	::System::Int32 BNKHCNKJKFO; // 0x24
	::MoleMole::Config::ConfigPosRot* KPAPPDGCNPE; // 0x28
	::MoleMole::Config::ConfigPosRot* BANODIDMKOA; // 0x30
	::MoleMole::Config::ConfigPosRot* AEGJIEMBDLC; // 0x38

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDEGFGIEHJE__CCTOR_OFFSET))();
	}
};
