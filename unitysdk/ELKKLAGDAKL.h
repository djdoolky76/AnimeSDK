#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EJLNMFOPGOP.h"
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define ELKKLAGDAKL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1551AB20)
#define ELKKLAGDAKL_CTOR_OFFSET UNITYSDK_OFFSET(0x1551AAE0)
#define ELKKLAGDAKL_DALIOPHDBIP_OFFSET UNITYSDK_OFFSET(0x1551AA30)
#define ELKKLAGDAKL_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x1551A8C0)
#define ELKKLAGDAKL_JHJODHHJLAK_OFFSET UNITYSDK_OFFSET(0x1551A9A0)
#define ELKKLAGDAKL__ONBIND_OFFSET UNITYSDK_OFFSET(0x1551A860)

inline static constexpr unsigned int ELKKLAGDAKL_TypeDefinitionIndex = 71864;

	class ELKKLAGDAKL : public ::EJLNMFOPGOP
	{
	public:
		::UnityEngine::Animation* JPHOOFFIAAH; // 0xD0
		static ::System::String** StaticGet_DJCBDJMACFH()
		{
			return (::System::String**)UnitySDK::FromName("", "ELKKLAGDAKL")->GetStaticField(0x399A0);
		}

		// static const ::System::String* IIFENECAOBG; // 0x0
		// static const ::System::String* CGNGHKIIGCM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELKKLAGDAKL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELKKLAGDAKL_CCTOR_OFFSET))();
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELKKLAGDAKL__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELKKLAGDAKL_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void DALIOPHDBIP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ELKKLAGDAKL_DALIOPHDBIP_OFFSET))(this, a1);
		}

		::System::Void JHJODHHJLAK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ELKKLAGDAKL_JHJODHHJLAK_OFFSET))(this, a1);
		}

	};
