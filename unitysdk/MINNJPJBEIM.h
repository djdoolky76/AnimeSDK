#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MINNJPJBEIM_BAMJLOKLLAM_OFFSET UNITYSDK_OFFSET(0x1405FB90)
#define MINNJPJBEIM_GIBGENFKFPN_OFFSET UNITYSDK_OFFSET(0x1405FF20)
#define MINNJPJBEIM_HCEFPLAKKLD_OFFSET UNITYSDK_OFFSET(0x1405F790)
#define MINNJPJBEIM_LJBEKLJOIEH_OFFSET UNITYSDK_OFFSET(0x1405FA10)
#define MINNJPJBEIM_OIAMNJFEEKC_OFFSET UNITYSDK_OFFSET(0x1405F8D0)
#define MINNJPJBEIM_PEEIJEGODNH_OFFSET UNITYSDK_OFFSET(0x1405FCD0)
#define MINNJPJBEIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1405F780)

inline static constexpr unsigned int MINNJPJBEIM_TypeDefinitionIndex = 46575;

class MINNJPJBEIM : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINNJPJBEIM__CTOR_OFFSET))(this);
	}

	static ::System::String* HCEFPLAKKLD(::System::Int32 HGNBIOANEAL)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MINNJPJBEIM_HCEFPLAKKLD_OFFSET))(HGNBIOANEAL);
	}

	static ::System::String* OIAMNJFEEKC(::System::Int32 HGNBIOANEAL)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MINNJPJBEIM_OIAMNJFEEKC_OFFSET))(HGNBIOANEAL);
	}

	static ::Foundation::AssetPath LJBEKLJOIEH(::System::Int32 HGNBIOANEAL)
	{
		return ((::Foundation::AssetPath(*)(::System::Int32))((::PBYTE)hIl2Cpp + MINNJPJBEIM_LJBEKLJOIEH_OFFSET))(HGNBIOANEAL);
	}

	static ::System::String* BAMJLOKLLAM(::System::Int32 HGNBIOANEAL)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MINNJPJBEIM_BAMJLOKLLAM_OFFSET))(HGNBIOANEAL);
	}

	static ::System::String* PEEIJEGODNH(::System::Collections::Generic::List_1<::System::Int32>* NMHLMLBMCML, ::System::Boolean LHJOBPLCPCF)
	{
		return ((::System::String*(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MINNJPJBEIM_PEEIJEGODNH_OFFSET))(NMHLMLBMCML, LHJOBPLCPCF);
	}

	static ::System::Collections::Generic::List_1<::System::String*>* GIBGENFKFPN(::System::Collections::Generic::List_1<::System::Int32>* NMHLMLBMCML, ::System::Boolean LHJOBPLCPCF)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MINNJPJBEIM_GIBGENFKFPN_OFFSET))(NMHLMLBMCML, LHJOBPLCPCF);
	}
};
