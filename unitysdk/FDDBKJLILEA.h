#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class FEPMIILHIDF;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define FDDBKJLILEA_AJECEFNAMHK_OFFSET UNITYSDK_OFFSET(0x1C544ED0)
#define FDDBKJLILEA_INFCLOEFHMG_OFFSET UNITYSDK_OFFSET(0x1C5433C0)

	class FDDBKJLILEA : public ::System::Object
	{
	public:
		static ::System::Boolean AJECEFNAMHK(::FEPMIILHIDF* a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::System::Boolean(*)(::FEPMIILHIDF*, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + FDDBKJLILEA_AJECEFNAMHK_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* INFCLOEFHMG(::FEPMIILHIDF* a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*(*)(::FEPMIILHIDF*, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + FDDBKJLILEA_INFCLOEFHMG_OFFSET))(a1, a2);
		}

	};
