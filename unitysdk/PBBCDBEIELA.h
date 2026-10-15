#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PBBCDBEIELA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C976930)

inline static constexpr unsigned int PBBCDBEIELA_TypeDefinitionIndex = 43742;

	class PBBCDBEIELA : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* BJGAMICBIGO; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector3>* HADOLNPFLHG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBBCDBEIELA_CTOR_OFFSET))(this);
		}

	};
