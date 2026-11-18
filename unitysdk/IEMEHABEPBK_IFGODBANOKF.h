#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Code::Logic::Data::ScriptObject::Level { class MoveCoordinate; }

#define IEMEHABEPBK_IFGODBANOKF_JENHNKDNHOB_OFFSET UNITYSDK_OFFSET(0xEA1A7F0)
#define IEMEHABEPBK_IFGODBANOKF__CTOR_OFFSET UNITYSDK_OFFSET(0xEA1A7E0)

inline static constexpr unsigned int IEMEHABEPBK_IFGODBANOKF_TypeDefinitionIndex = 92695;

class IEMEHABEPBK_IFGODBANOKF : public ::System::Object
{
public:
	::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::MoveCoordinate*>* DJLOKMMLFJC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEMEHABEPBK_IFGODBANOKF__CTOR_OFFSET))(this);
	}

	::System::Int32 JENHNKDNHOB(::System::Int32 KILPCOMOCMD, ::System::Int32 BBCODANAFGI)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IEMEHABEPBK_IFGODBANOKF_JENHNKDNHOB_OFFSET))(this, KILPCOMOCMD, BBCODANAFGI);
	}
};
