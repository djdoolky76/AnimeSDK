#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRichTextNodeCompiler.h"
class DNGMCNPJHBJ;
class FMKEJLGKEMH;
class KGKCFDPJLBC;
namespace System { class String; }

#define GENHFDKDIBH_ANKKKLIADKM_OFFSET UNITYSDK_OFFSET(0x1691A780)
#define GENHFDKDIBH_COMPILE_OFFSET UNITYSDK_OFFSET(0x1691A080)
#define GENHFDKDIBH_CTOR_OFFSET UNITYSDK_OFFSET(0x1691AA10)
#define GENHFDKDIBH_EKECLMPNGEB_OFFSET UNITYSDK_OFFSET(0x16919F20)
#define GENHFDKDIBH_GET_TAG_OFFSET UNITYSDK_OFFSET(0x16919EB0)
#define GENHFDKDIBH_HMJMBJFANOF_OFFSET UNITYSDK_OFFSET(0x1691A980)
#define GENHFDKDIBH_LIAJFKOBEKF_OFFSET UNITYSDK_OFFSET(0x1691A590)

inline static constexpr unsigned int GENHFDKDIBH_TypeDefinitionIndex = 67056;

	class GENHFDKDIBH : public ::RPG::Client::GridFightRichTextNodeCompiler
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GENHFDKDIBH_CTOR_OFFSET))(this);
		}

		::System::String* get_Tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GENHFDKDIBH_GET_TAG_OFFSET))(this);
		}

		::KGKCFDPJLBC* EKECLMPNGEB()
		{
			return ((::KGKCFDPJLBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GENHFDKDIBH_EKECLMPNGEB_OFFSET))(this);
		}

		::System::String* Compile(::FMKEJLGKEMH* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + GENHFDKDIBH_COMPILE_OFFSET))(this, a1, a2);
		}

		::System::String* ANKKKLIADKM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GENHFDKDIBH_ANKKKLIADKM_OFFSET))(this);
		}

		::System::String* HMJMBJFANOF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GENHFDKDIBH_HMJMBJFANOF_OFFSET))(this);
		}

		::System::Boolean LIAJFKOBEKF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GENHFDKDIBH_LIAJFKOBEKF_OFFSET))(this);
		}

	};
