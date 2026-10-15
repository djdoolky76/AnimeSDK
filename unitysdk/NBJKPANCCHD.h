#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NLCFCMDGOFF.h"
namespace RPG::Client { template <typename T> class StringMemoryDictionary_1; }
namespace RPG::GameCore { class TriggerEffect; }
namespace System { class String; }

#define NBJKPANCCHD_CCTOR_OFFSET UNITYSDK_OFFSET(0xBAC9F80)
#define NBJKPANCCHD_CTOR_OFFSET UNITYSDK_OFFSET(0xBAC9F70)
#define NBJKPANCCHD_FPMOCFJJCBA_OFFSET UNITYSDK_OFFSET(0xBAC9900)
#define NBJKPANCCHD_HNNPNJJKJIP_OFFSET UNITYSDK_OFFSET(0xBAC9AB0)
#define NBJKPANCCHD_LGGBOLEEOLD_OFFSET UNITYSDK_OFFSET(0xBAC96A0)
#define NBJKPANCCHD_ODPAPLIIDDD_OFFSET UNITYSDK_OFFSET(0xBAC9200)

inline static constexpr unsigned int NBJKPANCCHD_TypeDefinitionIndex = 70147;

	class NBJKPANCCHD : public ::System::Object
	{
	public:
		static ::RPG::Client::StringMemoryDictionary_1<::Il2CppArray<::RPG::GameCore::TriggerEffect*>*>** StaticGet_HMGFBENLJGM()
		{
			return (::RPG::Client::StringMemoryDictionary_1<::Il2CppArray<::RPG::GameCore::TriggerEffect*>*>**)UnitySDK::FromName("", "NBJKPANCCHD")->GetStaticField(0x1E350);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_KLFMBIKGOHO()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NBJKPANCCHD")->GetStaticField(0x1E358);
		}

		static ::System::String** StaticGet_PNAACJGPAFD()
		{
			return (::System::String**)UnitySDK::FromName("", "NBJKPANCCHD")->GetStaticField(0x1E360);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_PFCDNDJGGMB()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NBJKPANCCHD")->GetStaticField(0x1E368);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJKPANCCHD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBJKPANCCHD_CCTOR_OFFSET))();
		}

		static ::System::Void ODPAPLIIDDD()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBJKPANCCHD_ODPAPLIIDDD_OFFSET))();
		}

		static ::Il2CppArray<::RPG::GameCore::TriggerEffect*>* LGGBOLEEOLD(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::Il2CppArray<::RPG::GameCore::TriggerEffect*>*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NBJKPANCCHD_LGGBOLEEOLD_OFFSET))(a1, a2, a3);
		}

		static ::NLCFCMDGOFF HNNPNJJKJIP(::System::String* a1)
		{
			return ((::NLCFCMDGOFF(*)(::System::String*))((::PBYTE)hIl2Cpp + NBJKPANCCHD_HNNPNJJKJIP_OFFSET))(a1);
		}

		static ::Il2CppArray<::RPG::GameCore::TriggerEffect*>* FPMOCFJJCBA(::NLCFCMDGOFF a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::TriggerEffect*>*(*)(::NLCFCMDGOFF))((::PBYTE)hIl2Cpp + NBJKPANCCHD_FPMOCFJJCBA_OFFSET))(a1);
		}

	};
