#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOGHKDIJJGG;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HEGNCFJPJJI_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x15C50EA0)
#define HEGNCFJPJJI_BNNKNIJBGPA_OFFSET UNITYSDK_OFFSET(0x15C50F00)
#define HEGNCFJPJJI_CTOR_OFFSET UNITYSDK_OFFSET(0x15C51A40)
#define HEGNCFJPJJI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C512F0)
#define HEGNCFJPJJI_EIPJEBHLOBI_OFFSET UNITYSDK_OFFSET(0x15C519E0)
#define HEGNCFJPJJI_ELMPHEAEFAB_OFFSET UNITYSDK_OFFSET(0x15C514E0)
#define HEGNCFJPJJI_IOGPHFJHLLG_OFFSET UNITYSDK_OFFSET(0x15C51850)
#define HEGNCFJPJJI_KDCPPPEBAAA_OFFSET UNITYSDK_OFFSET(0x15C511D0)
#define HEGNCFJPJJI_NKBIJHNDKCO_OFFSET UNITYSDK_OFFSET(0x15C510B0)
#define HEGNCFJPJJI_TICK_OFFSET UNITYSDK_OFFSET(0x15C51390)

	class HEGNCFJPJJI : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::LOGHKDIJJGG*>* IKOCAOENCFG; // 0x10
		::System::Boolean MHEAIOMEGCA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGNCFJPJJI_CTOR_OFFSET))(this);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEGNCFJPJJI_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void NKBIJHNDKCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGNCFJPJJI_NKBIJHNDKCO_OFFSET))(this);
		}

		::System::Void KDCPPPEBAAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGNCFJPJJI_KDCPPPEBAAA_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGNCFJPJJI_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HEGNCFJPJJI_TICK_OFFSET))(this, a1);
		}

		::System::Void ELMPHEAEFAB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HEGNCFJPJJI_ELMPHEAEFAB_OFFSET))(this, a1);
		}

		::System::Void IOGPHFJHLLG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HEGNCFJPJJI_IOGPHFJHLLG_OFFSET))(this, a1);
		}

		::System::Void EIPJEBHLOBI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HEGNCFJPJJI_EIPJEBHLOBI_OFFSET))(this, a1);
		}

		::System::Void BNNKNIJBGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGNCFJPJJI_BNNKNIJBGPA_OFFSET))(this);
		}

	};
