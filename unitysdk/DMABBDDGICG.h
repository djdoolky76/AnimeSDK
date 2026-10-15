#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
namespace System { class String; }

#define DMABBDDGICG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA2EAE0)

inline static constexpr unsigned int DMABBDDGICG_TypeDefinitionIndex = 42792;

	class DMABBDDGICG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::RuntimeTypeHandle>** StaticGet_FJFMMIIMAGL()
		{
			return (::Il2CppArray<::System::RuntimeTypeHandle>**)UnitySDK::FromName("", "DMABBDDGICG")->GetStaticField(0x26210);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_MLFGMEBDJLD()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DMABBDDGICG")->GetStaticField(0x26218);
		}

		// static const ::System::Object BMGOFHDLJGE; // 0x0
		// static const ::System::Object EIOJBDCOJBC; // 0x0
		// static const ::System::Object PJEIJDEAPBL; // 0x0
		// static const ::System::Object DDDJDADIPNJ; // 0x0
		// static const ::System::Object NLKHKHKFCLP; // 0x0
		// static const ::System::Object NEHIPFCGACA; // 0x0
		// static const ::System::Object IIJAKHPONHA; // 0x0
		// static const ::System::Object PCMFJIIJMMD; // 0x0
		// static const ::System::Object KDHOIFFGCGI; // 0x0
		// static const ::System::Object DHFEBPAFDIF; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMABBDDGICG_CCTOR_OFFSET))();
		}

	};
