#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRichTextNodeCompiler.h"
class DNGMCNPJHBJ;
class FMKEJLGKEMH;
class IEKCPJDNBBA;
namespace System { class String; }

#define AAOLFNBNEPH_ANKKKLIADKM_OFFSET UNITYSDK_OFFSET(0xB73BF60)
#define AAOLFNBNEPH_COMPILE_OFFSET UNITYSDK_OFFSET(0xB73B860)
#define AAOLFNBNEPH_CTOR_OFFSET UNITYSDK_OFFSET(0xB73C1F0)
#define AAOLFNBNEPH_EKECLMPNGEB_OFFSET UNITYSDK_OFFSET(0xB73B700)
#define AAOLFNBNEPH_GET_TAG_OFFSET UNITYSDK_OFFSET(0xB73B690)
#define AAOLFNBNEPH_HMJMBJFANOF_OFFSET UNITYSDK_OFFSET(0xB73C160)
#define AAOLFNBNEPH_LIAJFKOBEKF_OFFSET UNITYSDK_OFFSET(0xB73BD70)

inline static constexpr unsigned int AAOLFNBNEPH_TypeDefinitionIndex = 67044;

	class AAOLFNBNEPH : public ::RPG::Client::GridFightRichTextNodeCompiler
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOLFNBNEPH_CTOR_OFFSET))(this);
		}

		::System::String* get_Tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOLFNBNEPH_GET_TAG_OFFSET))(this);
		}

		::IEKCPJDNBBA* EKECLMPNGEB()
		{
			return ((::IEKCPJDNBBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOLFNBNEPH_EKECLMPNGEB_OFFSET))(this);
		}

		::System::String* Compile(::FMKEJLGKEMH* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + AAOLFNBNEPH_COMPILE_OFFSET))(this, a1, a2);
		}

		::System::String* ANKKKLIADKM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOLFNBNEPH_ANKKKLIADKM_OFFSET))(this);
		}

		::System::String* HMJMBJFANOF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOLFNBNEPH_HMJMBJFANOF_OFFSET))(this);
		}

		::System::Boolean LIAJFKOBEKF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOLFNBNEPH_LIAJFKOBEKF_OFFSET))(this);
		}

	};
