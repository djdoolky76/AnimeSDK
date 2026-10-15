#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GameCore/Foundation/Collections/ExceptionArgument.h"
#include "unitysdk/GameCore/Foundation/Collections/ExceptionResource.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define KJLMCEGOFBK_AFCIMDKJPGK_OFFSET UNITYSDK_OFFSET(0x1DD405A0)
#define KJLMCEGOFBK_APEABFJOIMP_OFFSET UNITYSDK_OFFSET(0x1DD40600)
#define KJLMCEGOFBK_CKIHEBAFKFD_OFFSET UNITYSDK_OFFSET(0x1DD40480)
#define KJLMCEGOFBK_DKELBBAKDAO_OFFSET UNITYSDK_OFFSET(0x1DD40340)
#define KJLMCEGOFBK_EOEBEINMFCK_OFFSET UNITYSDK_OFFSET(0x1DD402A0)
#define KJLMCEGOFBK_HLFBFDCLKOF_OFFSET UNITYSDK_OFFSET(0x1DD40420)
#define KJLMCEGOFBK_JFHABNHENBG_OFFSET UNITYSDK_OFFSET(0x1DD40660)
#define KJLMCEGOFBK_JIBDPOHHKEO_OFFSET UNITYSDK_OFFSET(0x1DD40250)
#define KJLMCEGOFBK_JNGHIBJCFJL_OFFSET UNITYSDK_OFFSET(0x1DD403A0)
#define KJLMCEGOFBK_KBJBAOJJFJM_1_OFFSET UNITYSDK_OFFSET(0x1DD40530)
#define KJLMCEGOFBK_KBJBAOJJFJM_OFFSET UNITYSDK_OFFSET(0x1DD404D0)
#define KJLMCEGOFBK_PBLOJIFEKKG_OFFSET UNITYSDK_OFFSET(0x1DD402F0)

inline static constexpr unsigned int KJLMCEGOFBK_TypeDefinitionIndex = 6333;

	class KJLMCEGOFBK : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_OJJPNGCAMFG()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KJLMCEGOFBK")->GetStaticField(0x34850);
		}

		static ::System::Void JIBDPOHHKEO(::System::Object* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + KJLMCEGOFBK_JIBDPOHHKEO_OFFSET))(a1, a2);
		}

		static ::System::Void EOEBEINMFCK(::System::Object* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + KJLMCEGOFBK_EOEBEINMFCK_OFFSET))(a1, a2);
		}

		static ::System::Void PBLOJIFEKKG()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJLMCEGOFBK_PBLOJIFEKKG_OFFSET))();
		}

		static ::System::Void DKELBBAKDAO(::GameCore::Foundation::Collections::ExceptionResource a1)
		{
			return ((::System::Void(*)(::GameCore::Foundation::Collections::ExceptionResource))((::PBYTE)hIl2Cpp + KJLMCEGOFBK_DKELBBAKDAO_OFFSET))(a1);
		}

		static ::System::Void HLFBFDCLKOF(::GameCore::Foundation::Collections::ExceptionArgument a1)
		{
			return ((::System::Void(*)(::GameCore::Foundation::Collections::ExceptionArgument))((::PBYTE)hIl2Cpp + KJLMCEGOFBK_HLFBFDCLKOF_OFFSET))(a1);
		}

		static ::System::Void KBJBAOJJFJM(::GameCore::Foundation::Collections::ExceptionArgument a1)
		{
			return ((::System::Void(*)(::GameCore::Foundation::Collections::ExceptionArgument))((::PBYTE)hIl2Cpp + KJLMCEGOFBK_KBJBAOJJFJM_OFFSET))(a1);
		}

		static ::System::Void KBJBAOJJFJM_1(::GameCore::Foundation::Collections::ExceptionArgument a1, ::GameCore::Foundation::Collections::ExceptionResource a2)
		{
			return ((::System::Void(*)(::GameCore::Foundation::Collections::ExceptionArgument, ::GameCore::Foundation::Collections::ExceptionResource))((::PBYTE)hIl2Cpp + KJLMCEGOFBK_KBJBAOJJFJM_1_OFFSET))(a1, a2);
		}

		static ::System::Void AFCIMDKJPGK(::GameCore::Foundation::Collections::ExceptionResource a1)
		{
			return ((::System::Void(*)(::GameCore::Foundation::Collections::ExceptionResource))((::PBYTE)hIl2Cpp + KJLMCEGOFBK_AFCIMDKJPGK_OFFSET))(a1);
		}

		static ::System::Void APEABFJOIMP(::GameCore::Foundation::Collections::ExceptionResource a1)
		{
			return ((::System::Void(*)(::GameCore::Foundation::Collections::ExceptionResource))((::PBYTE)hIl2Cpp + KJLMCEGOFBK_APEABFJOIMP_OFFSET))(a1);
		}

		static ::System::Void JFHABNHENBG(::GameCore::Foundation::Collections::ExceptionResource a1)
		{
			return ((::System::Void(*)(::GameCore::Foundation::Collections::ExceptionResource))((::PBYTE)hIl2Cpp + KJLMCEGOFBK_JFHABNHENBG_OFFSET))(a1);
		}

		static ::System::String* CKIHEBAFKFD(::GameCore::Foundation::Collections::ExceptionArgument a1)
		{
			return ((::System::String*(*)(::GameCore::Foundation::Collections::ExceptionArgument))((::PBYTE)hIl2Cpp + KJLMCEGOFBK_CKIHEBAFKFD_OFFSET))(a1);
		}

		static ::System::String* JNGHIBJCFJL(::GameCore::Foundation::Collections::ExceptionResource a1)
		{
			return ((::System::String*(*)(::GameCore::Foundation::Collections::ExceptionResource))((::PBYTE)hIl2Cpp + KJLMCEGOFBK_JNGHIBJCFJL_OFFSET))(a1);
		}

	};
