#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomSourceBase.h"
#include "unitysdk/CriWare/CriAtomExPlayback.h"
namespace CriWare { class CriAtomExAcb; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define CRIWARE_CRIATOMSOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1754D5D0)
#define CRIWARE_CRIATOMSOURCE_GETACB_OFFSET UNITYSDK_OFFSET(0x1754D4D0)
#define CRIWARE_CRIATOMSOURCE_GET_CUENAME_OFFSET UNITYSDK_OFFSET(0x1754D320)
#define CRIWARE_CRIATOMSOURCE_GET_CUESHEET_OFFSET UNITYSDK_OFFSET(0x1754D340)
#define CRIWARE_CRIATOMSOURCE_PLAYASYNC_OFFSET UNITYSDK_OFFSET(0x1754D570)
#define CRIWARE_CRIATOMSOURCE_PLAYONSTART_OFFSET UNITYSDK_OFFSET(0x1754D4F0)
#define CRIWARE_CRIATOMSOURCE_PLAY_OFFSET UNITYSDK_OFFSET(0x1754D360)
#define CRIWARE_CRIATOMSOURCE_SET_CUENAME_OFFSET UNITYSDK_OFFSET(0x1754D330)
#define CRIWARE_CRIATOMSOURCE_SET_CUESHEET_OFFSET UNITYSDK_OFFSET(0x1754D350)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomSource_TypeDefinitionIndex = 40916;

	class CriAtomSource : public ::CriWare::CriAtomSourceBase
	{
	public:
		::System::String* _cueName; // 0xA0
		::System::String* _cueSheet; // 0xA8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCE_CTOR_OFFSET))(this);
		}

		::System::String* get_cueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCE_GET_CUENAME_OFFSET))(this);
		}

		::System::Void set_cueName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCE_SET_CUENAME_OFFSET))(this, a1);
		}

		::System::String* get_cueSheet()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCE_GET_CUESHEET_OFFSET))(this);
		}

		::System::Void set_cueSheet(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCE_SET_CUESHEET_OFFSET))(this, a1);
		}

		::CriWare::CriAtomExPlayback Play()
		{
			return ((::CriWare::CriAtomExPlayback(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCE_PLAY_OFFSET))(this);
		}

		::CriWare::CriAtomExAcb* GetAcb()
		{
			return ((::CriWare::CriAtomExAcb*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCE_GETACB_OFFSET))(this);
		}

		::System::Void PlayOnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCE_PLAYONSTART_OFFSET))(this);
		}

		::System::Collections::IEnumerator* PlayAsync(::System::String* a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCE_PLAYASYNC_OFFSET))(this, a1);
		}

	};
}
