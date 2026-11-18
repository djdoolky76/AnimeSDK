#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GEILNPBJMFF;
class ILMKONAJBGC;
class IMKNOAMKHDA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AEDDKNEDKLE_BCOIHEOIALG_OFFSET UNITYSDK_OFFSET(0x181EA1D0)
#define AEDDKNEDKLE_BGNEIEENMIJ_OFFSET UNITYSDK_OFFSET(0x181E9F60)
#define AEDDKNEDKLE_DCNNHNBCOEP_OFFSET UNITYSDK_OFFSET(0x181EA070)
#define AEDDKNEDKLE_GKNGEIPOCBK_OFFSET UNITYSDK_OFFSET(0x181EA050)
#define AEDDKNEDKLE_HAEPBCFIKIN_OFFSET UNITYSDK_OFFSET(0x181EA290)
#define AEDDKNEDKLE__CTOR_OFFSET UNITYSDK_OFFSET(0x181E9F50)

inline static constexpr unsigned int AEDDKNEDKLE_TypeDefinitionIndex = 56344;

class AEDDKNEDKLE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEDDKNEDKLE__CTOR_OFFSET))(this);
	}

	static ::System::Boolean BGNEIEENMIJ(::System::Int32 NACGJJKHEJE)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + AEDDKNEDKLE_BGNEIEENMIJ_OFFSET))(NACGJJKHEJE);
	}

	static ::System::String* DCNNHNBCOEP(::GEILNPBJMFF* AMJADGKJAPK)
	{
		return ((::System::String*(*)(::GEILNPBJMFF*))((::PBYTE)hIl2Cpp + AEDDKNEDKLE_DCNNHNBCOEP_OFFSET))(AMJADGKJAPK);
	}

	static ::System::Collections::Generic::List_1<::GEILNPBJMFF*>* GKNGEIPOCBK()
	{
		return ((::System::Collections::Generic::List_1<::GEILNPBJMFF*>*(*)())((::PBYTE)hIl2Cpp + AEDDKNEDKLE_GKNGEIPOCBK_OFFSET))();
	}

	static ::IMKNOAMKHDA* BCOIHEOIALG()
	{
		return ((::IMKNOAMKHDA*(*)())((::PBYTE)hIl2Cpp + AEDDKNEDKLE_BCOIHEOIALG_OFFSET))();
	}

	static ::ILMKONAJBGC* HAEPBCFIKIN()
	{
		return ((::ILMKONAJBGC*(*)())((::PBYTE)hIl2Cpp + AEDDKNEDKLE_HAEPBCFIKIN_OFFSET))();
	}
};
