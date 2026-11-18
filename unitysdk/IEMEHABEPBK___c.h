#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Code::Logic::Data::ScriptObject::Level { class PatternTimeline; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define IEMEHABEPBK___C_DMIFGMEKFGH_OFFSET UNITYSDK_OFFSET(0x16F62110)
#define IEMEHABEPBK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F620C0)
#define IEMEHABEPBK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16F62100)

inline static constexpr unsigned int IEMEHABEPBK___c_TypeDefinitionIndex = 92696;

class IEMEHABEPBK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IEMEHABEPBK___c_TypeDefinitionIndex)->GetStaticField(0x3E040);
	}
	static ::System::Func_2<::Code::Logic::Data::ScriptObject::Level::PatternTimeline*, ::System::Int32>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::Code::Logic::Data::ScriptObject::Level::PatternTimeline*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IEMEHABEPBK___c_TypeDefinitionIndex)->GetStaticField(0x3E048);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEMEHABEPBK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEMEHABEPBK___C__CTOR_OFFSET))(this);
	}

	::System::Int32 DMIFGMEKFGH(::Code::Logic::Data::ScriptObject::Level::PatternTimeline* ODPEJNDHNNA)
	{
		return ((::System::Int32(*)(::PVOID, ::Code::Logic::Data::ScriptObject::Level::PatternTimeline*))((::PBYTE)hIl2Cpp + IEMEHABEPBK___C_DMIFGMEKFGH_OFFSET))(this, ODPEJNDHNNA);
	}
};
