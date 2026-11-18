#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EAIOHODECAO;
namespace System { class String; }

#define BJMEDGEANLF_CLHLBOPBDBJ_OFFSET UNITYSDK_OFFSET(0x1E79C220)
#define BJMEDGEANLF_IAMEPLDHPAG_OFFSET UNITYSDK_OFFSET(0x1E79C1C0)
#define BJMEDGEANLF_KFEPCJEIKJO_OFFSET UNITYSDK_OFFSET(0x1E79C100)
#define BJMEDGEANLF_KGGECJIEFPH_OFFSET UNITYSDK_OFFSET(0x1E79C0B0)
#define BJMEDGEANLF_NFIDLOKMKAA_OFFSET UNITYSDK_OFFSET(0x1E79C160)
#define BJMEDGEANLF_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1E79C060)
#define BJMEDGEANLF__CTOR_OFFSET UNITYSDK_OFFSET(0x1E79C050)

inline static constexpr unsigned int BJMEDGEANLF_TypeDefinitionIndex = 28997;

class BJMEDGEANLF : public ::System::Object
{
public:
	::EAIOHODECAO* HMPEEAAAGHE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJMEDGEANLF__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJMEDGEANLF_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void KGGECJIEFPH(::EAIOHODECAO* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::EAIOHODECAO*))((::PBYTE)hIl2Cpp + BJMEDGEANLF_KGGECJIEFPH_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void KFEPCJEIKJO(::System::String* NAPFALLANDL, ::System::String* JCBJICLPDNN, ::System::String* BAKBPEGDGJA, ::System::Int32 GOELENAIEIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BJMEDGEANLF_KFEPCJEIKJO_OFFSET))(this, NAPFALLANDL, JCBJICLPDNN, BAKBPEGDGJA, GOELENAIEIP);
	}

	::System::Void NFIDLOKMKAA(::System::String* NAPFALLANDL, ::System::String* JCBJICLPDNN, ::System::String* BAKBPEGDGJA, ::System::Int32 GOELENAIEIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BJMEDGEANLF_NFIDLOKMKAA_OFFSET))(this, NAPFALLANDL, JCBJICLPDNN, BAKBPEGDGJA, GOELENAIEIP);
	}

	::System::Void IAMEPLDHPAG(::System::String* NAPFALLANDL, ::System::String* JCBJICLPDNN, ::System::String* BAKBPEGDGJA, ::System::Int32 GOELENAIEIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BJMEDGEANLF_IAMEPLDHPAG_OFFSET))(this, NAPFALLANDL, JCBJICLPDNN, BAKBPEGDGJA, GOELENAIEIP);
	}

	::System::Void CLHLBOPBDBJ(::System::String* NAPFALLANDL, ::System::String* JCBJICLPDNN, ::System::String* BAKBPEGDGJA, ::System::Int32 GOELENAIEIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BJMEDGEANLF_CLHLBOPBDBJ_OFFSET))(this, NAPFALLANDL, JCBJICLPDNN, BAKBPEGDGJA, GOELENAIEIP);
	}
};
