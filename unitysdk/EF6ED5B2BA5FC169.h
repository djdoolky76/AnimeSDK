#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F11373335EF4CF31;
class F90B6D28605CF0AE;

#define EF6ED5B2BA5FC169__CTOR_OFFSET UNITYSDK_OFFSET(0x3DF8390)

inline static constexpr unsigned int EF6ED5B2BA5FC169_TypeDefinitionIndex = 14677;

class EF6ED5B2BA5FC169 : public ::System::Object
{
public:
	::F90B6D28605CF0AE* A71C2CDC23A58C38; // 0x10
	::System::Int32 F75DBCA7D22CC480; // 0x18
	::System::Byte _padding0[0x4];
	::Il2CppArray<::System::Byte>* E053FF8A1666756C; // 0x20
	::F11373335EF4CF31* BDE76144468B1800; // 0x28

	::System::Void _ctor(::F11373335EF4CF31* A3C9EDC9FD33B5E4)
	{
		return ((::System::Void(*)(::PVOID, ::F11373335EF4CF31*))((::PBYTE)hIl2Cpp + EF6ED5B2BA5FC169__CTOR_OFFSET))(this, A3C9EDC9FD33B5E4);
	}
};
