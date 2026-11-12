#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
namespace System { class String; }

#define NLGLJEDOLGF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB31B60)

inline static constexpr unsigned int NLGLJEDOLGF_TypeDefinitionIndex = 43777;

	class NLGLJEDOLGF : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_MLFGMEBDJLD()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NLGLJEDOLGF")->GetStaticField(0x56510);
		}

		static ::Il2CppArray<::System::RuntimeTypeHandle>** StaticGet_FJFMMIIMAGL()
		{
			return (::Il2CppArray<::System::RuntimeTypeHandle>**)UnitySDK::FromName("", "NLGLJEDOLGF")->GetStaticField(0x56518);
		}

		// static const ::System::Object DGIKNEHDGLJ; // 0x0
		// static const ::System::Object CFDBPGHKKFM; // 0x0
		// static const ::System::Object AHFMMPIIDGK; // 0x0
		// static const ::System::Object LJLNLPMKIBN; // 0x0
		// static const ::System::Object LCGCFFHGGNC; // 0x0
		// static const ::System::Object EIEMBHPCMLE; // 0x0
		// static const ::System::Object IKNLOOFFGNK; // 0x0
		// static const ::System::Object DLNKHNACAFD; // 0x0
		// static const ::System::Object EODELBIPJBG; // 0x0
		// static const ::System::Object PBNPPJEMDKL; // 0x0
		// static const ::System::Object CCKJLHMKDBO; // 0x0
		// static const ::System::Object DHFEBPAFDIF; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLGLJEDOLGF_CCTOR_OFFSET))();
		}

	};
