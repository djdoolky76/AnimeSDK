#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PKLAOJOAEHC_COHDMPBBMPO_OFFSET UNITYSDK_OFFSET(0x150D2420)
#define PKLAOJOAEHC_DKCCELBNBLM_OFFSET UNITYSDK_OFFSET(0x150D1DB0)
#define PKLAOJOAEHC_FLHNGDLANDC_OFFSET UNITYSDK_OFFSET(0x150D20E0)
#define PKLAOJOAEHC__CTOR_OFFSET UNITYSDK_OFFSET(0x150D1CB0)

inline static constexpr unsigned int PKLAOJOAEHC_TypeDefinitionIndex = 82488;

class PKLAOJOAEHC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* HOKPIMGLCDO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* EHJMNNIFHBL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLAOJOAEHC__CTOR_OFFSET))(this);
	}

	::System::Void DKCCELBNBLM(::System::String* AELLPLBJELA, ::System::Collections::Generic::List_1<::System::String*>* OEOFDACCLCI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + PKLAOJOAEHC_DKCCELBNBLM_OFFSET))(this, AELLPLBJELA, OEOFDACCLCI);
	}

	::System::Void FLHNGDLANDC(::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PKLAOJOAEHC_FLHNGDLANDC_OFFSET))(this, AELLPLBJELA);
	}

	::System::Boolean COHDMPBBMPO(::Il2CppArray<::System::String*>* GFDOBACOHGM)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + PKLAOJOAEHC_COHDMPBBMPO_OFFSET))(this, GFDOBACOHGM);
	}
};
