#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGJAHNBNKIF;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PBFMAMECNPK_ABHGCEHONCL_OFFSET UNITYSDK_OFFSET(0x1EC8B790)
#define PBFMAMECNPK_CEFPFNBOAPL_OFFSET UNITYSDK_OFFSET(0x1EC8B750)
#define PBFMAMECNPK_COCHNNOBHIO_OFFSET UNITYSDK_OFFSET(0x1EC8BBB0)
#define PBFMAMECNPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC8B180)
#define PBFMAMECNPK_DFCCBNDDGID_OFFSET UNITYSDK_OFFSET(0x1EC8B7D0)
#define PBFMAMECNPK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EC8B240)
#define PBFMAMECNPK_FMPAOKGPMNG_OFFSET UNITYSDK_OFFSET(0x1EC8BEB0)
#define PBFMAMECNPK_HIHBHJLJIJN_OFFSET UNITYSDK_OFFSET(0x1EC8BB60)
#define PBFMAMECNPK_HOIMKOANMCA_OFFSET UNITYSDK_OFFSET(0x1EC8B9E0)
#define PBFMAMECNPK_LFPFOPBCLCJ_OFFSET UNITYSDK_OFFSET(0x1EC8B2A0)
#define PBFMAMECNPK_OPMFKHBBGAE_OFFSET UNITYSDK_OFFSET(0x1EC8B850)
#define PBFMAMECNPK_PEDMIMIGAMB_OFFSET UNITYSDK_OFFSET(0x1EC8B890)

	class PBFMAMECNPK : public ::System::Object
	{
	public:
		::System::Object* BABBJILOOAL; // 0x10
		::System::String* CNGIBBBEADC; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::List_1<::BGJAHNBNKIF*>*>* ILEIMNFOACP; // 0x20
		::System::Object* CFKHNPGEAJA; // 0x28
		::System::Void _ctor(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + PBFMAMECNPK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFMAMECNPK_DISPOSE_OFFSET))(this);
		}

		::System::Object* CEFPFNBOAPL()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFMAMECNPK_CEFPFNBOAPL_OFFSET))(this);
		}

		::System::Object* ABHGCEHONCL()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFMAMECNPK_ABHGCEHONCL_OFFSET))(this);
		}

		::System::Void DFCCBNDDGID(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PBFMAMECNPK_DFCCBNDDGID_OFFSET))(this, a1);
		}

		::System::Void PEDMIMIGAMB(::BGJAHNBNKIF* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BGJAHNBNKIF*, ::System::Object*))((::PBYTE)hIl2Cpp + PBFMAMECNPK_PEDMIMIGAMB_OFFSET))(this, a1, a2);
		}

		::System::Void HIHBHJLJIJN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PBFMAMECNPK_HIHBHJLJIJN_OFFSET))(this, a1);
		}

		::System::Void FMPAOKGPMNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFMAMECNPK_FMPAOKGPMNG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::BGJAHNBNKIF*>* HOIMKOANMCA(::System::Object* a1)
		{
			return ((::System::Collections::Generic::List_1<::BGJAHNBNKIF*>*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PBFMAMECNPK_HOIMKOANMCA_OFFSET))(this, a1);
		}

		::System::Void LFPFOPBCLCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFMAMECNPK_LFPFOPBCLCJ_OFFSET))(this);
		}

		::System::Void COCHNNOBHIO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PBFMAMECNPK_COCHNNOBHIO_OFFSET))(this, a1);
		}

		::System::Void OPMFKHBBGAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFMAMECNPK_OPMFKHBBGAE_OFFSET))(this);
		}

	};
