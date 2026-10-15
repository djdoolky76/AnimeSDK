#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LEMPCCICHAA.h"
class KAKADGHNMFK;
namespace System { class String; }

#define MDDCPINJLLK_CTOR_OFFSET UNITYSDK_OFFSET(0xB897EF0)
#define MDDCPINJLLK_ECIPFMLHBKG_OFFSET UNITYSDK_OFFSET(0xB897D80)
#define MDDCPINJLLK_FMJBFKGPEPP_OFFSET UNITYSDK_OFFSET(0xB897DF0)
#define MDDCPINJLLK_KAJOBJFIAMJ_OFFSET UNITYSDK_OFFSET(0xB897D10)
#define MDDCPINJLLK_MFLPNHDNCBD_OFFSET UNITYSDK_OFFSET(0xB897E60)

inline static constexpr unsigned int MDDCPINJLLK_TypeDefinitionIndex = 77565;

	class MDDCPINJLLK : public ::LEMPCCICHAA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDCPINJLLK_CTOR_OFFSET))(this);
		}

		::System::String* KAJOBJFIAMJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDCPINJLLK_KAJOBJFIAMJ_OFFSET))(this);
		}

		::System::Void ECIPFMLHBKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDCPINJLLK_ECIPFMLHBKG_OFFSET))(this);
		}

		::System::Void FMJBFKGPEPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDCPINJLLK_FMJBFKGPEPP_OFFSET))(this);
		}

		::System::Void MFLPNHDNCBD(::KAKADGHNMFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + MDDCPINJLLK_MFLPNHDNCBD_OFFSET))(this, a1);
		}

	};
