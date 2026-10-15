#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HEOLKMLMPML.h"
class DNGMCNPJHBJ;
class FMKEJLGKEMH;
class KMCJMBABNNE;
namespace System { class String; }

#define KMCJMBABNNE_ACMPHJJOOHE_OFFSET UNITYSDK_OFFSET(0xB538400)
#define KMCJMBABNNE_BNOIKDKFCFO_OFFSET UNITYSDK_OFFSET(0xB538E20)
#define KMCJMBABNNE_CCTOR_OFFSET UNITYSDK_OFFSET(0xB538F90)
#define KMCJMBABNNE_CTOR_OFFSET UNITYSDK_OFFSET(0xB538F80)
#define KMCJMBABNNE_FEDLDOENDCF_OFFSET UNITYSDK_OFFSET(0xB538E70)
#define KMCJMBABNNE_FJJDGCNEKGJ_OFFSET UNITYSDK_OFFSET(0xB538F20)
#define KMCJMBABNNE_FLPHEABMEGP_OFFSET UNITYSDK_OFFSET(0xB538EC0)
#define KMCJMBABNNE_GLMAEDDPEMP_OFFSET UNITYSDK_OFFSET(0xB538D20)
#define KMCJMBABNNE_JDBEGLPAPBE_OFFSET UNITYSDK_OFFSET(0xB538980)
#define KMCJMBABNNE_NDMBDGKAJEK_OFFSET UNITYSDK_OFFSET(0xB538390)

inline static constexpr unsigned int KMCJMBABNNE_TypeDefinitionIndex = 65285;

	class KMCJMBABNNE : public ::HEOLKMLMPML
	{
	public:
		::System::Boolean DNMKBOIPPKN; // 0x10
		::System::Boolean OBPOPPJEEEO; // 0x11
		static ::KMCJMBABNNE** StaticGet_FCDLJAGPKFH()
		{
			return (::KMCJMBABNNE**)UnitySDK::FromName("", "KMCJMBABNNE")->GetStaticField(0x5AE60);
		}

		static ::KMCJMBABNNE** StaticGet_FHBLLLHBCJE()
		{
			return (::KMCJMBABNNE**)UnitySDK::FromName("", "KMCJMBABNNE")->GetStaticField(0x5AE68);
		}

		static ::KMCJMBABNNE** StaticGet_HGLIFJGHADE()
		{
			return (::KMCJMBABNNE**)UnitySDK::FromName("", "KMCJMBABNNE")->GetStaticField(0x5AE70);
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
