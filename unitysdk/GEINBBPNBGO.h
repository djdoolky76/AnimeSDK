#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPADPABCFGH;
class MBAHJMANGHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GEINBBPNBGO_CTOR_OFFSET UNITYSDK_OFFSET(0x17CDC070)
#define GEINBBPNBGO_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x17CDBDB0)
#define GEINBBPNBGO_PNOKNPFACNE_OFFSET UNITYSDK_OFFSET(0x17CDBE00)

inline static constexpr unsigned int GEINBBPNBGO_TypeDefinitionIndex = 82110;

	class GEINBBPNBGO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEINBBPNBGO_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::EPADPABCFGH*>* HKKFFCBJOKM(::MBAHJMANGHN* a1)
		{
			return ((::System::Collections::Generic::List_1<::EPADPABCFGH*>*(*)(::PVOID, ::MBAHJMANGHN*))((::PBYTE)hIl2Cpp + GEINBBPNBGO_HKKFFCBJOKM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::EPADPABCFGH*>* PNOKNPFACNE(::MBAHJMANGHN* a1)
		{
			return ((::System::Collections::Generic::List_1<::EPADPABCFGH*>*(*)(::PVOID, ::MBAHJMANGHN*))((::PBYTE)hIl2Cpp + GEINBBPNBGO_PNOKNPFACNE_OFFSET))(this, a1);
		}

	};
