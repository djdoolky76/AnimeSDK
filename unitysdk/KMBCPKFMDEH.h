#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define KMBCPKFMDEH_BBAMDLPPKNP_OFFSET UNITYSDK_OFFSET(0xB53BBA0)
#define KMBCPKFMDEH_CCTOR_OFFSET UNITYSDK_OFFSET(0xB53BD40)
#define KMBCPKFMDEH_CTOR_OFFSET UNITYSDK_OFFSET(0xB53B8C0)
#define KMBCPKFMDEH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB53BAB0)
#define KMBCPKFMDEH_PIHPPBJIJFC_OFFSET UNITYSDK_OFFSET(0xB53BB00)
#define KMBCPKFMDEH_PINNIHNGDNC_OFFSET UNITYSDK_OFFSET(0xB53BC40)

inline static constexpr unsigned int KMBCPKFMDEH_TypeDefinitionIndex = 78984;

	class KMBCPKFMDEH : public ::System::Object
	{
	public:
		::UnityEngine::Animator* MABMPCKBKNI; // 0x10
		static ::System::String** StaticGet_HFJLGKGPKOM()
		{
			return (::System::String**)UnitySDK::FromName("", "KMBCPKFMDEH")->GetStaticField(0x5EDF0);
		}

		static ::System::Int32* StaticGet_NPHHMJPMMHM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KMBCPKFMDEH")->GetStaticField(0x14490);
		}

		static ::System::Int32* StaticGet_PBAEAGEPDCH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KMBCPKFMDEH")->GetStaticField(0x14494);
		}

		static ::System::Int32* StaticGet_OMDPHFLEHEF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KMBCPKFMDEH")->GetStaticField(0x14498);
		}

		static ::System::Int32* StaticGet_ECOIODPLNOO()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KMBCPKFMDEH")->GetStaticField(0x1449C);
		}

		static ::System::Int32* StaticGet_GPDFLOGAMIP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KMBCPKFMDEH")->GetStaticField(0x144A0);
		}

		::System::Void _ctor(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + KMBCPKFMDEH_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMBCPKFMDEH_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMBCPKFMDEH_DISPOSE_OFFSET))(this);
		}

		::System::Void PIHPPBJIJFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMBCPKFMDEH_PIHPPBJIJFC_OFFSET))(this);
		}

		::System::Void BBAMDLPPKNP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMBCPKFMDEH_BBAMDLPPKNP_OFFSET))(this);
		}

		::System::Void PINNIHNGDNC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KMBCPKFMDEH_PINNIHNGDNC_OFFSET))(this, a1);
		}

	};
