#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHPLGJMKHKG_GPFDEGKMDHK.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define JHPLGJMKHKG_APDFNFBCAPK_OFFSET UNITYSDK_OFFSET(0x1945CF60)
#define JHPLGJMKHKG_BLOJIEFPALN_OFFSET UNITYSDK_OFFSET(0x1945CE50)
#define JHPLGJMKHKG_COMPARE_OFFSET UNITYSDK_OFFSET(0x1945CBA0)
#define JHPLGJMKHKG_LCEKMLBKPEA_OFFSET UNITYSDK_OFFSET(0x1945CD50)
#define JHPLGJMKHKG__CTOR_OFFSET UNITYSDK_OFFSET(0x1945CF50)

inline static constexpr unsigned int JHPLGJMKHKG_TypeDefinitionIndex = 69879;

class JHPLGJMKHKG : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* PKBGMOMAIGF; // 0x10
	::JHPLGJMKHKG_GPFDEGKMDHK GFOINBKPLKG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHPLGJMKHKG__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::System::Int32 LNGBHJGBOMI, ::System::Int32 NGCOMLCJJFE)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JHPLGJMKHKG_COMPARE_OFFSET))(this, LNGBHJGBOMI, NGCOMLCJJFE);
	}

	::System::Boolean LCEKMLBKPEA(::System::Int32 NACGJJKHEJE)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JHPLGJMKHKG_LCEKMLBKPEA_OFFSET))(this, NACGJJKHEJE);
	}

	::JHPLGJMKHKG* APDFNFBCAPK(::System::Collections::Generic::List_1<::System::Int32>* OCALHHLFBAF)
	{
		return ((::JHPLGJMKHKG*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + JHPLGJMKHKG_APDFNFBCAPK_OFFSET))(this, OCALHHLFBAF);
	}

	::System::Boolean BLOJIEFPALN(::System::Int32 NACGJJKHEJE)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JHPLGJMKHKG_BLOJIEFPALN_OFFSET))(this, NACGJJKHEJE);
	}
};
