#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBCPODHJFJD;
class DDBHIOHEHHC;
class FAPMPKICHBB;
class KNAFLABINOA;
class LBPCONKMBIK;

#define CIFFEJCJFDJ_CTOR_OFFSET UNITYSDK_OFFSET(0xD8DB7A0)
#define CIFFEJCJFDJ_DOILIIILMFD_OFFSET UNITYSDK_OFFSET(0xD8DB6D0)
#define CIFFEJCJFDJ_HAHAIDJJHON_OFFSET UNITYSDK_OFFSET(0xD8DB630)
#define CIFFEJCJFDJ_NHBFINIANHN_OFFSET UNITYSDK_OFFSET(0xD8DB510)

inline static constexpr unsigned int CIFFEJCJFDJ_TypeDefinitionIndex = 65309;

	class CIFFEJCJFDJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFFEJCJFDJ_CTOR_OFFSET))(this);
		}

		::LBPCONKMBIK* NHBFINIANHN(::System::UInt32 a1)
		{
			return ((::LBPCONKMBIK*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CIFFEJCJFDJ_NHBFINIANHN_OFFSET))(this, a1);
		}

		::KNAFLABINOA* HAHAIDJJHON(::CBCPODHJFJD* a1)
		{
			return ((::KNAFLABINOA*(*)(::PVOID, ::CBCPODHJFJD*))((::PBYTE)hIl2Cpp + CIFFEJCJFDJ_HAHAIDJJHON_OFFSET))(this, a1);
		}

		::FAPMPKICHBB* DOILIIILMFD(::DDBHIOHEHHC* a1)
		{
			return ((::FAPMPKICHBB*(*)(::PVOID, ::DDBHIOHEHHC*))((::PBYTE)hIl2Cpp + CIFFEJCJFDJ_DOILIIILMFD_OFFSET))(this, a1);
		}

	};
