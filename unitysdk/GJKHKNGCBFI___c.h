#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GNDEANADMGH;
class HFNICIICHOJ;
namespace System { template <typename T1, typename T2> class Action_2; }

#define GJKHKNGCBFI___C_IKEHBGKEPAC_OFFSET UNITYSDK_OFFSET(0x125D52C0)
#define GJKHKNGCBFI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x125D5270)
#define GJKHKNGCBFI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x125D52B0)

inline static constexpr unsigned int GJKHKNGCBFI___c_TypeDefinitionIndex = 91973;

class GJKHKNGCBFI___c : public ::System::Object
{
public:
	static ::System::Action_2<::HFNICIICHOJ*, ::GNDEANADMGH*>** StaticGet___9__1_0()
	{
		return (::System::Action_2<::HFNICIICHOJ*, ::GNDEANADMGH*>**)Il2CppClass::FromTypeDefinitionIndex(GJKHKNGCBFI___c_TypeDefinitionIndex)->GetStaticField(0x31C90);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GJKHKNGCBFI___c_TypeDefinitionIndex)->GetStaticField(0x31C98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJKHKNGCBFI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJKHKNGCBFI___C__CTOR_OFFSET))(this);
	}

	::System::Void IKEHBGKEPAC(::HFNICIICHOJ* GBELIHABEDH, ::GNDEANADMGH* KKPFEIGFAKK)
	{
		return ((::System::Void(*)(::PVOID, ::HFNICIICHOJ*, ::GNDEANADMGH*))((::PBYTE)hIl2Cpp + GJKHKNGCBFI___C_IKEHBGKEPAC_OFFSET))(this, GBELIHABEDH, KKPFEIGFAKK);
	}
};
