#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
namespace System { class String; }

#define KAILHGPDANB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6DBE60)

inline static constexpr unsigned int KAILHGPDANB_TypeDefinitionIndex = 37053;

	class KAILHGPDANB : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::RuntimeTypeHandle>** StaticGet_FJFMMIIMAGL()
		{
			return (::Il2CppArray<::System::RuntimeTypeHandle>**)UnitySDK::FromName("", "KAILHGPDANB")->GetStaticField(0xFB60);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_MLFGMEBDJLD()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KAILHGPDANB")->GetStaticField(0xFB68);
		}

		// static const ::System::Object KFAJCPCHJBF; // 0x0
		// static const ::System::Object FHAAHMEJMCI; // 0x0
		// static const ::System::Object GCNPEDHNFJK; // 0x0
		// static const ::System::Object AKDIGKJHFKJ; // 0x0
		// static const ::System::Object INFJMBOAIII; // 0x0
		// static const ::System::Object NBLBIADENEL; // 0x0
		// static const ::System::Object DICDJJOJKGF; // 0x0
		// static const ::System::Object DHFEBPAFDIF; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAILHGPDANB_CCTOR_OFFSET))();
		}

	};
