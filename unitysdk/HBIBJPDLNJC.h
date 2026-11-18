#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace System { class Object; }
template <typename T> class JIOLFCAGOFH_1;

#define HBIBJPDLNJC_BGOFNMEMEGA_OFFSET UNITYSDK_OFFSET(0x17A343E0)
#define HBIBJPDLNJC_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x17A34340)
#define HBIBJPDLNJC__CTOR_OFFSET UNITYSDK_OFFSET(0x17A34390)

inline static constexpr unsigned int HBIBJPDLNJC_TypeDefinitionIndex = 87525;

class HBIBJPDLNJC : public ::PBJOCICFNGK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIBJPDLNJC__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + HBIBJPDLNJC_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void BGOFNMEMEGA(::JIOLFCAGOFH_1<::System::Object*>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::JIOLFCAGOFH_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HBIBJPDLNJC_BGOFNMEMEGA_OFFSET))(this, LJBPECKCCEA);
	}
};
