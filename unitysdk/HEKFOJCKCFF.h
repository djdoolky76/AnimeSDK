#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADLGBJAOFPD.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define HEKFOJCKCFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x15C4C310)
#define HEKFOJCKCFF_CPJNGKEIKNC_OFFSET UNITYSDK_OFFSET(0x15C4B520)
#define HEKFOJCKCFF_CTOR_OFFSET UNITYSDK_OFFSET(0x15C4C2D0)
#define HEKFOJCKCFF_DOEDECKEMEF_OFFSET UNITYSDK_OFFSET(0x15C4B5C0)
#define HEKFOJCKCFF_EDLMOGDKENK_OFFSET UNITYSDK_OFFSET(0x15C4B750)
#define HEKFOJCKCFF_LCPMDGPHCCA_OFFSET UNITYSDK_OFFSET(0x15C4BFC0)
#define HEKFOJCKCFF_LJLJJOBDGDO_OFFSET UNITYSDK_OFFSET(0x15C4B470)
#define HEKFOJCKCFF_MNBCJOMABHK_OFFSET UNITYSDK_OFFSET(0x15C4BCC0)
#define HEKFOJCKCFF_NGIMHJIBLPM_OFFSET UNITYSDK_OFFSET(0x15C4BDD0)
#define HEKFOJCKCFF_NJIMJHEDDBJ_OFFSET UNITYSDK_OFFSET(0x15C4C120)
#define HEKFOJCKCFF_ODFDCFMCCEI_OFFSET UNITYSDK_OFFSET(0x15C4C050)
#define HEKFOJCKCFF_OFGIIELDNBF_OFFSET UNITYSDK_OFFSET(0x15C4BE40)
#define HEKFOJCKCFF_PAIHBMIGDIO_OFFSET UNITYSDK_OFFSET(0x15C4BD50)
#define HEKFOJCKCFF__ONBIND_OFFSET UNITYSDK_OFFSET(0x15C4B400)

inline static constexpr unsigned int HEKFOJCKCFF_TypeDefinitionIndex = 71219;

	class HEKFOJCKCFF : public ::ADLGBJAOFPD
	{
	public:
		::UnityEngine::Animator* CFNGLMDMENE; // 0x90
		::System::Boolean AKBAIKCDEHP; // 0x98
		::System::Boolean FABJEFIPHNE; // 0x99
		::System::Byte _padding0[0x2];
		::System::Int32 GIKKNBOHBPO; // 0x9C
		::System::Single CLPBDEJBANF; // 0xA0
		static ::Il2CppArray<::System::String*>** StaticGet_MOBLNLPNOIN()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HEKFOJCKCFF")->GetStaticField(0x10720);
		}

		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* BOPPOHOHLHN; // 0x0
		// static const ::System::Object KEFLNKAEIJM; // 0x0
		// static const ::System::Object PIDFBBFOGCI; // 0x0
		// static const ::System::Object KCKDLJJIPDM; // 0x0
		// static const ::System::String* ACEPDOCGBCH; // 0x0
		// static const ::System::String* OCIAKPLEONA; // 0x0
		// static const ::System::String* GHJEODKFIAA; // 0x0
		// static const ::System::String* JDFBFCEEOGB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKFOJCKCFF_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEKFOJCKCFF_CCTOR_OFFSET))();
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKFOJCKCFF__ONBIND_OFFSET))(this);
		}

		::System::Void LJLJJOBDGDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKFOJCKCFF_LJLJJOBDGDO_OFFSET))(this);
		}

		::System::Void DOEDECKEMEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKFOJCKCFF_DOEDECKEMEF_OFFSET))(this);
		}

		::System::Void MNBCJOMABHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKFOJCKCFF_MNBCJOMABHK_OFFSET))(this);
		}

		::System::Boolean CPJNGKEIKNC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKFOJCKCFF_CPJNGKEIKNC_OFFSET))(this);
		}

		::System::Void NGIMHJIBLPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKFOJCKCFF_NGIMHJIBLPM_OFFSET))(this);
		}

		::System::Void EDLMOGDKENK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEKFOJCKCFF_EDLMOGDKENK_OFFSET))(this, a1);
		}

		::System::Void PAIHBMIGDIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKFOJCKCFF_PAIHBMIGDIO_OFFSET))(this);
		}

		::System::Void LCPMDGPHCCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKFOJCKCFF_LCPMDGPHCCA_OFFSET))(this);
		}

		::System::Void NJIMJHEDDBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKFOJCKCFF_NJIMJHEDDBJ_OFFSET))(this);
		}

		::System::Void ODFDCFMCCEI(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HEKFOJCKCFF_ODFDCFMCCEI_OFFSET))(this, a1);
		}

		::System::Void OFGIIELDNBF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HEKFOJCKCFF_OFGIIELDNBF_OFFSET))(this, a1);
		}

	};
