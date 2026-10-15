#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BILEBDDBEOK;
class EDHPIGIAOLE;
namespace RPG::Client { class MonoEscalatorConfigure; }
namespace RPG::Client { class PropInstanceManageMonoPlugin; }
namespace System { class String; }

#define AHMEMALAOCA_AKOIHNHCOIA_OFFSET UNITYSDK_OFFSET(0xEB88140)
#define AHMEMALAOCA_BJGCKGPEFMN_OFFSET UNITYSDK_OFFSET(0xEB87E20)
#define AHMEMALAOCA_CFBAIGBNLFP_OFFSET UNITYSDK_OFFSET(0xEB87BD0)
#define AHMEMALAOCA_CTOR_OFFSET UNITYSDK_OFFSET(0xEB879C0)
#define AHMEMALAOCA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEB87AB0)
#define AHMEMALAOCA_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0xEB88110)
#define AHMEMALAOCA_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0xEB88100)
#define AHMEMALAOCA_IOIMEFFNGDH_OFFSET UNITYSDK_OFFSET(0xEB87B40)
#define AHMEMALAOCA_JBEAEAFCGKA_OFFSET UNITYSDK_OFFSET(0xEB88130)
#define AHMEMALAOCA_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xEB87F40)
#define AHMEMALAOCA_LBNBOHLLCHA_OFFSET UNITYSDK_OFFSET(0xEB88160)
#define AHMEMALAOCA_LGDKDHPDAEB_OFFSET UNITYSDK_OFFSET(0xEB87B90)
#define AHMEMALAOCA_MHHABONOGGA_OFFSET UNITYSDK_OFFSET(0xEB88150)

inline static constexpr unsigned int AHMEMALAOCA_TypeDefinitionIndex = 57400;

	class AHMEMALAOCA : public ::System::Object
	{
	public:
		::BILEBDDBEOK* NFALPNEJCGP; // 0x10
		::EDHPIGIAOLE* JHFKOHNKLMH; // 0x18
		::System::String* _UniqueName_k__BackingField; // 0x20
		::RPG::Client::PropInstanceManageMonoPlugin* DODAGCBJHIK; // 0x28
		::RPG::Client::MonoEscalatorConfigure* CEPGFGIOMDB; // 0x30
		::Il2CppArray<::UnityEngine::Vector3>* EJJJMLPECEJ; // 0x38
		::System::Single GHABAAOGBNO; // 0x40
		::System::Single HPCHCEFOKJB; // 0x44
		::UnityEngine::Vector3 _Forward_k__BackingField; // 0x48
		::System::Boolean HKOPHLNFBIO; // 0x54
		::System::Void _ctor(::System::String* a1, ::EDHPIGIAOLE* a2, ::Il2CppArray<::UnityEngine::Vector3>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::EDHPIGIAOLE*, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + AHMEMALAOCA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMEMALAOCA_DISPOSE_OFFSET))(this);
		}

		::System::Void IOIMEFFNGDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMEMALAOCA_IOIMEFFNGDH_OFFSET))(this);
		}

		::System::Void LGDKDHPDAEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMEMALAOCA_LGDKDHPDAEB_OFFSET))(this);
		}

		::System::Void CFBAIGBNLFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMEMALAOCA_CFBAIGBNLFP_OFFSET))(this);
		}

		::System::Void BJGCKGPEFMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMEMALAOCA_BJGCKGPEFMN_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AHMEMALAOCA_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::String* get_UniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMEMALAOCA_GET_UNIQUENAME_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Forward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMEMALAOCA_GET_FORWARD_OFFSET))(this);
		}

		::EDHPIGIAOLE* JBEAEAFCGKA()
		{
			return ((::EDHPIGIAOLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMEMALAOCA_JBEAEAFCGKA_OFFSET))(this);
		}

		::System::Boolean AKOIHNHCOIA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMEMALAOCA_AKOIHNHCOIA_OFFSET))(this);
		}

		::System::Single MHHABONOGGA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMEMALAOCA_MHHABONOGGA_OFFSET))(this);
		}

		::System::Void LBNBOHLLCHA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AHMEMALAOCA_LBNBOHLLCHA_OFFSET))(this, a1);
		}

	};
