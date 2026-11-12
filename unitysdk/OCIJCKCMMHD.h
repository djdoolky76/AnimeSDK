#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCIJCKCMMHD;
namespace System { class String; }
namespace UnityEngine { class GUIContent; }
namespace UnityEngine { class GUIStyle; }

#define OCIJCKCMMHD_CTOR_OFFSET UNITYSDK_OFFSET(0xC671860)
#define OCIJCKCMMHD_DNHLOGAJIGN_OFFSET UNITYSDK_OFFSET(0xC6717C0)

inline static constexpr unsigned int OCIJCKCMMHD_TypeDefinitionIndex = 70273;

	class OCIJCKCMMHD : public ::System::Object
	{
	public:
		::UnityEngine::GUIStyle* JPAGHLAGBKH; // 0x10
		::UnityEngine::GUIContent* CMLIGBGANML; // 0x18
		::UnityEngine::GUIStyle* KFOOOGCIFAE; // 0x20
		::System::String* OAKGNPDJPBE; // 0x28
		::System::String* EABJNFEEIML; // 0x30
		::UnityEngine::GUIStyle* EKBHGEBNHHL; // 0x38
		::System::Int32 NOFHFOLALEI; // 0x40
		static ::OCIJCKCMMHD** StaticGet_BONBDEKAPKG()
		{
			return (::OCIJCKCMMHD**)UnitySDK::FromName("", "OCIJCKCMMHD")->GetStaticField(0x65E10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIJCKCMMHD_CTOR_OFFSET))(this);
		}

		static ::OCIJCKCMMHD* DNHLOGAJIGN()
		{
			return ((::OCIJCKCMMHD*(*)())((::PBYTE)hIl2Cpp + OCIJCKCMMHD_DNHLOGAJIGN_OFFSET))();
		}

	};
