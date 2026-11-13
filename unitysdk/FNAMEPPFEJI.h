#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define FNAMEPPFEJI_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0x17F10DE0)
#define FNAMEPPFEJI_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x17F10E90)
#define FNAMEPPFEJI_CTOR_OFFSET UNITYSDK_OFFSET(0x17F110E0)
#define FNAMEPPFEJI_DKKJNPPHDPM_OFFSET UNITYSDK_OFFSET(0x17F10CA0)
#define FNAMEPPFEJI__ONBIND_OFFSET UNITYSDK_OFFSET(0x17F10F30)
#define FNAMEPPFEJI__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x17F10FD0)

inline static constexpr unsigned int FNAMEPPFEJI_TypeDefinitionIndex = 73902;

	class FNAMEPPFEJI : public ::FMPCODLIOLG
	{
	public:
		::System::String* IGJJHEEENHC; // 0x60
		::UnityEngine::Animator* APPGGMLEPLN; // 0x68
		::System::Single ADPMMNEFDPA; // 0x70
		::System::Boolean IDBHEIBEGBA; // 0x74
		// static const ::System::String* MKKFPJGMJOO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAMEPPFEJI_CTOR_OFFSET))(this);
		}

		::System::Void DKKJNPPHDPM(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + FNAMEPPFEJI_DKKJNPPHDPM_OFFSET))(this, a1, a2);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FNAMEPPFEJI_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAMEPPFEJI__ONBIND_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAMEPPFEJI__SETUPVIEW_OFFSET))(this);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + FNAMEPPFEJI_BIOBBNGDGDF_OFFSET))(this, a1, a2);
		}

	};
