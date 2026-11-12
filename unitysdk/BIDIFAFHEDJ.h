#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBOFEHOPCEC;
namespace RPG::GameCore { class AIVariable; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BIDIFAFHEDJ_AKJFMKKPPKI_OFFSET UNITYSDK_OFFSET(0xBE35CC0)
#define BIDIFAFHEDJ_BLNCFDKFHCO_OFFSET UNITYSDK_OFFSET(0xBE36470)
#define BIDIFAFHEDJ_BPDIGKDIJKN_OFFSET UNITYSDK_OFFSET(0xBE36A80)
#define BIDIFAFHEDJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBE357A0)
#define BIDIFAFHEDJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE35C30)
#define BIDIFAFHEDJ_IGMAKAKOGPL_OFFSET UNITYSDK_OFFSET(0xBE35A90)
#define BIDIFAFHEDJ_LIFJGBBEJEJ_OFFSET UNITYSDK_OFFSET(0xBE35830)
#define BIDIFAFHEDJ_LNDJJFIKDKH_OFFSET UNITYSDK_OFFSET(0xBE362A0)
#define BIDIFAFHEDJ_LNKFDPNJMBC_OFFSET UNITYSDK_OFFSET(0xBE363C0)
#define BIDIFAFHEDJ_NKFLAEMPKGC_OFFSET UNITYSDK_OFFSET(0xBE35D50)
#define BIDIFAFHEDJ_ONIPLEMHAME_OFFSET UNITYSDK_OFFSET(0xBE36190)

inline static constexpr unsigned int BIDIFAFHEDJ_TypeDefinitionIndex = 54806;

	class BIDIFAFHEDJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AIVariable*>* FEONBGCCLBB; // 0x10
		::BBOFEHOPCEC* HDMEPPFFIDK; // 0x18
		::System::Void _ctor(::BBOFEHOPCEC* a1, ::Il2CppArray<::RPG::GameCore::AIVariable*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BBOFEHOPCEC*, ::Il2CppArray<::RPG::GameCore::AIVariable*>*))((::PBYTE)hIl2Cpp + BIDIFAFHEDJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void LIFJGBBEJEJ(::Il2CppArray<::RPG::GameCore::AIVariable*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AIVariable*>*))((::PBYTE)hIl2Cpp + BIDIFAFHEDJ_LIFJGBBEJEJ_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDIFAFHEDJ_DISPOSE_OFFSET))(this);
		}

		::System::Boolean AKJFMKKPPKI(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BIDIFAFHEDJ_AKJFMKKPPKI_OFFSET))(this, a1);
		}

		::System::Boolean NKFLAEMPKGC(::RPG::GameCore::AIVariable* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AIVariable*, ::System::Boolean))((::PBYTE)hIl2Cpp + BIDIFAFHEDJ_NKFLAEMPKGC_OFFSET))(this, a1, a2);
		}

		::System::Boolean ONIPLEMHAME(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + BIDIFAFHEDJ_ONIPLEMHAME_OFFSET))(this, a1, a2);
		}

		::System::Boolean LNDJJFIKDKH(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + BIDIFAFHEDJ_LNDJJFIKDKH_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::AIVariable* LNKFDPNJMBC(::System::String* a1)
		{
			return ((::RPG::GameCore::AIVariable*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BIDIFAFHEDJ_LNKFDPNJMBC_OFFSET))(this, a1);
		}

		::System::String* BLNCFDKFHCO(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + BIDIFAFHEDJ_BLNCFDKFHCO_OFFSET))(this, a1, a2);
		}

		::System::Boolean BPDIGKDIJKN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDIFAFHEDJ_BPDIGKDIJKN_OFFSET))(this);
		}

		::RPG::GameCore::AIVariable* IGMAKAKOGPL(::RPG::GameCore::AIVariable* a1)
		{
			return ((::RPG::GameCore::AIVariable*(*)(::PVOID, ::RPG::GameCore::AIVariable*))((::PBYTE)hIl2Cpp + BIDIFAFHEDJ_IGMAKAKOGPL_OFFSET))(this, a1);
		}

	};
