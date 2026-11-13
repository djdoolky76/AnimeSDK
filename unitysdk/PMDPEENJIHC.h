#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMDPEENJIHC;
namespace System { class String; }

#define PMDPEENJIHC_BBKMHKOHEMC_OFFSET UNITYSDK_OFFSET(0x1889D0F0)
#define PMDPEENJIHC_CTOR_OFFSET UNITYSDK_OFFSET(0x1889D3F0)

inline static constexpr unsigned int PMDPEENJIHC_TypeDefinitionIndex = 66322;

	class PMDPEENJIHC : public ::System::Object
	{
	public:
		::System::String* Game; // 0x10
		::System::String* SignType; // 0x18
		::System::String* AuthKey; // 0x20
		::System::String* AuthkeyVer; // 0x28
		::System::String* Lang; // 0x30
		::System::String* AuthAppID; // 0x38
		::System::String* GameBiz; // 0x40
		static ::PMDPEENJIHC** StaticGet_OEHHIIEPDIK()
		{
			return (::PMDPEENJIHC**)UnitySDK::FromName("", "PMDPEENJIHC")->GetStaticField(0x73CC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDPEENJIHC_CTOR_OFFSET))(this);
		}

		static ::PMDPEENJIHC* BBKMHKOHEMC(::System::String* a1)
		{
			return ((::PMDPEENJIHC*(*)(::System::String*))((::PBYTE)hIl2Cpp + PMDPEENJIHC_BBKMHKOHEMC_OFFSET))(a1);
		}

	};
