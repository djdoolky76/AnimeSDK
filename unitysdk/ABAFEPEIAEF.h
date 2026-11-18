#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJIEAHMFJFC.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define ABAFEPEIAEF_EIANPGDHBKM_OFFSET UNITYSDK_OFFSET(0x12627A40)
#define ABAFEPEIAEF_NGFKBKCFPLK_OFFSET UNITYSDK_OFFSET(0x12627EA0)
#define ABAFEPEIAEF_PAKGLAOCLKB_OFFSET UNITYSDK_OFFSET(0x12627D90)
#define ABAFEPEIAEF_PBFBICMFFFN_OFFSET UNITYSDK_OFFSET(0x12627C80)
#define ABAFEPEIAEF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x12627F20)
#define ABAFEPEIAEF__CCTOR_OFFSET UNITYSDK_OFFSET(0x126279B0)

inline static constexpr unsigned int ABAFEPEIAEF_TypeDefinitionIndex = 78825;

class ABAFEPEIAEF : public ::System::Object
{
public:
	static ::System::Collections::Generic::Queue_1<::KJIEAHMFJFC>** StaticGet_CGNNKCDPLCD()
	{
		return (::System::Collections::Generic::Queue_1<::KJIEAHMFJFC>**)Il2CppClass::FromTypeDefinitionIndex(ABAFEPEIAEF_TypeDefinitionIndex)->GetStaticField(0x2F180);
	}
	static ::System::Boolean* StaticGet_GEEHANAMLMD()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ABAFEPEIAEF_TypeDefinitionIndex)->GetStaticField(0x9F00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABAFEPEIAEF__CCTOR_OFFSET))();
	}

	static ::System::Void EIANPGDHBKM(::System::Action_1<::KJIEAHMFJFC>* DCLOOKHLHEG)
	{
		return ((::System::Void(*)(::System::Action_1<::KJIEAHMFJFC>*))((::PBYTE)hIl2Cpp + ABAFEPEIAEF_EIANPGDHBKM_OFFSET))(DCLOOKHLHEG);
	}

	static ::System::Void PBFBICMFFFN(::KJIEAHMFJFC& BIJNDBBOLIJ)
	{
		return ((::System::Void(*)(::KJIEAHMFJFC&))((::PBYTE)hIl2Cpp + ABAFEPEIAEF_PBFBICMFFFN_OFFSET))(BIJNDBBOLIJ);
	}

	static ::KJIEAHMFJFC PAKGLAOCLKB()
	{
		return ((::KJIEAHMFJFC(*)())((::PBYTE)hIl2Cpp + ABAFEPEIAEF_PAKGLAOCLKB_OFFSET))();
	}

	static ::System::Int32 NGFKBKCFPLK()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + ABAFEPEIAEF_NGFKBKCFPLK_OFFSET))();
	}

	static ::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABAFEPEIAEF_PHOADBJGFBE_OFFSET))();
	}
};
