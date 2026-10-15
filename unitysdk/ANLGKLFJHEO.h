#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ANLGKLFJHEO_BFNAEOPBGLC_OFFSET UNITYSDK_OFFSET(0x1588F920)
#define ANLGKLFJHEO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1588FFE0)
#define ANLGKLFJHEO_DBIELBAPKIK_OFFSET UNITYSDK_OFFSET(0x1588FDB0)
#define ANLGKLFJHEO_DHBIFONHBMI_OFFSET UNITYSDK_OFFSET(0x1588F620)
#define ANLGKLFJHEO_EOFKKBJEBNH_OFFSET UNITYSDK_OFFSET(0x1588FD00)
#define ANLGKLFJHEO_FEKHAOKCMIE_OFFSET UNITYSDK_OFFSET(0x1588FC00)
#define ANLGKLFJHEO_FKGDMKELEOC_OFFSET UNITYSDK_OFFSET(0x1588FA20)
#define ANLGKLFJHEO_HGEFMLHHFAG_OFFSET UNITYSDK_OFFSET(0x1588FB00)
#define ANLGKLFJHEO_IAHJBJGDPDG_OFFSET UNITYSDK_OFFSET(0x1588FA90)
#define ANLGKLFJHEO_JFNPJLOLOIC_OFFSET UNITYSDK_OFFSET(0x1588F9B0)
#define ANLGKLFJHEO_JGMLLOGAFFE_OFFSET UNITYSDK_OFFSET(0x1588F5B0)
#define ANLGKLFJHEO_OBLEEOBODFH_OFFSET UNITYSDK_OFFSET(0x1588FC80)
#define ANLGKLFJHEO_PMGPHIJPDNA_OFFSET UNITYSDK_OFFSET(0x1588FB70)

inline static constexpr unsigned int ANLGKLFJHEO_TypeDefinitionIndex = 60128;

	class ANLGKLFJHEO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_DBCMEECFEBC()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)UnitySDK::FromName("", "ANLGKLFJHEO")->GetStaticField(0x5DA70);
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
