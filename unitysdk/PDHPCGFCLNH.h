#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JHGEEOEHBGM;
class OLHCEJBBEJF;
namespace MoleMole { class UIHollowCardOptionsDialogContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PDHPCGFCLNH_GEPJKBMFGFO_OFFSET UNITYSDK_OFFSET(0x1A7EB820)
#define PDHPCGFCLNH_JLLGFLBNDNH_OFFSET UNITYSDK_OFFSET(0x1A7EB2C0)
#define PDHPCGFCLNH_LMOGKFCIJIC_OFFSET UNITYSDK_OFFSET(0x1A7EABD0)
#define PDHPCGFCLNH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7EABC0)

inline static constexpr unsigned int PDHPCGFCLNH_TypeDefinitionIndex = 39949;

class PDHPCGFCLNH : public ::System::Object
{
public:
	::System::Boolean EIPGOJPDFFD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDHPCGFCLNH__CTOR_OFFSET))(this);
	}

	::System::Void LMOGKFCIJIC(::OLHCEJBBEJF* IPMMCGDMODG, ::System::Collections::Generic::List_1<::JHGEEOEHBGM*>*& IGAAKDOIPNN, ::MoleMole::UIHollowCardOptionsDialogContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::OLHCEJBBEJF*, ::System::Collections::Generic::List_1<::JHGEEOEHBGM*>*&, ::MoleMole::UIHollowCardOptionsDialogContext*))((::PBYTE)hIl2Cpp + PDHPCGFCLNH_LMOGKFCIJIC_OFFSET))(this, IPMMCGDMODG, IGAAKDOIPNN, AAOCANGHBDG);
	}

	::System::String* JLLGFLBNDNH(::System::Int32 KKGGACLGGPN)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PDHPCGFCLNH_JLLGFLBNDNH_OFFSET))(this, KKGGACLGGPN);
	}

	::System::Boolean GEPJKBMFGFO(::System::Int32 KKGGACLGGPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PDHPCGFCLNH_GEPJKBMFGFO_OFFSET))(this, KKGGACLGGPN);
	}
};
