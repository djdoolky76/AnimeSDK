#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EAIOHODECAO;
namespace System { class String; }

#define HKMJMOLGNMK_CLHLBOPBDBJ_OFFSET UNITYSDK_OFFSET(0x10119D10)
#define HKMJMOLGNMK_IAMEPLDHPAG_OFFSET UNITYSDK_OFFSET(0x10119CB0)
#define HKMJMOLGNMK_KFEPCJEIKJO_OFFSET UNITYSDK_OFFSET(0x10119BF0)
#define HKMJMOLGNMK_KGGECJIEFPH_OFFSET UNITYSDK_OFFSET(0x10119BA0)
#define HKMJMOLGNMK_NFIDLOKMKAA_OFFSET UNITYSDK_OFFSET(0x10119C50)
#define HKMJMOLGNMK_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x10119B60)
#define HKMJMOLGNMK__CTOR_OFFSET UNITYSDK_OFFSET(0x10119D70)

inline static constexpr unsigned int HKMJMOLGNMK_TypeDefinitionIndex = 55657;

class HKMJMOLGNMK : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMJMOLGNMK__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMJMOLGNMK_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void KGGECJIEFPH(::EAIOHODECAO* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::EAIOHODECAO*))((::PBYTE)hIl2Cpp + HKMJMOLGNMK_KGGECJIEFPH_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void KFEPCJEIKJO(::System::String* NAPFALLANDL, ::System::String* JCBJICLPDNN, ::System::String* BAKBPEGDGJA, ::System::Int32 GOELENAIEIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + HKMJMOLGNMK_KFEPCJEIKJO_OFFSET))(this, NAPFALLANDL, JCBJICLPDNN, BAKBPEGDGJA, GOELENAIEIP);
	}

	::System::Void NFIDLOKMKAA(::System::String* NAPFALLANDL, ::System::String* JCBJICLPDNN, ::System::String* BAKBPEGDGJA, ::System::Int32 GOELENAIEIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + HKMJMOLGNMK_NFIDLOKMKAA_OFFSET))(this, NAPFALLANDL, JCBJICLPDNN, BAKBPEGDGJA, GOELENAIEIP);
	}

	::System::Void IAMEPLDHPAG(::System::String* NAPFALLANDL, ::System::String* JCBJICLPDNN, ::System::String* BAKBPEGDGJA, ::System::Int32 GOELENAIEIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + HKMJMOLGNMK_IAMEPLDHPAG_OFFSET))(this, NAPFALLANDL, JCBJICLPDNN, BAKBPEGDGJA, GOELENAIEIP);
	}

	::System::Void CLHLBOPBDBJ(::System::String* NAPFALLANDL, ::System::String* JCBJICLPDNN, ::System::String* BAKBPEGDGJA, ::System::Int32 GOELENAIEIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + HKMJMOLGNMK_CLHLBOPBDBJ_OFFSET))(this, NAPFALLANDL, JCBJICLPDNN, BAKBPEGDGJA, GOELENAIEIP);
	}
};
