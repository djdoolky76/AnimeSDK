#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
namespace System { class String; }

#define IANEBBBBAHL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C65FD50)

inline static constexpr unsigned int IANEBBBBAHL_TypeDefinitionIndex = 37054;

	class IANEBBBBAHL : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_MLFGMEBDJLD()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IANEBBBBAHL")->GetStaticField(0xAF20);
		}

		static ::Il2CppArray<::System::RuntimeTypeHandle>** StaticGet_FJFMMIIMAGL()
		{
			return (::Il2CppArray<::System::RuntimeTypeHandle>**)UnitySDK::FromName("", "IANEBBBBAHL")->GetStaticField(0xAF28);
		}

		// static const ::System::Object KFAJCPCHJBF; // 0x0
		// static const ::System::Object IDCJNCIOAJK; // 0x0
		// static const ::System::Object AKPACNCIPAF; // 0x0
		// static const ::System::Object GCNPEDHNFJK; // 0x0
		// static const ::System::Object IECHFDIPOAK; // 0x0
		// static const ::System::Object OKPMJOCEKBC; // 0x0
		// static const ::System::Object PDOCBACOCML; // 0x0
		// static const ::System::Object KBJFDCNDDPH; // 0x0
		// static const ::System::Object AMDJLDPDGFB; // 0x0
		// static const ::System::Object CFDIKLBINHK; // 0x0
		// static const ::System::Object LBIPHLHNJAP; // 0x0
		// static const ::System::Object IMICNEFJMJN; // 0x0
		// static const ::System::Object KKLOHLEPDMB; // 0x0
		// static const ::System::Object NKMNEJLOGKE; // 0x0
		// static const ::System::Object KNPPKKKDOJC; // 0x0
		// static const ::System::Object HCPLAGBBGPC; // 0x0
		// static const ::System::Object DICDJJOJKGF; // 0x0
		// static const ::System::Object DHFEBPAFDIF; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IANEBBBBAHL_CCTOR_OFFSET))();
		}

	};
