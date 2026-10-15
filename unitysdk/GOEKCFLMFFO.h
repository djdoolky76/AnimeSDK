#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLFIGBPHLHI;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define GOEKCFLMFFO_CTOR_OFFSET UNITYSDK_OFFSET(0x15B2C4D0)

inline static constexpr unsigned int GOEKCFLMFFO_TypeDefinitionIndex = 73535;

	class GOEKCFLMFFO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::CLFIGBPHLHI*>* OAAFHFBNDHN; // 0x10
		::CLFIGBPHLHI* DPMAJECLGCP; // 0x18
		::UnityEngine::Transform* EJHLGMEBPBG; // 0x20
		::System::Boolean DKOLADJHBMD; // 0x28
		::System::Boolean HHLNAHPCJAJ; // 0x29
		::System::Byte _padding0[0x2];
		::System::Int32 PGLHCDBLPEJ; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOEKCFLMFFO_CTOR_OFFSET))(this);
		}

	};
