#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace UnityEngine::Timeline::Comic::DataSplitter { class AudioContentListSplitter; }

#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_AUDIOCONTENTLISTSPLITTER_AUDIOCONTENTLISTSPLITTER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1F43D380)
#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_AUDIOCONTENTLISTSPLITTER_AUDIOCONTENTLISTSPLITTER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1F43D390)
#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_AUDIOCONTENTLISTSPLITTER_AUDIOCONTENTLISTSPLITTER_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1F43D460)
#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_AUDIOCONTENTLISTSPLITTER_AUDIOCONTENTLISTSPLITTER_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F43D510)

namespace UnityEngine::Timeline::Comic::DataSplitter
{
	inline static constexpr unsigned int AudioContentListSplitter_AudioContentListSplitter_UnityGeneratedFormatter_TypeDefinitionIndex = 32554;

	class AudioContentListSplitter_AudioContentListSplitter_UnityGeneratedFormatter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_AUDIOCONTENTLISTSPLITTER_AUDIOCONTENTLISTSPLITTER_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_AUDIOCONTENTLISTSPLITTER_AUDIOCONTENTLISTSPLITTER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::UnityEngine::Timeline::Comic::DataSplitter::AudioContentListSplitter*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::Comic::DataSplitter::AudioContentListSplitter*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_AUDIOCONTENTLISTSPLITTER_AUDIOCONTENTLISTSPLITTER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::UnityEngine::Timeline::Comic::DataSplitter::AudioContentListSplitter*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::Comic::DataSplitter::AudioContentListSplitter*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_AUDIOCONTENTLISTSPLITTER_AUDIOCONTENTLISTSPLITTER_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
