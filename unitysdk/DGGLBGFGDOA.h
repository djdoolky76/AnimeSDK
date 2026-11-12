#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define DGGLBGFGDOA_CCTOR_OFFSET UNITYSDK_OFFSET(0xF41B580)
#define DGGLBGFGDOA_CTOR_OFFSET UNITYSDK_OFFSET(0xF41B570)

inline static constexpr unsigned int DGGLBGFGDOA_TypeDefinitionIndex = 81491;

	class DGGLBGFGDOA : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_FHMMAOOCOPN()
		{
			return (::System::String**)UnitySDK::FromName("", "DGGLBGFGDOA")->GetStaticField(0x5B230);
		}

		static ::System::String** StaticGet_NCECAMLOOMI()
		{
			return (::System::String**)UnitySDK::FromName("", "DGGLBGFGDOA")->GetStaticField(0x5B238);
		}

		static ::System::String** StaticGet_OIPFHHEPHBH()
		{
			return (::System::String**)UnitySDK::FromName("", "DGGLBGFGDOA")->GetStaticField(0x5B240);
		}

		static ::System::String** StaticGet_KENNHJJMKMN()
		{
			return (::System::String**)UnitySDK::FromName("", "DGGLBGFGDOA")->GetStaticField(0x5B248);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGLBGFGDOA_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGGLBGFGDOA_CCTOR_OFFSET))();
		}

	};
