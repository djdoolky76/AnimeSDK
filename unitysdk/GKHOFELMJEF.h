#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HEOLKMLMPML.h"
class DNGMCNPJHBJ;
class FMKEJLGKEMH;
class GKHOFELMJEF;
namespace System { class String; }

#define GKHOFELMJEF_ACMPHJJOOHE_OFFSET UNITYSDK_OFFSET(0x15A97F40)
#define GKHOFELMJEF_CGAIDHIMPEN_OFFSET UNITYSDK_OFFSET(0x15A98210)
#define GKHOFELMJEF_CTOR_OFFSET UNITYSDK_OFFSET(0x15A97E50)
#define GKHOFELMJEF_KHPHGIMGEDI_OFFSET UNITYSDK_OFFSET(0x15A97DE0)
#define GKHOFELMJEF_NDKJPHKDGDP_OFFSET UNITYSDK_OFFSET(0x15A97E60)
#define GKHOFELMJEF_NDMBDGKAJEK_OFFSET UNITYSDK_OFFSET(0x15A97ED0)

	class GKHOFELMJEF : public ::HEOLKMLMPML
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

		::System::String* NDMBDGKAJEK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHOFELMJEF_NDMBDGKAJEK_OFFSET))(this);
		}

		::System::String* ACMPHJJOOHE(::FMKEJLGKEMH* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + GKHOFELMJEF_ACMPHJJOOHE_OFFSET))(this, a1, a2);
		}

		::System::String* CGAIDHIMPEN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHOFELMJEF_CGAIDHIMPEN_OFFSET))(this);
		}

	};
