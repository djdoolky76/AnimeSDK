#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;
namespace System { class String; }

#define UNITYENGINE_UNITYEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x4121740)
#define UNITYENGINE_UNITYEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x41216C0)
#define UNITYENGINE_UNITYEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x4121650)

namespace UnityEngine
{
	inline static constexpr unsigned int UnityException_TypeDefinitionIndex = 17013;

	class UnityException : public ::System::Exception
	{
	public:
		::System::String* unityStackTrace; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* B083BE7841B347C4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYEXCEPTION__CTOR_1_OFFSET))(this, B083BE7841B347C4);
		}

		::System::Void _ctor_2(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYEXCEPTION__CTOR_2_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}
	};
}
