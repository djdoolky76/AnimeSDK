#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NLCFCMDGOFF.h"
namespace RPG::Client { template <typename T> class StringMemoryDictionary_1; }
namespace RPG::GameCore { class TriggerEffect; }
namespace System { class String; }

#define NBJKPANCCHD_CCTOR_OFFSET UNITYSDK_OFFSET(0xC350590)
#define NBJKPANCCHD_CTOR_OFFSET UNITYSDK_OFFSET(0xC350580)
#define NBJKPANCCHD_FPMOCFJJCBA_OFFSET UNITYSDK_OFFSET(0xC34FF10)
#define NBJKPANCCHD_HNNPNJJKJIP_OFFSET UNITYSDK_OFFSET(0xC3500C0)
#define NBJKPANCCHD_LGGBOLEEOLD_OFFSET UNITYSDK_OFFSET(0xC34FCB0)
#define NBJKPANCCHD_ODPAPLIIDDD_OFFSET UNITYSDK_OFFSET(0xC34F810)

inline static constexpr unsigned int NBJKPANCCHD_TypeDefinitionIndex = 72113;

	class NBJKPANCCHD : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_KLFMBIKGOHO()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NBJKPANCCHD")->GetStaticField(0x19A00);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_PFCDNDJGGMB()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NBJKPANCCHD")->GetStaticField(0x19A08);
		}

		static ::System::String** StaticGet_PNAACJGPAFD()
		{
			return (::System::String**)UnitySDK::FromName("", "NBJKPANCCHD")->GetStaticField(0x19A10);
		}

		static ::RPG::Client::StringMemoryDictionary_1<::Il2CppArray<::RPG::GameCore::TriggerEffect*>*>** StaticGet_HMGFBENLJGM()
		{
			return (::RPG::Client::StringMemoryDictionary_1<::Il2CppArray<::RPG::GameCore::TriggerEffect*>*>**)UnitySDK::FromName("", "NBJKPANCCHD")->GetStaticField(0x19A18);
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
