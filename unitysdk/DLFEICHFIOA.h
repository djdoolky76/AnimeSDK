#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFEPOFEOCDI;
class OCPOIDCNJDA;
class OMPCEECHGJK;
namespace Entitas { class IGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DLFEICHFIOA_BBLMMNLCMGM_OFFSET UNITYSDK_OFFSET(0xF89C890)
#define DLFEICHFIOA_CTOR_OFFSET UNITYSDK_OFFSET(0xF89C880)
#define DLFEICHFIOA_EXECUTE_OFFSET UNITYSDK_OFFSET(0xF89C9F0)
#define DLFEICHFIOA_HFILAANFCAN_OFFSET UNITYSDK_OFFSET(0xF89CCA0)
#define DLFEICHFIOA_IJOLENBNDDC_OFFSET UNITYSDK_OFFSET(0xF89CBE0)
#define DLFEICHFIOA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xF89C8F0)

	class DLFEICHFIOA : public ::System::Object
	{
	public:
		::AFEPOFEOCDI* FKINCGODJEP; // 0x10
		::Entitas::IGroup* LPDMBHGIAPJ; // 0x18
		::OMPCEECHGJK* PDENFEFCAGN; // 0x20
		::System::Void _ctor(::AFEPOFEOCDI* a1, ::OMPCEECHGJK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AFEPOFEOCDI*, ::OMPCEECHGJK*))((::PBYTE)hIl2Cpp + DLFEICHFIOA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean BBLMMNLCMGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLFEICHFIOA_BBLMMNLCMGM_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLFEICHFIOA_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLFEICHFIOA_EXECUTE_OFFSET))(this);
		}

		::System::Void IJOLENBNDDC(::OCPOIDCNJDA* a1, ::System::Collections::Generic::List_1<::OCPOIDCNJDA*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*, ::System::Collections::Generic::List_1<::OCPOIDCNJDA*>*))((::PBYTE)hIl2Cpp + DLFEICHFIOA_IJOLENBNDDC_OFFSET))(this, a1, a2);
		}

		::System::Void HFILAANFCAN(::OCPOIDCNJDA* a1, ::System::Collections::Generic::List_1<::OCPOIDCNJDA*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OCPOIDCNJDA*, ::System::Collections::Generic::List_1<::OCPOIDCNJDA*>*))((::PBYTE)hIl2Cpp + DLFEICHFIOA_HFILAANFCAN_OFFSET))(this, a1, a2);
		}

	};
