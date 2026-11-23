#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E84941B9432B974A;
namespace PampelGames::RoadConstructor { class IntersectionObject; }
namespace PampelGames::RoadConstructor { class RoadObject; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EFBB2C1B92181E07__CTOR_OFFSET UNITYSDK_OFFSET(0x3D6B000)

inline static constexpr unsigned int EFBB2C1B92181E07_TypeDefinitionIndex = 18775;

class EFBB2C1B92181E07 : public ::System::Object
{
public:
	::System::Boolean A916524018361755; // 0x10
	::System::Byte _padding0[0x7];
	::System::Collections::Generic::List_1<::E84941B9432B974A*>* E577F64819F4F7A6; // 0x18
	::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::IntersectionObject*>* A57139F24DC4EC1D; // 0x20
	::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>* FFA138D1A23D5CC5; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFBB2C1B92181E07__CTOR_OFFSET))(this);
	}
};
