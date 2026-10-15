#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HEOLKMLMPML.h"
class DNGMCNPJHBJ;
class FMKEJLGKEMH;
class KGKCFDPJLBC;
namespace System { class String; }

#define GENHFDKDIBH_ACMPHJJOOHE_OFFSET UNITYSDK_OFFSET(0x159E1010)
#define GENHFDKDIBH_ANKKKLIADKM_OFFSET UNITYSDK_OFFSET(0x159E1710)
#define GENHFDKDIBH_CTOR_OFFSET UNITYSDK_OFFSET(0x159E19A0)
#define GENHFDKDIBH_EKECLMPNGEB_OFFSET UNITYSDK_OFFSET(0x159E0EB0)
#define GENHFDKDIBH_HMJMBJFANOF_OFFSET UNITYSDK_OFFSET(0x159E1910)
#define GENHFDKDIBH_LIAJFKOBEKF_OFFSET UNITYSDK_OFFSET(0x159E1520)
#define GENHFDKDIBH_NDMBDGKAJEK_OFFSET UNITYSDK_OFFSET(0x159E0E40)

inline static constexpr unsigned int GENHFDKDIBH_TypeDefinitionIndex = 65296;

	class GENHFDKDIBH : public ::HEOLKMLMPML
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GENHFDKDIBH_CTOR_OFFSET))(this);
		}

		::System::String* NDMBDGKAJEK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GENHFDKDIBH_NDMBDGKAJEK_OFFSET))(this);
		}

		::KGKCFDPJLBC* EKECLMPNGEB()
		{
			return ((::KGKCFDPJLBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GENHFDKDIBH_EKECLMPNGEB_OFFSET))(this);
		}

		::System::String* ACMPHJJOOHE(::FMKEJLGKEMH* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + GENHFDKDIBH_ACMPHJJOOHE_OFFSET))(this, a1, a2);
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
