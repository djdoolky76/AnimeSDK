#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPHINGPIEAJ;
class MDEJKAOFFBO;

#define EKGJGEEJNKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1644DC80)
#define EKGJGEEJNKG_NPOFEKBLAIH_OFFSET UNITYSDK_OFFSET(0x1644DC90)
#define EKGJGEEJNKG_PFOOEFJNOIO_OFFSET UNITYSDK_OFFSET(0x1644DD40)

inline static constexpr unsigned int EKGJGEEJNKG_TypeDefinitionIndex = 79799;

	class EKGJGEEJNKG : public ::System::Object
	{
	public:
		::MDEJKAOFFBO* DOBHMBMNBHK; // 0x10
		::System::Void _ctor(::MDEJKAOFFBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDEJKAOFFBO*))((::PBYTE)hIl2Cpp + EKGJGEEJNKG_CTOR_OFFSET))(this, a1);
		}

		::System::Void NPOFEKBLAIH(::LPHINGPIEAJ* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*, ::System::Int32))((::PBYTE)hIl2Cpp + EKGJGEEJNKG_NPOFEKBLAIH_OFFSET))(this, a1, a2);
		}

		::System::Void PFOOEFJNOIO(::LPHINGPIEAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + EKGJGEEJNKG_PFOOEFJNOIO_OFFSET))(this, a1);
		}

	};
