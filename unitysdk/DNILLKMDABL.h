#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BCNCALJFGPN;
class GNICKMCEBJL;
class JBCOJHKMJMO;
class LJBBJODGAEG;
class PKPCAPOLHGN;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define DNILLKMDABL_BMNNOMGBHJG_OFFSET UNITYSDK_OFFSET(0x1EBE7FD0)
#define DNILLKMDABL_CNNBOJNMDEE_OFFSET UNITYSDK_OFFSET(0x1EBE9010)
#define DNILLKMDABL_GBIGELIKMGF_OFFSET UNITYSDK_OFFSET(0x1EBE99F0)
#define DNILLKMDABL_HBKABDDNGKB_OFFSET UNITYSDK_OFFSET(0x1EBE87D0)
#define DNILLKMDABL_HDDMIPNBBOF_OFFSET UNITYSDK_OFFSET(0x1EBE7D90)
#define DNILLKMDABL_LIEAIKCFJNM_OFFSET UNITYSDK_OFFSET(0x1EBE8F90)
#define DNILLKMDABL_LLCPLICBCCF_OFFSET UNITYSDK_OFFSET(0x1EBE9270)
#define DNILLKMDABL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBE7C40)

inline static constexpr unsigned int DNILLKMDABL_TypeDefinitionIndex = 28657;

class DNILLKMDABL : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::BCNCALJFGPN*>** StaticGet_GNCJOGIMIAJ()
	{
		return (::System::Collections::Generic::List_1<::BCNCALJFGPN*>**)Il2CppClass::FromTypeDefinitionIndex(DNILLKMDABL_TypeDefinitionIndex)->GetStaticField(0x25EC0);
	}
	static ::System::Collections::Generic::List_1<::BCNCALJFGPN*>** StaticGet_ODMOAOHANKM()
	{
		return (::System::Collections::Generic::List_1<::BCNCALJFGPN*>**)Il2CppClass::FromTypeDefinitionIndex(DNILLKMDABL_TypeDefinitionIndex)->GetStaticField(0x25EC8);
	}
	static ::System::Collections::Generic::Stack_1<::BCNCALJFGPN*>** StaticGet_AOABHDCNNEE()
	{
		return (::System::Collections::Generic::Stack_1<::BCNCALJFGPN*>**)Il2CppClass::FromTypeDefinitionIndex(DNILLKMDABL_TypeDefinitionIndex)->GetStaticField(0x25ED0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNILLKMDABL__CCTOR_OFFSET))();
	}

	static ::BCNCALJFGPN* HDDMIPNBBOF(::GNICKMCEBJL* EJOKOKOPDAB, ::System::Collections::Generic::Stack_1<::BCNCALJFGPN*>* AOABHDCNNEE)
	{
		return ((::BCNCALJFGPN*(*)(::GNICKMCEBJL*, ::System::Collections::Generic::Stack_1<::BCNCALJFGPN*>*))((::PBYTE)hIl2Cpp + DNILLKMDABL_HDDMIPNBBOF_OFFSET))(EJOKOKOPDAB, AOABHDCNNEE);
	}

	static ::System::Boolean BMNNOMGBHJG(::System::Collections::Generic::List_1<::JBCOJHKMJMO*>* LGODAHPHAAN)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::JBCOJHKMJMO*>*))((::PBYTE)hIl2Cpp + DNILLKMDABL_BMNNOMGBHJG_OFFSET))(LGODAHPHAAN);
	}

	static ::System::Boolean HBKABDDNGKB(::PKPCAPOLHGN* OFFKAMPEFPE, ::LJBBJODGAEG* LKEDLGCKBKK, ::System::Collections::Generic::Stack_1<::BCNCALJFGPN*>* AOABHDCNNEE)
	{
		return ((::System::Boolean(*)(::PKPCAPOLHGN*, ::LJBBJODGAEG*, ::System::Collections::Generic::Stack_1<::BCNCALJFGPN*>*))((::PBYTE)hIl2Cpp + DNILLKMDABL_HBKABDDNGKB_OFFSET))(OFFKAMPEFPE, LKEDLGCKBKK, AOABHDCNNEE);
	}

	static ::BCNCALJFGPN* CNNBOJNMDEE(::GNICKMCEBJL* EJOKOKOPDAB, ::System::Collections::Generic::Stack_1<::BCNCALJFGPN*>* AOABHDCNNEE)
	{
		return ((::BCNCALJFGPN*(*)(::GNICKMCEBJL*, ::System::Collections::Generic::Stack_1<::BCNCALJFGPN*>*))((::PBYTE)hIl2Cpp + DNILLKMDABL_CNNBOJNMDEE_OFFSET))(EJOKOKOPDAB, AOABHDCNNEE);
	}

	static ::BCNCALJFGPN* LLCPLICBCCF(::PKPCAPOLHGN* OFFKAMPEFPE, ::System::Collections::Generic::List_1<::JBCOJHKMJMO*>* LGODAHPHAAN)
	{
		return ((::BCNCALJFGPN*(*)(::PKPCAPOLHGN*, ::System::Collections::Generic::List_1<::JBCOJHKMJMO*>*))((::PBYTE)hIl2Cpp + DNILLKMDABL_LLCPLICBCCF_OFFSET))(OFFKAMPEFPE, LGODAHPHAAN);
	}

	static ::System::Collections::Generic::List_1<::BCNCALJFGPN*>* LIEAIKCFJNM()
	{
		return ((::System::Collections::Generic::List_1<::BCNCALJFGPN*>*(*)())((::PBYTE)hIl2Cpp + DNILLKMDABL_LIEAIKCFJNM_OFFSET))();
	}

	static ::System::Boolean GBIGELIKMGF(::GNICKMCEBJL* EJOKOKOPDAB, ::System::Collections::Generic::Stack_1<::BCNCALJFGPN*>* AOABHDCNNEE)
	{
		return ((::System::Boolean(*)(::GNICKMCEBJL*, ::System::Collections::Generic::Stack_1<::BCNCALJFGPN*>*))((::PBYTE)hIl2Cpp + DNILLKMDABL_GBIGELIKMGF_OFFSET))(EJOKOKOPDAB, AOABHDCNNEE);
	}
};
