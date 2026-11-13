#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRichTextNodeCompiler.h"
class DNGMCNPJHBJ;
class FMKEJLGKEMH;
class GKHOFELMJEF;
namespace System { class String; }

#define GKHOFELMJEF_CGAIDHIMPEN_OFFSET UNITYSDK_OFFSET(0x1A8D3810)
#define GKHOFELMJEF_COMPILE_OFFSET UNITYSDK_OFFSET(0x1A8D3540)
#define GKHOFELMJEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1A8D3450)
#define GKHOFELMJEF_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1A8D34D0)
#define GKHOFELMJEF_KHPHGIMGEDI_OFFSET UNITYSDK_OFFSET(0x1A8D33E0)
#define GKHOFELMJEF_NDKJPHKDGDP_OFFSET UNITYSDK_OFFSET(0x1A8D3460)

inline static constexpr unsigned int GKHOFELMJEF_TypeDefinitionIndex = 48218;

	class GKHOFELMJEF : public ::RPG::Client::GridFightRichTextNodeCompiler
	{
	public:
		::System::Boolean ONFKPBBCNLA; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHOFELMJEF_CTOR_OFFSET))(this);
		}

		static ::GKHOFELMJEF* KHPHGIMGEDI()
		{
			return ((::GKHOFELMJEF*(*)())((::PBYTE)hIl2Cpp + GKHOFELMJEF_KHPHGIMGEDI_OFFSET))();
		}

		static ::GKHOFELMJEF* NDKJPHKDGDP()
		{
			return ((::GKHOFELMJEF*(*)())((::PBYTE)hIl2Cpp + GKHOFELMJEF_NDKJPHKDGDP_OFFSET))();
		}

		::System::String* get_Tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHOFELMJEF_GET_TAG_OFFSET))(this);
		}

		::System::String* Compile(::FMKEJLGKEMH* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + GKHOFELMJEF_COMPILE_OFFSET))(this, a1, a2);
		}

		::System::String* CGAIDHIMPEN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHOFELMJEF_CGAIDHIMPEN_OFFSET))(this);
		}

	};
