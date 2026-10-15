#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { class TMP_FontAsset; }

#define HOCIFDEKNLA_CBGFKLMPCCG_OFFSET UNITYSDK_OFFSET(0x15DB06C0)
#define HOCIFDEKNLA_CTOR_OFFSET UNITYSDK_OFFSET(0x15DB0860)
#define HOCIFDEKNLA_LPEMIHCDFNG_OFFSET UNITYSDK_OFFSET(0x15DB0420)
#define HOCIFDEKNLA_MGOGMCPGDIO_OFFSET UNITYSDK_OFFSET(0x15DB0490)
#define HOCIFDEKNLA_OAFEGLNIEBO_OFFSET UNITYSDK_OFFSET(0x15DB07E0)

	class HOCIFDEKNLA : public ::System::Object
	{
	public:
		// static const ::System::String* PLBHLGMKGGH; // 0x0
		// static const ::System::String* JKJKELLAJLA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOCIFDEKNLA_CTOR_OFFSET))(this);
		}

		static ::TMPro::TMP_FontAsset* LPEMIHCDFNG(::System::String* a1)
		{
			return ((::TMPro::TMP_FontAsset*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOCIFDEKNLA_LPEMIHCDFNG_OFFSET))(a1);
		}

		static ::TMPro::TMP_FontAsset* MGOGMCPGDIO(::System::String* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
		{
			return ((::TMPro::TMP_FontAsset*(*)(::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + HOCIFDEKNLA_MGOGMCPGDIO_OFFSET))(a1, a2);
		}

		static ::TMPro::TMP_FontAsset* CBGFKLMPCCG()
		{
			return ((::TMPro::TMP_FontAsset*(*)())((::PBYTE)hIl2Cpp + HOCIFDEKNLA_CBGFKLMPCCG_OFFSET))();
		}

		static ::System::String* OAFEGLNIEBO()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + HOCIFDEKNLA_OAFEGLNIEBO_OFFSET))();
		}

	};
