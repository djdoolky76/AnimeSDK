#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EIMGMBNCJON;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DJIPFMLMNBL_ELADDKAOAIO_OFFSET UNITYSDK_OFFSET(0x1F850920)
#define DJIPFMLMNBL_PPGBHNIJOIB_OFFSET UNITYSDK_OFFSET(0x1F8509D0)
#define DJIPFMLMNBL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F850870)
#define DJIPFMLMNBL__CTOR_OFFSET UNITYSDK_OFFSET(0x1F850860)

inline static constexpr unsigned int DJIPFMLMNBL_TypeDefinitionIndex = 18228;

class DJIPFMLMNBL : public ::System::Object
{
public:
	static ::DJIPFMLMNBL** StaticGet__KMMCKCPKONJ_k__BackingField()
	{
		return (::DJIPFMLMNBL**)Il2CppClass::FromTypeDefinitionIndex(DJIPFMLMNBL_TypeDefinitionIndex)->GetStaticField(0x7CF0);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::EIMGMBNCJON*>* HPLFPPPDIHD; // 0x10

	::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::String*, ::EIMGMBNCJON*>* HPLFPPPDIHD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::EIMGMBNCJON*>*))((::PBYTE)hIl2Cpp + DJIPFMLMNBL__CTOR_OFFSET))(this, HPLFPPPDIHD);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJIPFMLMNBL__CCTOR_OFFSET))();
	}

	::EIMGMBNCJON* ELADDKAOAIO(::System::String* HGHNCCPAFPJ)
	{
		return ((::EIMGMBNCJON*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DJIPFMLMNBL_ELADDKAOAIO_OFFSET))(this, HGHNCCPAFPJ);
	}

	static ::DJIPFMLMNBL* PPGBHNIJOIB()
	{
		return ((::DJIPFMLMNBL*(*)())((::PBYTE)hIl2Cpp + DJIPFMLMNBL_PPGBHNIJOIB_OFFSET))();
	}
};
