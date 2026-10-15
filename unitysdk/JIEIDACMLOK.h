#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCEBGLLMGPE;
namespace RPG::GameCore { class AIVariable; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JIEIDACMLOK_AKJFMKKPPKI_OFFSET UNITYSDK_OFFSET(0x1C6C7D00)
#define JIEIDACMLOK_BLNCFDKFHCO_OFFSET UNITYSDK_OFFSET(0x1C6C8430)
#define JIEIDACMLOK_BPDIGKDIJKN_OFFSET UNITYSDK_OFFSET(0x1C6C89A0)
#define JIEIDACMLOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6C7790)
#define JIEIDACMLOK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C6C7C70)
#define JIEIDACMLOK_IGMAKAKOGPL_OFFSET UNITYSDK_OFFSET(0x1C6C7990)
#define JIEIDACMLOK_LIFJGBBEJEJ_OFFSET UNITYSDK_OFFSET(0x1C6C7B00)
#define JIEIDACMLOK_LNDJJFIKDKH_OFFSET UNITYSDK_OFFSET(0x1C6C8260)
#define JIEIDACMLOK_LNKFDPNJMBC_OFFSET UNITYSDK_OFFSET(0x1C6C8380)
#define JIEIDACMLOK_NKFLAEMPKGC_OFFSET UNITYSDK_OFFSET(0x1C6C7D90)
#define JIEIDACMLOK_ONIPLEMHAME_OFFSET UNITYSDK_OFFSET(0x1C6C8150)

inline static constexpr unsigned int JIEIDACMLOK_TypeDefinitionIndex = 36977;

	class JIEIDACMLOK : public ::System::Object
	{
	public:
		::GCEBGLLMGPE* HDMEPPFFIDK; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AIVariable*>* FEONBGCCLBB; // 0x18
		::System::Void _ctor(::GCEBGLLMGPE* a1, ::Il2CppArray<::RPG::GameCore::AIVariable*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GCEBGLLMGPE*, ::Il2CppArray<::RPG::GameCore::AIVariable*>*))((::PBYTE)hIl2Cpp + JIEIDACMLOK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void LIFJGBBEJEJ(::Il2CppArray<::RPG::GameCore::AIVariable*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AIVariable*>*))((::PBYTE)hIl2Cpp + JIEIDACMLOK_LIFJGBBEJEJ_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIEIDACMLOK_DISPOSE_OFFSET))(this);
		}

		::System::Boolean AKJFMKKPPKI(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JIEIDACMLOK_AKJFMKKPPKI_OFFSET))(this, a1);
		}

		::System::Boolean NKFLAEMPKGC(::RPG::GameCore::AIVariable* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AIVariable*, ::System::Boolean))((::PBYTE)hIl2Cpp + JIEIDACMLOK_NKFLAEMPKGC_OFFSET))(this, a1, a2);
		}

		::System::Boolean ONIPLEMHAME(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + JIEIDACMLOK_ONIPLEMHAME_OFFSET))(this, a1, a2);
		}

		::System::Boolean LNDJJFIKDKH(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + JIEIDACMLOK_LNDJJFIKDKH_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::AIVariable* LNKFDPNJMBC(::System::String* a1)
		{
			return ((::RPG::GameCore::AIVariable*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JIEIDACMLOK_LNKFDPNJMBC_OFFSET))(this, a1);
		}

		::System::String* BLNCFDKFHCO(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + JIEIDACMLOK_BLNCFDKFHCO_OFFSET))(this, a1, a2);
		}

		::System::Boolean BPDIGKDIJKN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIEIDACMLOK_BPDIGKDIJKN_OFFSET))(this);
		}

		::RPG::GameCore::AIVariable* IGMAKAKOGPL(::RPG::GameCore::AIVariable* a1)
		{
			return ((::RPG::GameCore::AIVariable*(*)(::PVOID, ::RPG::GameCore::AIVariable*))((::PBYTE)hIl2Cpp + JIEIDACMLOK_IGMAKAKOGPL_OFFSET))(this, a1);
		}

	};
