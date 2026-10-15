#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBCPODHJFJD;
class DDBHIOHEHHC;
class FAPMPKICHBB;
class KNAFLABINOA;
class LBPCONKMBIK;

#define CIFFEJCJFDJ_CTOR_OFFSET UNITYSDK_OFFSET(0xCF66620)
#define CIFFEJCJFDJ_DOILIIILMFD_OFFSET UNITYSDK_OFFSET(0xCF66550)
#define CIFFEJCJFDJ_HAHAIDJJHON_OFFSET UNITYSDK_OFFSET(0xCF664B0)
#define CIFFEJCJFDJ_NHBFINIANHN_OFFSET UNITYSDK_OFFSET(0xCF663A0)

inline static constexpr unsigned int CIFFEJCJFDJ_TypeDefinitionIndex = 63867;

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
