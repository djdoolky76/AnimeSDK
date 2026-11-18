#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;
class LFLOPKKHMJM;
class PKLAICEMAHO;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EFFPJCLPDOA_GDPEJFDBJII_OFFSET UNITYSDK_OFFSET(0x1613E6E0)
#define EFFPJCLPDOA_LOMNPOMDBGA_OFFSET UNITYSDK_OFFSET(0x1613E3C0)
#define EFFPJCLPDOA__CTOR_OFFSET UNITYSDK_OFFSET(0x1613E300)

inline static constexpr unsigned int EFFPJCLPDOA_TypeDefinitionIndex = 76883;

class EFFPJCLPDOA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::LFLOPKKHMJM*>* LFCCCAHJGHK; // 0x10
	::PKLAICEMAHO* MIGAOFOKENO; // 0x18
	::System::Collections::Generic::List_1<::CJIEIHEDMME*>* IFCDNKOMIIL; // 0x20

	::System::Void _ctor(::PKLAICEMAHO* MIGAOFOKENO)
	{
		return ((::System::Void(*)(::PVOID, ::PKLAICEMAHO*))((::PBYTE)hIl2Cpp + EFFPJCLPDOA__CTOR_OFFSET))(this, MIGAOFOKENO);
	}

	::System::Collections::Generic::List_1<::LFLOPKKHMJM*>* LOMNPOMDBGA()
	{
		return ((::System::Collections::Generic::List_1<::LFLOPKKHMJM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFPJCLPDOA_LOMNPOMDBGA_OFFSET))(this);
	}

	::System::Void GDPEJFDBJII(::System::Int32 MDKMEMLADPC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EFFPJCLPDOA_GDPEJFDBJII_OFFSET))(this, MDKMEMLADPC);
	}
};
