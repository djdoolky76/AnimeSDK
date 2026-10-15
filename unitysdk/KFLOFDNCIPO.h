#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HEOLKMLMPML.h"
class DNGMCNPJHBJ;
class FMKEJLGKEMH;
class KFLOFDNCIPO;
namespace System { class String; }

#define KFLOFDNCIPO_ACMPHJJOOHE_OFFSET UNITYSDK_OFFSET(0xB3C54E0)
#define KFLOFDNCIPO_CCTOR_OFFSET UNITYSDK_OFFSET(0xB3C5A60)
#define KFLOFDNCIPO_CTOR_OFFSET UNITYSDK_OFFSET(0xB3C5A50)
#define KFLOFDNCIPO_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0xB3C5420)
#define KFLOFDNCIPO_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0xB3C5480)
#define KFLOFDNCIPO_NDMBDGKAJEK_OFFSET UNITYSDK_OFFSET(0xB3C53B0)

	class KFLOFDNCIPO : public ::HEOLKMLMPML
	{
	public:
		::System::Boolean ONFKPBBCNLA; // 0x10
		static ::KFLOFDNCIPO** StaticGet__Empty_k__BackingField()
		{
			return (::KFLOFDNCIPO**)UnitySDK::FromName("", "KFLOFDNCIPO")->GetStaticField(0x4B0E0);
		}

		static ::KFLOFDNCIPO** StaticGet__Default_k__BackingField()
		{
			return (::KFLOFDNCIPO**)UnitySDK::FromName("", "KFLOFDNCIPO")->GetStaticField(0x4B0E8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLOFDNCIPO_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFLOFDNCIPO_CCTOR_OFFSET))();
		}

		::System::String* NDMBDGKAJEK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLOFDNCIPO_NDMBDGKAJEK_OFFSET))(this);
		}

		static ::KFLOFDNCIPO* get_Default()
		{
			return ((::KFLOFDNCIPO*(*)())((::PBYTE)hIl2Cpp + KFLOFDNCIPO_GET_DEFAULT_OFFSET))();
		}

		static ::KFLOFDNCIPO* get_Empty()
		{
			return ((::KFLOFDNCIPO*(*)())((::PBYTE)hIl2Cpp + KFLOFDNCIPO_GET_EMPTY_OFFSET))();
		}

		::System::String* ACMPHJJOOHE(::FMKEJLGKEMH* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + KFLOFDNCIPO_ACMPHJJOOHE_OFFSET))(this, a1, a2);
		}

	};
