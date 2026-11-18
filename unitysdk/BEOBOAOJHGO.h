#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKHBCCGMCFC.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BEOBOAOJHGO_JELPPJFEIAC_OFFSET UNITYSDK_OFFSET(0x15070820)
#define BEOBOAOJHGO__CCTOR_OFFSET UNITYSDK_OFFSET(0x15070B90)
#define BEOBOAOJHGO__CTOR_OFFSET UNITYSDK_OFFSET(0x15070B80)

inline static constexpr unsigned int BEOBOAOJHGO_TypeDefinitionIndex = 45061;

class BEOBOAOJHGO : public ::System::Object
{
public:
	static ::BEOBOAOJHGO** StaticGet_NJLLMPCDOEB()
	{
		return (::BEOBOAOJHGO**)Il2CppClass::FromTypeDefinitionIndex(BEOBOAOJHGO_TypeDefinitionIndex)->GetStaticField(0x3E9A0);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::AKHBCCGMCFC>* LEFCKNFDGBG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEOBOAOJHGO__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEOBOAOJHGO__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::AKHBCCGMCFC>* JELPPJFEIAC()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::AKHBCCGMCFC>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEOBOAOJHGO_JELPPJFEIAC_OFFSET))(this);
	}
};
