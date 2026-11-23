#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class E84941B9432B974A;
class F4A7112FCC53259D;
class F77C0B948299CD47;
namespace PampelGames::RoadConstructor { class IntersectionObject; }
namespace PampelGames::RoadConstructor { class RoadConstructor; }
namespace PampelGames::RoadConstructor { class RoadObject; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace PampelGames::RoadConstructor
{
	inline static constexpr unsigned int RoadConstructor_E31FDFB63C0008C3_TypeDefinitionIndex = 18846;

	struct alignas(8) RoadConstructor_E31FDFB63C0008C3
	{
		::PampelGames::RoadConstructor::RoadConstructor* A544919C800E2923; // 0x10
		::System::Collections::Generic::List_1<::E84941B9432B974A*>* E577F64819F4F7A6; // 0x18
		::F77C0B948299CD47* EC442B0F96180C55; // 0x20
		::F4A7112FCC53259D* E31CB6303DFA8354; // 0x28
		::PampelGames::RoadConstructor::RoadObject* B53D9FA4D4836DFD; // 0x30
		::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::IntersectionObject*>* A7DEE7B7302EF505; // 0x38
		::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>* A596B5649374478A; // 0x40
		::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>* E3FFEC1FA07C7786; // 0x48
		::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::IntersectionObject*>* B51731A4F8EF107D; // 0x50
		::System::Boolean FEEDB1EA203B85EB; // 0x58
	};
}
