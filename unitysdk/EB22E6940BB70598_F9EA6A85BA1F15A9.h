#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Mathematics/float3.h"

namespace PampelGames::RoadConstructor { class RoadObject; }
namespace System { class String; }
template <typename T1, typename T2> class A1DE94FB11CA92CD;
template <typename T1, typename T2> class A2BE4378BF5DA7BC;

#define EB22E6940BB70598_F9EA6A85BA1F15A9_A979A4D783A69359_OFFSET UNITYSDK_OFFSET(0x3DA1290)
#define EB22E6940BB70598_F9EA6A85BA1F15A9__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EB22E6940BB70598_F9EA6A85BA1F15A9_TypeDefinitionIndex = 18857;

class EB22E6940BB70598_F9EA6A85BA1F15A9 : public ::System::Object
{
public:
	::PampelGames::RoadConstructor::RoadObject* A3C9EDC9FD33B5E4; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EB22E6940BB70598_F9EA6A85BA1F15A9__CTOR_OFFSET))(this);
	}

	::A1DE94FB11CA92CD<::System::String*, ::System::Single>* A979A4D783A69359(::A2BE4378BF5DA7BC<::System::String*, ::Unity::Mathematics::float3>* A0C1F1E95D5F6CA9)
	{
		return ((::A1DE94FB11CA92CD<::System::String*, ::System::Single>*(*)(::PVOID, ::A2BE4378BF5DA7BC<::System::String*, ::Unity::Mathematics::float3>*))((::PBYTE)hIl2Cpp + EB22E6940BB70598_F9EA6A85BA1F15A9_A979A4D783A69359_OFFSET))(this, A0C1F1E95D5F6CA9);
	}
};
