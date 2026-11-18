#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FNBDJCBCHMI___C_AABEEMLFDCP_OFFSET UNITYSDK_OFFSET(0x10EC2BA0)
#define FNBDJCBCHMI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10EC2B50)
#define FNBDJCBCHMI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10EC2B90)

inline static constexpr unsigned int FNBDJCBCHMI___c_TypeDefinitionIndex = 68958;

class FNBDJCBCHMI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FNBDJCBCHMI___c_TypeDefinitionIndex)->GetStaticField(0x4B930);
	}
	static ::System::Object** StaticGet___9__9_1()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FNBDJCBCHMI___c_TypeDefinitionIndex)->GetStaticField(0x4B938);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNBDJCBCHMI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNBDJCBCHMI___C__CTOR_OFFSET))(this);
	}

	::System::Int32 AABEEMLFDCP(::System::ValueTuple_2<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Int32> HBJOLKHGGDD)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Int32>))((::PBYTE)hIl2Cpp + FNBDJCBCHMI___C_AABEEMLFDCP_OFFSET))(this, HBJOLKHGGDD);
	}
};
