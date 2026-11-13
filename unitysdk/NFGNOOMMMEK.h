#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFANNBCFAOD;
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace UnityEngine { class Transform; }

#define NFGNOOMMMEK_CTOR_OFFSET UNITYSDK_OFFSET(0x18E75760)

inline static constexpr unsigned int NFGNOOMMMEK_TypeDefinitionIndex = 73216;

	class NFGNOOMMMEK : public ::System::Object
	{
	public:
		::UnityEngine::Transform* EMMHBDOOBMK; // 0x10
		::System::Collections::Generic::ICollection_1<::EFANNBCFAOD*>* GEJAHMEBEGO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFGNOOMMMEK_CTOR_OFFSET))(this);
		}

	};
