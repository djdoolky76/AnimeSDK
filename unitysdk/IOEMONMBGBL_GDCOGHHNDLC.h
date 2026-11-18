#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIJGGGANLLD.h"
#include "unitysdk/DJDDGKFCNAJ_IGOPHLMOGAO.h"
#include "unitysdk/System/Object.h"

#define IOEMONMBGBL_GDCOGHHNDLC_CHCGMACMJLD_OFFSET UNITYSDK_OFFSET(0x16AB3F10)
#define IOEMONMBGBL_GDCOGHHNDLC__CTOR_OFFSET UNITYSDK_OFFSET(0x16AB3F00)

inline static constexpr unsigned int IOEMONMBGBL_GDCOGHHNDLC_TypeDefinitionIndex = 93096;

class IOEMONMBGBL_GDCOGHHNDLC : public ::System::Object
{
public:
	::AIJGGGANLLD BCILAIPOMFI; // 0x10
	::System::Boolean MCJCCJOEKGN; // 0x30
	::System::Byte _padding0[0x3];
	::System::Int32 EKLPGILFEKO; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOEMONMBGBL_GDCOGHHNDLC__CTOR_OFFSET))(this);
	}

	::System::Void CHCGMACMJLD(::DJDDGKFCNAJ_IGOPHLMOGAO FKMHMOELCIO)
	{
		return ((::System::Void(*)(::PVOID, ::DJDDGKFCNAJ_IGOPHLMOGAO))((::PBYTE)hIl2Cpp + IOEMONMBGBL_GDCOGHHNDLC_CHCGMACMJLD_OFFSET))(this, FKMHMOELCIO);
	}
};
