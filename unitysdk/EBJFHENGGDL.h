#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HEOLKMLMPML.h"
class DNGMCNPJHBJ;
class EBJFHENGGDL;
class FMKEJLGKEMH;
namespace System { class String; }

#define EBJFHENGGDL_ACMPHJJOOHE_OFFSET UNITYSDK_OFFSET(0x12CFF980)
#define EBJFHENGGDL_CCTOR_OFFSET UNITYSDK_OFFSET(0x12D000C0)
#define EBJFHENGGDL_CTOR_OFFSET UNITYSDK_OFFSET(0x12D000B0)
#define EBJFHENGGDL_JDBEGLPAPBE_OFFSET UNITYSDK_OFFSET(0x12CFFD20)
#define EBJFHENGGDL_NDMBDGKAJEK_OFFSET UNITYSDK_OFFSET(0x12CFF910)

inline static constexpr unsigned int EBJFHENGGDL_TypeDefinitionIndex = 65277;

	class EBJFHENGGDL : public ::HEOLKMLMPML
	{
	public:
		static ::EBJFHENGGDL** StaticGet_HGLIFJGHADE()
		{
			return (::EBJFHENGGDL**)UnitySDK::FromName("", "EBJFHENGGDL")->GetStaticField(0x640B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBJFHENGGDL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBJFHENGGDL_CCTOR_OFFSET))();
		}

		::System::String* NDMBDGKAJEK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBJFHENGGDL_NDMBDGKAJEK_OFFSET))(this);
		}

		::System::String* ACMPHJJOOHE(::FMKEJLGKEMH* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + EBJFHENGGDL_ACMPHJJOOHE_OFFSET))(this, a1, a2);
		}

		::System::UInt32 JDBEGLPAPBE(::FMKEJLGKEMH* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::FMKEJLGKEMH*))((::PBYTE)hIl2Cpp + EBJFHENGGDL_JDBEGLPAPBE_OFFSET))(this, a1);
		}

	};
