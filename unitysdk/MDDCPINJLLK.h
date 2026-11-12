#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LEMPCCICHAA.h"
class KAKADGHNMFK;
namespace System { class String; }

#define MDDCPINJLLK_CTOR_OFFSET UNITYSDK_OFFSET(0xC14BBE0)
#define MDDCPINJLLK_ECIPFMLHBKG_OFFSET UNITYSDK_OFFSET(0xC14BA70)
#define MDDCPINJLLK_FMJBFKGPEPP_OFFSET UNITYSDK_OFFSET(0xC14BAE0)
#define MDDCPINJLLK_KAJOBJFIAMJ_OFFSET UNITYSDK_OFFSET(0xC14BA00)
#define MDDCPINJLLK_MFLPNHDNCBD_OFFSET UNITYSDK_OFFSET(0xC14BB50)

inline static constexpr unsigned int MDDCPINJLLK_TypeDefinitionIndex = 80301;

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
