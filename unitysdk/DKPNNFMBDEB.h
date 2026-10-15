#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DKPNNFMBDEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA2EA90)
#define DKPNNFMBDEB_LADNBLPENHJ_OFFSET UNITYSDK_OFFSET(0x1CA2EA40)

inline static constexpr unsigned int DKPNNFMBDEB_TypeDefinitionIndex = 42097;

	class DKPNNFMBDEB : public ::System::Object
	{
	public:
		::System::Boolean LLOIGOPMMHI; // 0x10
		::System::Boolean GCIIENDDJLA; // 0x11
		::System::Byte _padding0[0x2];
		::System::Single CENECBNFGLD; // 0x14
		::System::Int32 MEPFOEEGBEA; // 0x18
		::System::Single CNJCEMNOIEB; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPNNFMBDEB_CTOR_OFFSET))(this);
		}

		::System::Void LADNBLPENHJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DKPNNFMBDEB_LADNBLPENHJ_OFFSET))(this, a1);
		}

	};
