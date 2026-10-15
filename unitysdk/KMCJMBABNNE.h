#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HEOLKMLMPML.h"
class DNGMCNPJHBJ;
class FMKEJLGKEMH;
class KMCJMBABNNE;
namespace System { class String; }

#define KMCJMBABNNE_ACMPHJJOOHE_OFFSET UNITYSDK_OFFSET(0xB53ED80)
#define KMCJMBABNNE_BNOIKDKFCFO_OFFSET UNITYSDK_OFFSET(0xB53F7A0)
#define KMCJMBABNNE_CCTOR_OFFSET UNITYSDK_OFFSET(0xB53F910)
#define KMCJMBABNNE_CTOR_OFFSET UNITYSDK_OFFSET(0xB53F900)
#define KMCJMBABNNE_FEDLDOENDCF_OFFSET UNITYSDK_OFFSET(0xB53F7F0)
#define KMCJMBABNNE_FJJDGCNEKGJ_OFFSET UNITYSDK_OFFSET(0xB53F8A0)
#define KMCJMBABNNE_FLPHEABMEGP_OFFSET UNITYSDK_OFFSET(0xB53F840)
#define KMCJMBABNNE_GLMAEDDPEMP_OFFSET UNITYSDK_OFFSET(0xB53F6A0)
#define KMCJMBABNNE_JDBEGLPAPBE_OFFSET UNITYSDK_OFFSET(0xB53F300)
#define KMCJMBABNNE_NDMBDGKAJEK_OFFSET UNITYSDK_OFFSET(0xB53ED10)

	class KMCJMBABNNE : public ::HEOLKMLMPML
	{
	public:
		::System::Boolean OBPOPPJEEEO; // 0x10
		::System::Boolean DNMKBOIPPKN; // 0x11
		static ::KMCJMBABNNE** StaticGet_HGLIFJGHADE()
		{
			return (::KMCJMBABNNE**)UnitySDK::FromName("", "KMCJMBABNNE")->GetStaticField(0x5F030);
		}

		static ::KMCJMBABNNE** StaticGet_FCDLJAGPKFH()
		{
			return (::KMCJMBABNNE**)UnitySDK::FromName("", "KMCJMBABNNE")->GetStaticField(0x5F038);
		}

		static ::KMCJMBABNNE** StaticGet_FHBLLLHBCJE()
		{
			return (::KMCJMBABNNE**)UnitySDK::FromName("", "KMCJMBABNNE")->GetStaticField(0x5F040);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCJMBABNNE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMCJMBABNNE_CCTOR_OFFSET))();
		}

		::System::String* NDMBDGKAJEK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCJMBABNNE_NDMBDGKAJEK_OFFSET))(this);
		}

		::System::String* ACMPHJJOOHE(::FMKEJLGKEMH* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + KMCJMBABNNE_ACMPHJJOOHE_OFFSET))(this, a1, a2);
		}

		::System::UInt32 JDBEGLPAPBE(::FMKEJLGKEMH* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::FMKEJLGKEMH*))((::PBYTE)hIl2Cpp + KMCJMBABNNE_JDBEGLPAPBE_OFFSET))(this, a1);
		}

		::System::Boolean GLMAEDDPEMP(::FMKEJLGKEMH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FMKEJLGKEMH*))((::PBYTE)hIl2Cpp + KMCJMBABNNE_GLMAEDDPEMP_OFFSET))(this, a1);
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
