#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace Code::Logic::Data::ScriptObject::Level { class MoveCoordinate; }

#define FKBPEEIAALJ_KHABHIGBPIN_OFFSET UNITYSDK_OFFSET(0x156C2630)
#define FKBPEEIAALJ__CTOR_OFFSET UNITYSDK_OFFSET(0x156C2480)

inline static constexpr unsigned int FKBPEEIAALJ_TypeDefinitionIndex = 55850;

class FKBPEEIAALJ : public ::System::Object
{
public:
	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* OLLFNNGJCFN; // 0x10
	::System::Single GDFEBENBNCO; // 0x18

	::System::Void _ctor(::System::Int32 IMOOJFMNEEL, ::System::Int32 JAJBILHOLND, ::System::Single BCKJIHJHJDE, ::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::MoveCoordinate*>* DJLOKMMLFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::MoveCoordinate*>*))((::PBYTE)hIl2Cpp + FKBPEEIAALJ__CTOR_OFFSET))(this, IMOOJFMNEEL, JAJBILHOLND, BCKJIHJHJDE, DJLOKMMLFJC);
	}

	::System::ValueTuple_2<::System::Single, ::System::Single> KHABHIGBPIN(::System::Single ALLNOLHHJMD)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FKBPEEIAALJ_KHABHIGBPIN_OFFSET))(this, ALLNOLHHJMD);
	}
};
