#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NDMMOLNLKAA;
class OAEFGCLEHHO;
class OJPCGGMAMNG;
namespace System { class Action; }

#define NDMMOLNLKAA_PACGGNBEFDJ_EDAJKBBMKDK_OFFSET UNITYSDK_OFFSET(0x12FDF6E0)
#define NDMMOLNLKAA_PACGGNBEFDJ_LAJBBNHKHLK_OFFSET UNITYSDK_OFFSET(0x12FDF6F0)
#define NDMMOLNLKAA_PACGGNBEFDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12FDF6D0)

inline static constexpr unsigned int NDMMOLNLKAA_PACGGNBEFDJ_TypeDefinitionIndex = 50309;

class NDMMOLNLKAA_PACGGNBEFDJ : public ::System::Object
{
public:
	::NDMMOLNLKAA* KLHPEBKNIFB; // 0x10
	::System::Action* POCANNAFFOA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMMOLNLKAA_PACGGNBEFDJ__CTOR_OFFSET))(this);
	}

	::System::Void EDAJKBBMKDK(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + NDMMOLNLKAA_PACGGNBEFDJ_EDAJKBBMKDK_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void LAJBBNHKHLK(::OJPCGGMAMNG* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OJPCGGMAMNG*))((::PBYTE)hIl2Cpp + NDMMOLNLKAA_PACGGNBEFDJ_LAJBBNHKHLK_OFFSET))(this, GLAOEHCGCFO);
	}
};
