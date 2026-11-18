#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace UnityEngine::Timeline::Comic::DataSplitter { class BGMPageInfoSplitter; }

#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_BGMPAGEINFOSPLITTER_BGMPAGEINFOSPLITTER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1F43D550)
#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_BGMPAGEINFOSPLITTER_BGMPAGEINFOSPLITTER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1F43D560)
#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_BGMPAGEINFOSPLITTER_BGMPAGEINFOSPLITTER_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1F43D630)
#define UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_BGMPAGEINFOSPLITTER_BGMPAGEINFOSPLITTER_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F43D6E0)

namespace UnityEngine::Timeline::Comic::DataSplitter
{
	inline static constexpr unsigned int BGMPageInfoSplitter_BGMPageInfoSplitter_UnityGeneratedFormatter_TypeDefinitionIndex = 32558;

	class BGMPageInfoSplitter_BGMPageInfoSplitter_UnityGeneratedFormatter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_BGMPAGEINFOSPLITTER_BGMPAGEINFOSPLITTER_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_BGMPAGEINFOSPLITTER_BGMPAGEINFOSPLITTER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::UnityEngine::Timeline::Comic::DataSplitter::BGMPageInfoSplitter*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::Comic::DataSplitter::BGMPageInfoSplitter*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_BGMPAGEINFOSPLITTER_BGMPAGEINFOSPLITTER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::UnityEngine::Timeline::Comic::DataSplitter::BGMPageInfoSplitter*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::Comic::DataSplitter::BGMPageInfoSplitter*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_COMIC_DATASPLITTER_BGMPAGEINFOSPLITTER_BGMPAGEINFOSPLITTER_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
