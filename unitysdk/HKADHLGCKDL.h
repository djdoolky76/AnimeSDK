#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRichTextNodeCompiler.h"
class DNGMCNPJHBJ;
class FMKEJLGKEMH;
namespace System { class String; }

#define HKADHLGCKDL_ACNHNNIMAIF_OFFSET UNITYSDK_OFFSET(0x16C8C600)
#define HKADHLGCKDL_COMPILE_OFFSET UNITYSDK_OFFSET(0x16C8C270)
#define HKADHLGCKDL_CTOR_OFFSET UNITYSDK_OFFSET(0x16C8C9C0)
#define HKADHLGCKDL_GET_TAG_OFFSET UNITYSDK_OFFSET(0x16C8C200)
#define HKADHLGCKDL_HJIPIEDLOLL_OFFSET UNITYSDK_OFFSET(0x16C8C800)

inline static constexpr unsigned int HKADHLGCKDL_TypeDefinitionIndex = 67034;

	class HKADHLGCKDL : public ::RPG::Client::GridFightRichTextNodeCompiler
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKADHLGCKDL_CTOR_OFFSET))(this);
		}

		::System::String* get_Tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKADHLGCKDL_GET_TAG_OFFSET))(this);
		}

		::System::String* Compile(::FMKEJLGKEMH* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + HKADHLGCKDL_COMPILE_OFFSET))(this, a1, a2);
		}

		static ::System::UInt32 ACNHNNIMAIF()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + HKADHLGCKDL_ACNHNNIMAIF_OFFSET))();
		}

		static ::System::String* HJIPIEDLOLL(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HKADHLGCKDL_HJIPIEDLOLL_OFFSET))(a1);
		}

	};
