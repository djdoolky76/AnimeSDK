#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHNLJJANLPI;
class BALLHPKKDDH;
class LBNENBNFPAD;

#define IOIPCGLLCNN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x16503190)
#define IOIPCGLLCNN_CTOR_OFFSET UNITYSDK_OFFSET(0x16503200)

inline static constexpr unsigned int IOIPCGLLCNN_TypeDefinitionIndex = 62619;

	class IOIPCGLLCNN : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOIPCGLLCNN_CTOR_OFFSET))(this);
		}

		::LBNENBNFPAD* BPLPBPMEODA(::BALLHPKKDDH* a1, ::AHNLJJANLPI* a2)
		{
			return ((::LBNENBNFPAD*(*)(::PVOID, ::BALLHPKKDDH*, ::AHNLJJANLPI*))((::PBYTE)hIl2Cpp + IOIPCGLLCNN_BPLPBPMEODA_OFFSET))(this, a1, a2);
		}

	};
