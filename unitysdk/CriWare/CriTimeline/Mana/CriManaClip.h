#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriTimeline/Mana/CriManaClipBase.h"

namespace System { class String; }
namespace UnityEngine { class TextAsset; }

#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIP_A2F907C52F430FE3_OFFSET UNITYSDK_OFFSET(0x2AAB430)
#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIP_E034E6AD8223B882_OFFSET UNITYSDK_OFFSET(0x2AAB4C0)
#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIP_F971FE367C90154F_OFFSET UNITYSDK_OFFSET(0x2AAB360)
#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIP_FF76CDF3BD18C203_OFFSET UNITYSDK_OFFSET(0x17F7020)
#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x2AAB300)

namespace CriWare::CriTimeline::Mana
{
	inline static constexpr unsigned int CriManaClip_TypeDefinitionIndex = 19114;

	class CriManaClip : public ::CriWare::CriTimeline::Mana::CriManaClipBase
	{
	public:
		::System::String* m_moviePath; // 0xA8
		::UnityEngine::TextAsset* m_movieData; // 0xB0

		::System::Int32 F971FE367C90154F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIP_F971FE367C90154F_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIP__CTOR_OFFSET))(this);
		}

		::System::String* E034E6AD8223B882()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIP_E034E6AD8223B882_OFFSET))(this);
		}

		::System::String* FF76CDF3BD18C203()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIP_FF76CDF3BD18C203_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* A2F907C52F430FE3()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIP_A2F907C52F430FE3_OFFSET))(this);
		}
	};
}
