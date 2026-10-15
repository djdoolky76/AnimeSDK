#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JDNEAIDOOAN_MADNIGELLHB_CTOR_OFFSET UNITYSDK_OFFSET(0x165F0200)

inline static constexpr unsigned int JDNEAIDOOAN_MADNIGELLHB_TypeDefinitionIndex = 48943;

	class JDNEAIDOOAN_MADNIGELLHB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* BDBKDJEFFHN; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* BFDEJBKPDLE; // 0x18
		::System::Void _ctor(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + JDNEAIDOOAN_MADNIGELLHB_CTOR_OFFSET))(this, a1, a2);
		}

	};
