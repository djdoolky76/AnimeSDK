#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A418C49FA6A8C1F7/B08319C9C9F35174.h"
#include "unitysdk/A418C49FA6A8C1F7/F59126ADF9F7E629.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define FE6E3757953F5D45__CTOR_1_OFFSET UNITYSDK_OFFSET(0x4248D90)
#define FE6E3757953F5D45__CTOR_OFFSET UNITYSDK_OFFSET(0x4248D50)

inline static constexpr unsigned int FE6E3757953F5D45_TypeDefinitionIndex = 13108;

class FE6E3757953F5D45 : public ::System::Attribute
{
public:
	::Il2CppArray<::System::Type*>* A0C0B9E1455E2EEE; // 0x10
	::A418C49FA6A8C1F7::F59126ADF9F7E629 E65AFA8AA5B0F093; // 0x18

	::System::Void _ctor(::Il2CppArray<::System::Type*>* A0C0B9E1455E2EEE)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + FE6E3757953F5D45__CTOR_OFFSET))(this, A0C0B9E1455E2EEE);
	}

	::System::Void _ctor_1(::A418C49FA6A8C1F7::B08319C9C9F35174 F6DD5CD172875B37)
	{
		return ((::System::Void(*)(::PVOID, ::A418C49FA6A8C1F7::B08319C9C9F35174))((::PBYTE)hIl2Cpp + FE6E3757953F5D45__CTOR_1_OFFSET))(this, F6DD5CD172875B37);
	}
};
