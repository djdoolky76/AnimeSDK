#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
namespace System { class String; }

#define NEFHJFPLNHE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C927810)

inline static constexpr unsigned int NEFHJFPLNHE_TypeDefinitionIndex = 42791;

	class NEFHJFPLNHE : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::RuntimeTypeHandle>** StaticGet_FJFMMIIMAGL()
		{
			return (::Il2CppArray<::System::RuntimeTypeHandle>**)UnitySDK::FromName("", "NEFHJFPLNHE")->GetStaticField(0x2C2A0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_MLFGMEBDJLD()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NEFHJFPLNHE")->GetStaticField(0x2C2A8);
		}

		// static const ::System::Object OMJFJMKKKNJ; // 0x0
		// static const ::System::Object CIMBNNMOBLK; // 0x0
		// static const ::System::Object AIFJKNOEJAI; // 0x0
		// static const ::System::Object JGBGMMLEBCI; // 0x0
		// static const ::System::Object PJLKEFFEAHE; // 0x0
		// static const ::System::Object JGJKBKOBEBG; // 0x0
		// static const ::System::Object DHFEBPAFDIF; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEFHJFPLNHE_CCTOR_OFFSET))();
		}

	};
