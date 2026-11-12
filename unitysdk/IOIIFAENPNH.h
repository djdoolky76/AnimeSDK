#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EANJILGOKBE;
class IOIIFAENPNH;

#define IOIIFAENPNH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB837A00)
#define IOIIFAENPNH_COMPARETO_OFFSET UNITYSDK_OFFSET(0xB837A70)
#define IOIIFAENPNH_CTOR_OFFSET UNITYSDK_OFFSET(0xB837A60)

inline static constexpr unsigned int IOIIFAENPNH_TypeDefinitionIndex = 74111;

	class IOIIFAENPNH : public ::System::Object
	{
	public:
		::EANJILGOKBE* FJCAKOIDONG; // 0x10
		::System::Boolean GNDCCBNILML; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOIIFAENPNH_CTOR_OFFSET))(this);
		}

		static ::IOIIFAENPNH* BPLPBPMEODA(::EANJILGOKBE* a1)
		{
			return ((::IOIIFAENPNH*(*)(::EANJILGOKBE*))((::PBYTE)hIl2Cpp + IOIIFAENPNH_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Int32 CompareTo(::IOIIFAENPNH* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::IOIIFAENPNH*))((::PBYTE)hIl2Cpp + IOIIFAENPNH_COMPARETO_OFFSET))(this, a1);
		}

	};
