#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BCNCALJFGPN;
class MJOLOHCFCHO;
class PKPCAPOLHGN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DEHCHHLAMPI_LLIOGJLKLMO_OFFSET UNITYSDK_OFFSET(0x1CD93440)
#define DEHCHHLAMPI__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD93430)

inline static constexpr unsigned int DEHCHHLAMPI_TypeDefinitionIndex = 28986;

class DEHCHHLAMPI : public ::System::Object
{
public:
	::System::String* LACHAOHGJKB; // 0x10
	::MJOLOHCFCHO* FJDOCPKEACA; // 0x18

	::System::Void _ctor(::System::String* LACHAOHGJKB, ::MJOLOHCFCHO* FJDOCPKEACA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MJOLOHCFCHO*))((::PBYTE)hIl2Cpp + DEHCHHLAMPI__CTOR_OFFSET))(this, LACHAOHGJKB, FJDOCPKEACA);
	}

	::BCNCALJFGPN* LLIOGJLKLMO(::PKPCAPOLHGN* AAOCANGHBDG, ::System::Collections::Generic::List_1<::BCNCALJFGPN*>* DGNHGJCGNKF)
	{
		return ((::BCNCALJFGPN*(*)(::PVOID, ::PKPCAPOLHGN*, ::System::Collections::Generic::List_1<::BCNCALJFGPN*>*))((::PBYTE)hIl2Cpp + DEHCHHLAMPI_LLIOGJLKLMO_OFFSET))(this, AAOCANGHBDG, DGNHGJCGNKF);
	}
};
