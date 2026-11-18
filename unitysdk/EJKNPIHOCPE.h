#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJHKEDBIPPK.h"

class EDOKGCBMFKB;
class FKJHEMLANEM;
class GINHAMIGDNA;
class ONMCCMFDJHJ;
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EJKNPIHOCPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11CAB9B0)
#define EJKNPIHOCPE_FBEJIPDJBAK_OFFSET UNITYSDK_OFFSET(0x11CABE60)
#define EJKNPIHOCPE_MIAAHFHFBDC_OFFSET UNITYSDK_OFFSET(0x11CABC60)
#define EJKNPIHOCPE_ONCREATE_OFFSET UNITYSDK_OFFSET(0x11CAB770)
#define EJKNPIHOCPE__CCTOR_OFFSET UNITYSDK_OFFSET(0x11CABC50)
#define EJKNPIHOCPE__CTOR_OFFSET UNITYSDK_OFFSET(0x11CABB40)

inline static constexpr unsigned int EJKNPIHOCPE_TypeDefinitionIndex = 63253;

class EJKNPIHOCPE
{
public:
	static ::System::Boolean* StaticGet_OMDHLDHLIGO()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EJKNPIHOCPE_TypeDefinitionIndex)->GetStaticField(0x10940);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::ONMCCMFDJHJ*>* HGMDEAPOKPO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKNPIHOCPE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJKNPIHOCPE__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKNPIHOCPE_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKNPIHOCPE_DISPOSE_OFFSET))(this);
	}

	::System::Void MIAAHFHFBDC(::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + EJKNPIHOCPE_MIAAHFHFBDC_OFFSET))(this, MNDIBLLFAJI);
	}

	::System::Void FBEJIPDJBAK(::System::Int32 DONFNODEALN, ::HJHKEDBIPPK CDJLDLLNFGA, ::FKJHEMLANEM* MECOFDHMKEB, ::EDOKGCBMFKB* IGAAKDOIPNN, ::GINHAMIGDNA* PPGLBDELEBF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::HJHKEDBIPPK, ::FKJHEMLANEM*, ::EDOKGCBMFKB*, ::GINHAMIGDNA*))((::PBYTE)hIl2Cpp + EJKNPIHOCPE_FBEJIPDJBAK_OFFSET))(this, DONFNODEALN, CDJLDLLNFGA, MECOFDHMKEB, IGAAKDOIPNN, PPGLBDELEBF);
	}
};
