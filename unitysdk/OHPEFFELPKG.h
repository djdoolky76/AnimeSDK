#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHLDHMFKOCP;
class LIJFHHMGBFE;
class NBIBOKEFKIH;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OHPEFFELPKG_BBMPLJFLGEH_OFFSET UNITYSDK_OFFSET(0x1C966490)
#define OHPEFFELPKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C965A30)
#define OHPEFFELPKG_GAMOEBBJPDF_OFFSET UNITYSDK_OFFSET(0x1C965AB0)
#define OHPEFFELPKG_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1C966790)
#define OHPEFFELPKG_JDDAONIODIK_OFFSET UNITYSDK_OFFSET(0x1C965CD0)
#define OHPEFFELPKG_MDGNOFJBPDA_OFFSET UNITYSDK_OFFSET(0x1C965DD0)
#define OHPEFFELPKG_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1C9667A0)

inline static constexpr unsigned int OHPEFFELPKG_TypeDefinitionIndex = 43091;

	class OHPEFFELPKG : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NBIBOKEFKIH*>* BPDOJLJLFBC; // 0x10
		::System::Collections::Generic::List_1<::NBIBOKEFKIH*>* PBBJAPEEDEG; // 0x18
		::KHLDHMFKOCP* FLMODBLFAGD; // 0x20
		::System::Single OODFJMEAABB; // 0x28
		::System::UInt32 MJIMCPHIJLH; // 0x2C
		::System::Int32 ANEBCOAENLN; // 0x30
		::System::Boolean _IsActive_k__BackingField; // 0x34
		::System::Void _ctor(::KHLDHMFKOCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHLDHMFKOCP*))((::PBYTE)hIl2Cpp + OHPEFFELPKG_CTOR_OFFSET))(this, a1);
		}

		::System::Void GAMOEBBJPDF(::NBIBOKEFKIH* a1, ::System::Int32 a2, ::System::Single a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::NBIBOKEFKIH*, ::System::Int32, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + OHPEFFELPKG_GAMOEBBJPDF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JDDAONIODIK(::NBIBOKEFKIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBIBOKEFKIH*))((::PBYTE)hIl2Cpp + OHPEFFELPKG_JDDAONIODIK_OFFSET))(this, a1);
		}

		::System::Void MDGNOFJBPDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHPEFFELPKG_MDGNOFJBPDA_OFFSET))(this);
		}

		::Il2CppArray<::LIJFHHMGBFE*>* BBMPLJFLGEH()
		{
			return ((::Il2CppArray<::LIJFHHMGBFE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHPEFFELPKG_BBMPLJFLGEH_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OHPEFFELPKG_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OHPEFFELPKG_SET_ISACTIVE_OFFSET))(this, a1);
		}

	};
