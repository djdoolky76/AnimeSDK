#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/System/Object.h"

class KBGGKIJMICI;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AFCDDFOLMCA_NLCHKEPJAJE_OFFSET UNITYSDK_OFFSET(0x134BB910)
#define AFCDDFOLMCA__CCTOR_OFFSET UNITYSDK_OFFSET(0x134BA1A0)

inline static constexpr unsigned int AFCDDFOLMCA_TypeDefinitionIndex = 49292;

class AFCDDFOLMCA : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::DOHPDHLIKHN, ::System::Func_5<::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*, ::KBGGKIJMICI*>*>** StaticGet_DAMHOHNILGO()
	{
		return (::System::Collections::Generic::Dictionary_2<::DOHPDHLIKHN, ::System::Func_5<::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*, ::KBGGKIJMICI*>*>**)Il2CppClass::FromTypeDefinitionIndex(AFCDDFOLMCA_TypeDefinitionIndex)->GetStaticField(0x4B400);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFCDDFOLMCA__CCTOR_OFFSET))();
	}

	static ::KBGGKIJMICI* NLCHKEPJAJE(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::KBGGKIJMICI*(*)(::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + AFCDDFOLMCA_NLCHKEPJAJE_OFFSET))(HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}
};
