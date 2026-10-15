#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GOGCDNMNIKF.h"
class IAOLENHGDKN;
namespace System { class String; }

#define IAOLENHGDKN_CCTOR_OFFSET UNITYSDK_OFFSET(0x15E16CF0)
#define IAOLENHGDKN_CTOR_OFFSET UNITYSDK_OFFSET(0x15E16C90)
#define IAOLENHGDKN_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x15E16CA0)

inline static constexpr unsigned int IAOLENHGDKN_TypeDefinitionIndex = 67735;

	class IAOLENHGDKN : public ::GOGCDNMNIKF
	{
	public:
		static ::IAOLENHGDKN** StaticGet_FMJPMFEDIJL()
		{
			return (::IAOLENHGDKN**)UnitySDK::FromName("", "IAOLENHGDKN")->GetStaticField(0x385C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOLENHGDKN_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAOLENHGDKN_CCTOR_OFFSET))();
		}

		::System::String* JBIOGKPHKKC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOLENHGDKN_JBIOGKPHKKC_OFFSET))(this);
		}

	};
