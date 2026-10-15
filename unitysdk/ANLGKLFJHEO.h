#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ANLGKLFJHEO_BFNAEOPBGLC_OFFSET UNITYSDK_OFFSET(0x1589B1C0)
#define ANLGKLFJHEO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1589B880)
#define ANLGKLFJHEO_DBIELBAPKIK_OFFSET UNITYSDK_OFFSET(0x1589B650)
#define ANLGKLFJHEO_DHBIFONHBMI_OFFSET UNITYSDK_OFFSET(0x1589AEC0)
#define ANLGKLFJHEO_EOFKKBJEBNH_OFFSET UNITYSDK_OFFSET(0x1589B5A0)
#define ANLGKLFJHEO_FEKHAOKCMIE_OFFSET UNITYSDK_OFFSET(0x1589B4A0)
#define ANLGKLFJHEO_FKGDMKELEOC_OFFSET UNITYSDK_OFFSET(0x1589B2C0)
#define ANLGKLFJHEO_HGEFMLHHFAG_OFFSET UNITYSDK_OFFSET(0x1589B3A0)
#define ANLGKLFJHEO_IAHJBJGDPDG_OFFSET UNITYSDK_OFFSET(0x1589B330)
#define ANLGKLFJHEO_JFNPJLOLOIC_OFFSET UNITYSDK_OFFSET(0x1589B250)
#define ANLGKLFJHEO_JGMLLOGAFFE_OFFSET UNITYSDK_OFFSET(0x1589AE50)
#define ANLGKLFJHEO_OBLEEOBODFH_OFFSET UNITYSDK_OFFSET(0x1589B520)
#define ANLGKLFJHEO_PMGPHIJPDNA_OFFSET UNITYSDK_OFFSET(0x1589B410)

	class ANLGKLFJHEO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_DBCMEECFEBC()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)UnitySDK::FromName("", "ANLGKLFJHEO")->GetStaticField(0x607F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANLGKLFJHEO_CCTOR_OFFSET))();
		}

		static ::System::Void JGMLLOGAFFE()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANLGKLFJHEO_JGMLLOGAFFE_OFFSET))();
		}

		static ::System::Void BFNAEOPBGLC()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANLGKLFJHEO_BFNAEOPBGLC_OFFSET))();
		}

		static ::System::Void JFNPJLOLOIC(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ANLGKLFJHEO_JFNPJLOLOIC_OFFSET))(a1);
		}

		static ::System::Void FKGDMKELEOC()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANLGKLFJHEO_FKGDMKELEOC_OFFSET))();
		}

		static ::System::Void IAHJBJGDPDG()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANLGKLFJHEO_IAHJBJGDPDG_OFFSET))();
		}

		static ::System::Void HGEFMLHHFAG()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANLGKLFJHEO_HGEFMLHHFAG_OFFSET))();
		}

		static ::System::Void PMGPHIJPDNA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANLGKLFJHEO_PMGPHIJPDNA_OFFSET))();
		}

		static ::System::Void FEKHAOKCMIE(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ANLGKLFJHEO_FEKHAOKCMIE_OFFSET))(a1);
		}

		static ::System::Void OBLEEOBODFH(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ANLGKLFJHEO_OBLEEOBODFH_OFFSET))(a1);
		}

		static ::System::Void EOFKKBJEBNH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + ANLGKLFJHEO_EOFKKBJEBNH_OFFSET))(a1);
		}

		static ::System::Void DHBIFONHBMI(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ANLGKLFJHEO_DHBIFONHBMI_OFFSET))(a1);
		}

		static ::System::String* DBIELBAPKIK()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + ANLGKLFJHEO_DBIELBAPKIK_OFFSET))();
		}

	};
