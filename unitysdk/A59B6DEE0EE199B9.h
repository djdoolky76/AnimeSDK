#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A0824F3FA0BBD43B;
class BD197BE803ACBDD8;
class F4A7112FCC53259D;
class F77C0B948299CD47;
namespace PampelGames::RoadConstructor { class RoadObject; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Splines { class Spline; }

#define A59B6DEE0EE199B9__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A59B6DEE0EE199B9_TypeDefinitionIndex = 18909;

class A59B6DEE0EE199B9 : public ::System::Object
{
public:
	::F77C0B948299CD47* EC442B0F96180C55; // 0x10
	::PampelGames::RoadConstructor::RoadObject* A3B7D810D9A7C68D; // 0x18
	::F4A7112FCC53259D* F9FDF519C7CA4427; // 0x20
	::BD197BE803ACBDD8* A41B3E45D4260B03; // 0x28
	::BD197BE803ACBDD8* A29E81FBBE9D73F6; // 0x30
	::System::Int32 F4CBD03E7DD541DC; // 0x38
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::A0824F3FA0BBD43B*>* A44C54A4E39B0E43; // 0x40
	::System::Collections::Generic::List_1<::UnityEngine::Splines::Spline*>* E5FF9D71EA9739CF; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A59B6DEE0EE199B9__CTOR_OFFSET))(this);
	}
};
