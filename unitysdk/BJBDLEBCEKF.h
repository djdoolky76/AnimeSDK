#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFELGAIGHAP;
class PAADPKGPFMJ;
namespace RPG::GameCore { class FreeStyleAnimEventConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define BJBDLEBCEKF_CTOR_OFFSET UNITYSDK_OFFSET(0xBE59810)
#define BJBDLEBCEKF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE59A50)
#define BJBDLEBCEKF_GIGLFACAOBA_OFFSET UNITYSDK_OFFSET(0xBE597F0)
#define BJBDLEBCEKF_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xBE59990)
#define BJBDLEBCEKF_IBICJKHIEGN_OFFSET UNITYSDK_OFFSET(0xBE597D0)
#define BJBDLEBCEKF_KGNPIJGGMPO_OFFSET UNITYSDK_OFFSET(0xBE59770)
#define BJBDLEBCEKF_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0xBE59800)
#define BJBDLEBCEKF_LKHEJLJAHBI_OFFSET UNITYSDK_OFFSET(0xBE597B0)
#define BJBDLEBCEKF_PGIKCJLGLLO_OFFSET UNITYSDK_OFFSET(0xBE59790)

inline static constexpr unsigned int BJBDLEBCEKF_TypeDefinitionIndex = 58490;

	class BJBDLEBCEKF : public ::System::Object
	{
	public:
		::RPG::GameCore::FreeStyleAnimEventConfig* EJJEEJENLDA; // 0x10
		::PAADPKGPFMJ* MIPMCEJIAMC; // 0x18
		::KFELGAIGHAP* POPOCDALKPP; // 0x20
		::System::Int32 KJCMILHNJBN; // 0x28
		::System::Void _ctor(::PAADPKGPFMJ* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::FreeStyleAnimEventConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::PAADPKGPFMJ*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FreeStyleAnimEventConfig*))((::PBYTE)hIl2Cpp + BJBDLEBCEKF_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::String* KGNPIJGGMPO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBDLEBCEKF_KGNPIJGGMPO_OFFSET))(this);
		}

		::System::Boolean PGIKCJLGLLO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBDLEBCEKF_PGIKCJLGLLO_OFFSET))(this);
		}

		::System::Single LKHEJLJAHBI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBDLEBCEKF_LKHEJLJAHBI_OFFSET))(this);
		}

		::System::Boolean IBICJKHIEGN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBDLEBCEKF_IBICJKHIEGN_OFFSET))(this);
		}

		::System::Int32 GIGLFACAOBA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBDLEBCEKF_GIGLFACAOBA_OFFSET))(this);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBDLEBCEKF_LDAMHBBILAD_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBDLEBCEKF_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBDLEBCEKF_DISPOSE_OFFSET))(this);
		}

	};
