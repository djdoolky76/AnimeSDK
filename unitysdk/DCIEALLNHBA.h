#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
namespace System { class String; }

#define DCIEALLNHBA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA1B5B0)

inline static constexpr unsigned int DCIEALLNHBA_TypeDefinitionIndex = 42800;

	class DCIEALLNHBA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::RuntimeTypeHandle>** StaticGet_FJFMMIIMAGL()
		{
			return (::Il2CppArray<::System::RuntimeTypeHandle>**)UnitySDK::FromName("", "DCIEALLNHBA")->GetStaticField(0x1FB00);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_MLFGMEBDJLD()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DCIEALLNHBA")->GetStaticField(0x1FB08);
		}

		// static const ::System::Object NAFOMFHONAH; // 0x0
		// static const ::System::Object DHFEBPAFDIF; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCIEALLNHBA_CCTOR_OFFSET))();
		}

	};
