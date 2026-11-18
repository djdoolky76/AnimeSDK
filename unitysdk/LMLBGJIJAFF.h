#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define LMLBGJIJAFF_DLNAKEIIDGG_OFFSET UNITYSDK_OFFSET(0x185104E0)
#define LMLBGJIJAFF_FBFDELGLDND_OFFSET UNITYSDK_OFFSET(0x18510220)
#define LMLBGJIJAFF_KOGMNEGLAHN_OFFSET UNITYSDK_OFFSET(0x18510160)
#define LMLBGJIJAFF_PEDANHBGIGE_OFFSET UNITYSDK_OFFSET(0x185103C0)
#define LMLBGJIJAFF__CCTOR_OFFSET UNITYSDK_OFFSET(0x18510100)
#define LMLBGJIJAFF__CTOR_OFFSET UNITYSDK_OFFSET(0x185100F0)

inline static constexpr unsigned int LMLBGJIJAFF_TypeDefinitionIndex = 59887;

class LMLBGJIJAFF : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Foundation::AssetPath>** StaticGet_IEPEBKJHIHJ()
	{
		return (::System::Collections::Generic::List_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(LMLBGJIJAFF_TypeDefinitionIndex)->GetStaticField(0x4BF10);
	}
	static ::System::Boolean* StaticGet_DDCFJFAPPFH()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LMLBGJIJAFF_TypeDefinitionIndex)->GetStaticField(0x11950);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMLBGJIJAFF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMLBGJIJAFF__CCTOR_OFFSET))();
	}

	static ::System::Void KOGMNEGLAHN()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMLBGJIJAFF_KOGMNEGLAHN_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::Foundation::AssetPath>* FBFDELGLDND()
	{
		return ((::System::Collections::Generic::List_1<::Foundation::AssetPath>*(*)())((::PBYTE)hIl2Cpp + LMLBGJIJAFF_FBFDELGLDND_OFFSET))();
	}

	static ::System::Void PEDANHBGIGE(::System::Boolean FCPCLIJNDLA)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + LMLBGJIJAFF_PEDANHBGIGE_OFFSET))(FCPCLIJNDLA);
	}

	static ::System::Void DLNAKEIIDGG(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::System::Void(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + LMLBGJIJAFF_DLNAKEIIDGG_OFFSET))(CJBJONJDOLI);
	}
};
