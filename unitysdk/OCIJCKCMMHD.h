#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCIJCKCMMHD;
namespace System { class String; }
namespace UnityEngine { class GUIContent; }
namespace UnityEngine { class GUIStyle; }

#define OCIJCKCMMHD_CTOR_OFFSET UNITYSDK_OFFSET(0xBD6CE80)
#define OCIJCKCMMHD_DNHLOGAJIGN_OFFSET UNITYSDK_OFFSET(0xBD6CDE0)

	class OCIJCKCMMHD : public ::System::Object
	{
	public:
		::System::String* OAKGNPDJPBE; // 0x10
		::UnityEngine::GUIStyle* JPAGHLAGBKH; // 0x18
		::UnityEngine::GUIContent* CMLIGBGANML; // 0x20
		::UnityEngine::GUIStyle* EKBHGEBNHHL; // 0x28
		::System::String* EABJNFEEIML; // 0x30
		::UnityEngine::GUIStyle* KFOOOGCIFAE; // 0x38
		::System::Int32 NOFHFOLALEI; // 0x40
		static ::OCIJCKCMMHD** StaticGet_BONBDEKAPKG()
		{
			return (::OCIJCKCMMHD**)UnitySDK::FromName("", "OCIJCKCMMHD")->GetStaticField(0x5EE10);
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
