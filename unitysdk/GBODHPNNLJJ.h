#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JBCOJHKMJMO;
class PKPCAPOLHGN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GBODHPNNLJJ_APHJGPCKKGG_OFFSET UNITYSDK_OFFSET(0x1F0A4B40)
#define GBODHPNNLJJ_COJAIDKDMDN_OFFSET UNITYSDK_OFFSET(0x1F0A4C80)
#define GBODHPNNLJJ_EFJKNKONLOH_OFFSET UNITYSDK_OFFSET(0x1F0A4840)
#define GBODHPNNLJJ_GOOLNNPBFGH_OFFSET UNITYSDK_OFFSET(0x1F0A4AF0)
#define GBODHPNNLJJ_HGPIEAKCFEN_OFFSET UNITYSDK_OFFSET(0x1F0A4890)
#define GBODHPNNLJJ_NJEEPIPDNHK_OFFSET UNITYSDK_OFFSET(0x1F0A49D0)
#define GBODHPNNLJJ_NPMKKHNJHDL_OFFSET UNITYSDK_OFFSET(0x1F0A47F0)
#define GBODHPNNLJJ_OKOMAEOIBCA_OFFSET UNITYSDK_OFFSET(0x1F0A4830)
#define GBODHPNNLJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0A4790)

inline static constexpr unsigned int GBODHPNNLJJ_TypeDefinitionIndex = 29066;

class GBODHPNNLJJ : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::JBCOJHKMJMO*>* LGODAHPHAAN; // 0x10
	::System::String* KGDKDMDEOCK; // 0x18

	::System::Void _ctor(::System::String* KGDKDMDEOCK, ::System::Collections::Generic::List_1<::JBCOJHKMJMO*>* LGODAHPHAAN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::JBCOJHKMJMO*>*))((::PBYTE)hIl2Cpp + GBODHPNNLJJ__CTOR_OFFSET))(this, KGDKDMDEOCK, LGODAHPHAAN);
	}

	::System::String* NPMKKHNJHDL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBODHPNNLJJ_NPMKKHNJHDL_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::JBCOJHKMJMO*>* OKOMAEOIBCA()
	{
		return ((::System::Collections::Generic::List_1<::JBCOJHKMJMO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBODHPNNLJJ_OKOMAEOIBCA_OFFSET))(this);
	}

	::System::UInt32 EFJKNKONLOH(::PKPCAPOLHGN* OFFKAMPEFPE)
	{
		return ((::System::UInt32(*)(::PVOID, ::PKPCAPOLHGN*))((::PBYTE)hIl2Cpp + GBODHPNNLJJ_EFJKNKONLOH_OFFSET))(this, OFFKAMPEFPE);
	}

	::System::Int32 HGPIEAKCFEN(::PKPCAPOLHGN* OFFKAMPEFPE)
	{
		return ((::System::Int32(*)(::PVOID, ::PKPCAPOLHGN*))((::PBYTE)hIl2Cpp + GBODHPNNLJJ_HGPIEAKCFEN_OFFSET))(this, OFFKAMPEFPE);
	}

	::System::String* NJEEPIPDNHK(::PKPCAPOLHGN* OFFKAMPEFPE)
	{
		return ((::System::String*(*)(::PVOID, ::PKPCAPOLHGN*))((::PBYTE)hIl2Cpp + GBODHPNNLJJ_NJEEPIPDNHK_OFFSET))(this, OFFKAMPEFPE);
	}

	::System::UInt64 GOOLNNPBFGH(::PKPCAPOLHGN* OFFKAMPEFPE)
	{
		return ((::System::UInt64(*)(::PVOID, ::PKPCAPOLHGN*))((::PBYTE)hIl2Cpp + GBODHPNNLJJ_GOOLNNPBFGH_OFFSET))(this, OFFKAMPEFPE);
	}

	::System::Double COJAIDKDMDN(::PKPCAPOLHGN* OFFKAMPEFPE)
	{
		return ((::System::Double(*)(::PVOID, ::PKPCAPOLHGN*))((::PBYTE)hIl2Cpp + GBODHPNNLJJ_COJAIDKDMDN_OFFSET))(this, OFFKAMPEFPE);
	}

	::System::Int64 APHJGPCKKGG(::PKPCAPOLHGN* OFFKAMPEFPE)
	{
		return ((::System::Int64(*)(::PVOID, ::PKPCAPOLHGN*))((::PBYTE)hIl2Cpp + GBODHPNNLJJ_APHJGPCKKGG_OFFSET))(this, OFFKAMPEFPE);
	}
};
