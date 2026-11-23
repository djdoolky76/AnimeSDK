#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PampelGames::RoadConstructor { class RoadObject; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define FCBF2DB2F26A6E88_F5628F8349D4A8A6_EC063446867188DE_OFFSET UNITYSDK_OFFSET(0x3DB8920)
#define FCBF2DB2F26A6E88_F5628F8349D4A8A6_F72B1A02EAF56EE7_OFFSET UNITYSDK_OFFSET(0x3DB8920)
#define FCBF2DB2F26A6E88_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3DB89E0)
#define FCBF2DB2F26A6E88_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FCBF2DB2F26A6E88_F5628F8349D4A8A6_TypeDefinitionIndex = 18891;

class FCBF2DB2F26A6E88_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::FCBF2DB2F26A6E88_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::FCBF2DB2F26A6E88_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(FCBF2DB2F26A6E88_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::PampelGames::RoadConstructor::RoadObject*, ::System::Boolean>** StaticGet_E3CEE43317B9E051()
	{
		return (::System::Func_2<::PampelGames::RoadConstructor::RoadObject*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FCBF2DB2F26A6E88_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Func_2<::PampelGames::RoadConstructor::RoadObject*, ::System::Boolean>** StaticGet_BD38FA80B668E0D5()
	{
		return (::System::Func_2<::PampelGames::RoadConstructor::RoadObject*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FCBF2DB2F26A6E88_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCBF2DB2F26A6E88_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBF2DB2F26A6E88_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Boolean F72B1A02EAF56EE7(::PampelGames::RoadConstructor::RoadObject* A342D5344F7596A8)
	{
		return ((::System::Boolean(*)(::PVOID, ::PampelGames::RoadConstructor::RoadObject*))((::PBYTE)hIl2Cpp + FCBF2DB2F26A6E88_F5628F8349D4A8A6_F72B1A02EAF56EE7_OFFSET))(this, A342D5344F7596A8);
	}

	::System::Boolean EC063446867188DE(::PampelGames::RoadConstructor::RoadObject* A342D5344F7596A8)
	{
		return ((::System::Boolean(*)(::PVOID, ::PampelGames::RoadConstructor::RoadObject*))((::PBYTE)hIl2Cpp + FCBF2DB2F26A6E88_F5628F8349D4A8A6_EC063446867188DE_OFFSET))(this, A342D5344F7596A8);
	}
};
