#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }

#define PLANETSCCONTROL_CCTOR_OFFSET UNITYSDK_OFFSET(0xCC40520)
#define PLANETSCCONTROL_CLEARRENDERERS_OFFSET UNITYSDK_OFFSET(0xCC3FF90)
#define PLANETSCCONTROL_COLLECTRENDERERS_OFFSET UNITYSDK_OFFSET(0xCC3FE90)
#define PLANETSCCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xCC404C0)
#define PLANETSCCONTROL_STARTCLIP_OFFSET UNITYSDK_OFFSET(0xCC40000)
#define PLANETSCCONTROL_STOPCLIP_OFFSET UNITYSDK_OFFSET(0xCC40270)
#define PLANETSCCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0xCC3F9D0)

inline static constexpr unsigned int PLaneTSCControl_TypeDefinitionIndex = 48307;

	class PLaneTSCControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single width; // 0x18
		::System::Single height; // 0x1C
		::UnityEngine::Color lineColor; // 0x20
		::System::Boolean drawNormal; // 0x30
		::System::Byte _padding0[0x3];
		::System::Single normalLength; // 0x34
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* TargetObjects; // 0x38
		::UnityEngine::GameObject* ClipBlockRoot; // 0x40
		::System::Boolean NEBCHEJDPJA; // 0x48
		static ::System::Int32* StaticGet_JDIOPOAEGGM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "PLaneTSCControl")->GetStaticField(0x16190);
		}

		static ::System::Int32* StaticGet_NEPFNFJCJFD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "PLaneTSCControl")->GetStaticField(0x16194);
		}

		static ::System::Int32* StaticGet_CCEADALFFEM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "PLaneTSCControl")->GetStaticField(0x16198);
		}

		static ::System::Int32* StaticGet_ELBNMMKNPFJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "PLaneTSCControl")->GetStaticField(0x1619C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANETSCCONTROL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLANETSCCONTROL_CCTOR_OFFSET))();
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANETSCCONTROL_UPDATE_OFFSET))(this);
		}

		::System::Void CollectRenderers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANETSCCONTROL_COLLECTRENDERERS_OFFSET))(this);
		}

		::System::Void ClearRenderers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANETSCCONTROL_CLEARRENDERERS_OFFSET))(this);
		}

		::System::Void startClip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANETSCCONTROL_STARTCLIP_OFFSET))(this);
		}

		::System::Void stopClip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANETSCCONTROL_STOPCLIP_OFFSET))(this);
		}

	};
