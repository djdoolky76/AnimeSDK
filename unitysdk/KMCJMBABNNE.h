#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRichTextNodeCompiler.h"
class DNGMCNPJHBJ;
class FMKEJLGKEMH;
class KMCJMBABNNE;
namespace System { class String; }

#define KMCJMBABNNE_BNOIKDKFCFO_OFFSET UNITYSDK_OFFSET(0x17B96890)
#define KMCJMBABNNE_CCTOR_OFFSET UNITYSDK_OFFSET(0x17B96A00)
#define KMCJMBABNNE_COMPILE_OFFSET UNITYSDK_OFFSET(0x17B96290)
#define KMCJMBABNNE_CTOR_OFFSET UNITYSDK_OFFSET(0x17B969F0)
#define KMCJMBABNNE_FEDLDOENDCF_OFFSET UNITYSDK_OFFSET(0x17B968E0)
#define KMCJMBABNNE_FJJDGCNEKGJ_OFFSET UNITYSDK_OFFSET(0x17B96990)
#define KMCJMBABNNE_FLPHEABMEGP_OFFSET UNITYSDK_OFFSET(0x17B96930)
#define KMCJMBABNNE_GET_TAG_OFFSET UNITYSDK_OFFSET(0x17B957C0)
#define KMCJMBABNNE_IIBGCLJPBFP_OFFSET UNITYSDK_OFFSET(0x17B95830)
#define KMCJMBABNNE_JDBEGLPAPBE_OFFSET UNITYSDK_OFFSET(0x17B95EF0)

inline static constexpr unsigned int KMCJMBABNNE_TypeDefinitionIndex = 67040;

	class KMCJMBABNNE : public ::RPG::Client::GridFightRichTextNodeCompiler
	{
	public:
		::System::Boolean OBPOPPJEEEO; // 0x10
		::System::Boolean DNMKBOIPPKN; // 0x11
		static ::KMCJMBABNNE** StaticGet_HGLIFJGHADE()
		{
			return (::KMCJMBABNNE**)UnitySDK::FromName("", "KMCJMBABNNE")->GetStaticField(0x102E0);
		}

		static ::KMCJMBABNNE** StaticGet_FHBLLLHBCJE()
		{
			return (::KMCJMBABNNE**)UnitySDK::FromName("", "KMCJMBABNNE")->GetStaticField(0x102E8);
		}

		static ::KMCJMBABNNE** StaticGet_FCDLJAGPKFH()
		{
			return (::KMCJMBABNNE**)UnitySDK::FromName("", "KMCJMBABNNE")->GetStaticField(0x102F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCJMBABNNE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMCJMBABNNE_CCTOR_OFFSET))();
		}

		::System::String* get_Tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCJMBABNNE_GET_TAG_OFFSET))(this);
		}

		::System::String* IIBGCLJPBFP(::FMKEJLGKEMH* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + KMCJMBABNNE_IIBGCLJPBFP_OFFSET))(this, a1, a2);
		}

		::System::String* Compile(::FMKEJLGKEMH* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + KMCJMBABNNE_COMPILE_OFFSET))(this, a1, a2);
		}

		::System::UInt32 JDBEGLPAPBE(::FMKEJLGKEMH* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::FMKEJLGKEMH*))((::PBYTE)hIl2Cpp + KMCJMBABNNE_JDBEGLPAPBE_OFFSET))(this, a1);
		}

		::KMCJMBABNNE* BNOIKDKFCFO()
		{
			return ((::KMCJMBABNNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCJMBABNNE_BNOIKDKFCFO_OFFSET))(this);
		}

		::KMCJMBABNNE* FEDLDOENDCF()
		{
			return ((::KMCJMBABNNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCJMBABNNE_FEDLDOENDCF_OFFSET))(this);
		}

		::KMCJMBABNNE* FLPHEABMEGP()
		{
			return ((::KMCJMBABNNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCJMBABNNE_FLPHEABMEGP_OFFSET))(this);
		}

		::KMCJMBABNNE* FJJDGCNEKGJ()
		{
			return ((::KMCJMBABNNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCJMBABNNE_FJJDGCNEKGJ_OFFSET))(this);
		}

	};
