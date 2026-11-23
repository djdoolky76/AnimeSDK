#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Mathematics/float3.h"
#include "unitysdk/UnityEngine/B3A7F113FE1DE383.h"
#include "unitysdk/UnityEngine/B8AC70DD96553B07.h"
#include "unitysdk/UnityEngine/E99D0ADA759D15E2.h"

namespace PampelGames::RoadConstructor { class ComponentSettings; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Splines { class Spline; }

#define E53FDE52B0C30679_BED514F3FD87AC08_OFFSET UNITYSDK_OFFSET(0x3D82FE0)
#define E53FDE52B0C30679_EEFE422BF741D04F_OFFSET UNITYSDK_OFFSET(0x3D82E00)
#define E53FDE52B0C30679_FDCB88C14B2C2557_1_OFFSET UNITYSDK_OFFSET(0x3D821E0)
#define E53FDE52B0C30679_FDCB88C14B2C2557_OFFSET UNITYSDK_OFFSET(0x3D827D0)

inline static constexpr unsigned int E53FDE52B0C30679_TypeDefinitionIndex = 18824;

class E53FDE52B0C30679 : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::E99D0ADA759D15E2>* BED514F3FD87AC08(::Il2CppArray<::Unity::Mathematics::float3>* A0ACB8251CAA9772, ::UnityEngine::B8AC70DD96553B07 BA8BE5A6EADC7A13, ::Unity::Mathematics::float3 A470B90B620F8AD6)
	{
		return ((::Il2CppArray<::UnityEngine::E99D0ADA759D15E2>*(*)(::Il2CppArray<::Unity::Mathematics::float3>*, ::UnityEngine::B8AC70DD96553B07, ::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + E53FDE52B0C30679_BED514F3FD87AC08_OFFSET))(A0ACB8251CAA9772, BA8BE5A6EADC7A13, A470B90B620F8AD6);
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* EEFE422BF741D04F(::UnityEngine::B3A7F113FE1DE383 BB64C3C370C6282A, ::System::Collections::Generic::List_1<::UnityEngine::B3A7F113FE1DE383>* E005E733EDEC552A)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::UnityEngine::B3A7F113FE1DE383, ::System::Collections::Generic::List_1<::UnityEngine::B3A7F113FE1DE383>*))((::PBYTE)hIl2Cpp + E53FDE52B0C30679_EEFE422BF741D04F_OFFSET))(BB64C3C370C6282A, E005E733EDEC552A);
	}

	static ::System::Boolean FDCB88C14B2C2557(::PampelGames::RoadConstructor::ComponentSettings* B657584D50B81BBF, ::UnityEngine::Splines::Spline* F03E0BDCBABB08A2, ::System::Single E46107037130FB22)
	{
		return ((::System::Boolean(*)(::PampelGames::RoadConstructor::ComponentSettings*, ::UnityEngine::Splines::Spline*, ::System::Single))((::PBYTE)hIl2Cpp + E53FDE52B0C30679_FDCB88C14B2C2557_OFFSET))(B657584D50B81BBF, F03E0BDCBABB08A2, E46107037130FB22);
	}

	static ::System::Boolean FDCB88C14B2C2557_1(::PampelGames::RoadConstructor::ComponentSettings* B657584D50B81BBF, ::UnityEngine::B3A7F113FE1DE383 BB64C3C370C6282A)
	{
		return ((::System::Boolean(*)(::PampelGames::RoadConstructor::ComponentSettings*, ::UnityEngine::B3A7F113FE1DE383))((::PBYTE)hIl2Cpp + E53FDE52B0C30679_FDCB88C14B2C2557_1_OFFSET))(B657584D50B81BBF, BB64C3C370C6282A);
	}
};
