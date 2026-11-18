#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define GMAMDCFHIKB__CCTOR_OFFSET UNITYSDK_OFFSET(0x149ED340)

inline static constexpr unsigned int GMAMDCFHIKB_TypeDefinitionIndex = 57502;

class GMAMDCFHIKB : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_HGJFNDLCKOM()
	{
		return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(GMAMDCFHIKB_TypeDefinitionIndex)->GetStaticField(0x31D00);
	}
	static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_MAMNEFHNBCD()
	{
		return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(GMAMDCFHIKB_TypeDefinitionIndex)->GetStaticField(0x31D08);
	}
	// static const ::System::Int32 DEGBCKCIJFK = 0xB7; // 0x0
	// static const ::System::Int32 NBHJGCAFJBC = 0x3; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMAMDCFHIKB__CCTOR_OFFSET))();
	}
};
