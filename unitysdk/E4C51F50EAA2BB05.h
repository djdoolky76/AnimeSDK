#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define E4C51F50EAA2BB05_ADB3A788E210C782_OFFSET UNITYSDK_OFFSET(0x3A152A0)
#define E4C51F50EAA2BB05_BFB962A3770F39EF_OFFSET UNITYSDK_OFFSET(0x3A14700)
#define E4C51F50EAA2BB05_E2CD1995B6005707_OFFSET UNITYSDK_OFFSET(0x3A14840)
#define E4C51F50EAA2BB05_E351F120D78FF732_OFFSET UNITYSDK_OFFSET(0x3A14850)
#define E4C51F50EAA2BB05_F562BCA8DD24548B_OFFSET UNITYSDK_OFFSET(0x3A142B0)
#define E4C51F50EAA2BB05_F7B0A23335A3DB16_OFFSET UNITYSDK_OFFSET(0x3A152B0)
#define E4C51F50EAA2BB05__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E4C51F50EAA2BB05_TypeDefinitionIndex = 12853;

class E4C51F50EAA2BB05 : public ::System::Object
{
public:
	static ::E4C51F50EAA2BB05** StaticGet_F2EC524D6D748B5F()
	{
		return (::E4C51F50EAA2BB05**)Il2CppClass::FromTypeDefinitionIndex(E4C51F50EAA2BB05_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	::System::Void E2CD1995B6005707()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E4C51F50EAA2BB05_E2CD1995B6005707_OFFSET))(this);
	}

	::System::Void BFB962A3770F39EF(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* E734BA46CBA523FB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + E4C51F50EAA2BB05_BFB962A3770F39EF_OFFSET))(this, E734BA46CBA523FB);
	}

	::System::Void ADB3A788E210C782()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E4C51F50EAA2BB05_ADB3A788E210C782_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E4C51F50EAA2BB05__CTOR_OFFSET))(this);
	}

	::System::Void E351F120D78FF732(::System::Int32 F3851C787B08F75B)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + E4C51F50EAA2BB05_E351F120D78FF732_OFFSET))(this, F3851C787B08F75B);
	}

	::System::String* F562BCA8DD24548B(::System::String* B960AC235824C6C8, ::System::String* ABD1A1CAEB70666B)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + E4C51F50EAA2BB05_F562BCA8DD24548B_OFFSET))(this, B960AC235824C6C8, ABD1A1CAEB70666B);
	}

	static ::E4C51F50EAA2BB05* F7B0A23335A3DB16()
	{
		return ((::E4C51F50EAA2BB05*(*)())((::PBYTE)hIl2Cpp + E4C51F50EAA2BB05_F7B0A23335A3DB16_OFFSET))();
	}
};
