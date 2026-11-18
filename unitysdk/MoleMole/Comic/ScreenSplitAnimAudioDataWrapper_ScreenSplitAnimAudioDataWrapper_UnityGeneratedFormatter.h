#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Comic { class ScreenSplitAnimAudioDataWrapper; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_COMIC_SCREENSPLITANIMAUDIODATAWRAPPER_SCREENSPLITANIMAUDIODATAWRAPPER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1FD8B3E0)
#define MOLEMOLE_COMIC_SCREENSPLITANIMAUDIODATAWRAPPER_SCREENSPLITANIMAUDIODATAWRAPPER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1FD8B3F0)
#define MOLEMOLE_COMIC_SCREENSPLITANIMAUDIODATAWRAPPER_SCREENSPLITANIMAUDIODATAWRAPPER_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1FD8B4C0)
#define MOLEMOLE_COMIC_SCREENSPLITANIMAUDIODATAWRAPPER_SCREENSPLITANIMAUDIODATAWRAPPER_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FD8B570)

namespace MoleMole::Comic
{
	inline static constexpr unsigned int ScreenSplitAnimAudioDataWrapper_ScreenSplitAnimAudioDataWrapper_UnityGeneratedFormatter_TypeDefinitionIndex = 32226;

	class ScreenSplitAnimAudioDataWrapper_ScreenSplitAnimAudioDataWrapper_UnityGeneratedFormatter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_SCREENSPLITANIMAUDIODATAWRAPPER_SCREENSPLITANIMAUDIODATAWRAPPER_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_SCREENSPLITANIMAUDIODATAWRAPPER_SCREENSPLITANIMAUDIODATAWRAPPER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Comic::ScreenSplitAnimAudioDataWrapper*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Comic::ScreenSplitAnimAudioDataWrapper*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_SCREENSPLITANIMAUDIODATAWRAPPER_SCREENSPLITANIMAUDIODATAWRAPPER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Comic::ScreenSplitAnimAudioDataWrapper*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Comic::ScreenSplitAnimAudioDataWrapper*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_SCREENSPLITANIMAUDIODATAWRAPPER_SCREENSPLITANIMAUDIODATAWRAPPER_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
