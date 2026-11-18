#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IAAHGDFHCNB_DBELDLBDHAO;
namespace System { class String; }

#define IAAHGDFHCNB_PGBABCNIKMJ_BBLHEBGGFDH_OFFSET UNITYSDK_OFFSET(0x1819D710)
#define IAAHGDFHCNB_PGBABCNIKMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1819D700)

inline static constexpr unsigned int IAAHGDFHCNB_PGBABCNIKMJ_TypeDefinitionIndex = 88130;

class IAAHGDFHCNB_PGBABCNIKMJ : public ::System::Object
{
public:
	::IAAHGDFHCNB_DBELDLBDHAO* FGBNBFHOKAA; // 0x10
	::System::String* CJBJONJDOLI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAHGDFHCNB_PGBABCNIKMJ__CTOR_OFFSET))(this);
	}

	::System::Void BBLHEBGGFDH(::Il2CppArray<::System::Byte>* AOADDGCDELC)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IAAHGDFHCNB_PGBABCNIKMJ_BBLHEBGGFDH_OFFSET))(this, AOADDGCDELC);
	}
};
