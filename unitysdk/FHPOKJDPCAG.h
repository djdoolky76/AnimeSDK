#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
namespace System { class String; }

#define FHPOKJDPCAG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5EC2A0)

inline static constexpr unsigned int FHPOKJDPCAG_TypeDefinitionIndex = 37052;

	class FHPOKJDPCAG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::RuntimeTypeHandle>** StaticGet_FJFMMIIMAGL()
		{
			return (::Il2CppArray<::System::RuntimeTypeHandle>**)UnitySDK::FromName("", "FHPOKJDPCAG")->GetStaticField(0x14F30);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_MLFGMEBDJLD()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FHPOKJDPCAG")->GetStaticField(0x14F38);
		}

		// static const ::System::Object NMGAJKCCJKO; // 0x0
		// static const ::System::Object EOIMBBFNKPP; // 0x0
		// static const ::System::Object KFAJCPCHJBF; // 0x0
		// static const ::System::Object FHAAHMEJMCI; // 0x0
		// static const ::System::Object GCNPEDHNFJK; // 0x0
		// static const ::System::Object DICDJJOJKGF; // 0x0
		// static const ::System::Object DHFEBPAFDIF; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHPOKJDPCAG_CCTOR_OFFSET))();
		}

	};
