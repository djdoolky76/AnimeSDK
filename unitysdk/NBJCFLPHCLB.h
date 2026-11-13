#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameSandboxCompletionResult.h"
#include "unitysdk/RPG/GameCore/LittleGameSandboxScope.h"
#include "unitysdk/System/Object.h"
class EAIGLLEMOII;
class FKOBFKHJFLH;
class JPFJJLEPGBC;
class MCFDMCPGEBD;
namespace System { class IDisposable; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define NBJCFLPHCLB_AILEEAPENIA_OFFSET UNITYSDK_OFFSET(0x150B3D50)
#define NBJCFLPHCLB_BDLDEGOJAGD_1_OFFSET UNITYSDK_OFFSET(0x150B40C0)
#define NBJCFLPHCLB_BDLDEGOJAGD_OFFSET UNITYSDK_OFFSET(0x150B4060)
#define NBJCFLPHCLB_CTOR_OFFSET UNITYSDK_OFFSET(0x150B3A70)
#define NBJCFLPHCLB_DIPFOIAKDDM_OFFSET UNITYSDK_OFFSET(0x150B3BA0)
#define NBJCFLPHCLB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x150B4710)
#define NBJCFLPHCLB_EAHILENOAAI_OFFSET UNITYSDK_OFFSET(0x150B3F00)
#define NBJCFLPHCLB_EAKLAKAHMAA_OFFSET UNITYSDK_OFFSET(0x150B4510)
#define NBJCFLPHCLB_EHEIFEBEGOD_1_OFFSET UNITYSDK_OFFSET(0x150B3E40)
#define NBJCFLPHCLB_EHEIFEBEGOD_OFFSET UNITYSDK_OFFSET(0x150B3DE0)
#define NBJCFLPHCLB_FGBMAEHPNFD_OFFSET UNITYSDK_OFFSET(0x150B3FB0)
#define NBJCFLPHCLB_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x150B3B60)
#define NBJCFLPHCLB_GET_RESOLVEDPROFILE_OFFSET UNITYSDK_OFFSET(0x150B3B80)
#define NBJCFLPHCLB_GPLLONMEDAC_OFFSET UNITYSDK_OFFSET(0x150B4340)
#define NBJCFLPHCLB_JENKPDAHOKI_OFFSET UNITYSDK_OFFSET(0x150B4610)
#define NBJCFLPHCLB_JMIBHMICFOG_OFFSET UNITYSDK_OFFSET(0x150B4410)
#define NBJCFLPHCLB_KHGDNCABGEN_OFFSET UNITYSDK_OFFSET(0x150B4240)
#define NBJCFLPHCLB_KJMGHEPEODB_OFFSET UNITYSDK_OFFSET(0x150B4180)
#define NBJCFLPHCLB_OOABJIIMLAB_1_OFFSET UNITYSDK_OFFSET(0x150B3C90)
#define NBJCFLPHCLB_OOABJIIMLAB_OFFSET UNITYSDK_OFFSET(0x150B3C30)
#define NBJCFLPHCLB_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x150B3B70)
#define NBJCFLPHCLB_SET_RESOLVEDPROFILE_OFFSET UNITYSDK_OFFSET(0x150B3B90)

inline static constexpr unsigned int NBJCFLPHCLB_TypeDefinitionIndex = 61913;

	class NBJCFLPHCLB : public ::System::Object
	{
	public:
		::EAIGLLEMOII* AEMNNNJHHCB; // 0x10
		::EAIGLLEMOII* ADONIGCOAKF; // 0x18
		::EAIGLLEMOII* MBGIDDPIFNF; // 0x20
		::JPFJJLEPGBC* _Context_k__BackingField; // 0x28
		::FKOBFKHJFLH* KGCNPIEDOCA; // 0x30
		::EAIGLLEMOII* IKKNGPJFGJH; // 0x38
		::MCFDMCPGEBD* _ResolvedProfile_k__BackingField; // 0x40
		::System::Void _ctor(::FKOBFKHJFLH* a1, ::JPFJJLEPGBC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FKOBFKHJFLH*, ::JPFJJLEPGBC*))((::PBYTE)hIl2Cpp + NBJCFLPHCLB_CTOR_OFFSET))(this, a1, a2);
		}

		::JPFJJLEPGBC* get_Context()
		{
			return ((::JPFJJLEPGBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJCFLPHCLB_GET_CONTEXT_OFFSET))(this);
		}

		::System::Void set_Context(::JPFJJLEPGBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPFJJLEPGBC*))((::PBYTE)hIl2Cpp + NBJCFLPHCLB_SET_CONTEXT_OFFSET))(this, a1);
		}

		::MCFDMCPGEBD* get_ResolvedProfile()
		{
			return ((::MCFDMCPGEBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJCFLPHCLB_GET_RESOLVEDPROFILE_OFFSET))(this);
		}

		::System::Void set_ResolvedProfile(::MCFDMCPGEBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCFDMCPGEBD*))((::PBYTE)hIl2Cpp + NBJCFLPHCLB_SET_RESOLVEDPROFILE_OFFSET))(this, a1);
		}

		::System::Boolean DIPFOIAKDDM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJCFLPHCLB_DIPFOIAKDDM_OFFSET))(this);
		}

		::System::Boolean OOABJIIMLAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJCFLPHCLB_OOABJIIMLAB_OFFSET))(this);
		}

		::System::Boolean OOABJIIMLAB_1(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NBJCFLPHCLB_OOABJIIMLAB_1_OFFSET))(this, a1);
		}

		::System::Boolean EHEIFEBEGOD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJCFLPHCLB_EHEIFEBEGOD_OFFSET))(this);
		}

		::System::Boolean EHEIFEBEGOD_1(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NBJCFLPHCLB_EHEIFEBEGOD_1_OFFSET))(this, a1);
		}

		::System::IDisposable* EAHILENOAAI(::System::Action_1<::RPG::Client::LittleGameSandboxCompletionResult>* a1)
		{
			return ((::System::IDisposable*(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGameSandboxCompletionResult>*))((::PBYTE)hIl2Cpp + NBJCFLPHCLB_EAHILENOAAI_OFFSET))(this, a1);
		}

		::System::IDisposable* FGBMAEHPNFD(::System::Action_1<::RPG::Client::LittleGameSandboxCompletionResult>* a1)
		{
			return ((::System::IDisposable*(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGameSandboxCompletionResult>*))((::PBYTE)hIl2Cpp + NBJCFLPHCLB_FGBMAEHPNFD_OFFSET))(this, a1);
		}

		::System::Boolean BDLDEGOJAGD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJCFLPHCLB_BDLDEGOJAGD_OFFSET))(this);
		}

		::System::Boolean BDLDEGOJAGD_1(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NBJCFLPHCLB_BDLDEGOJAGD_1_OFFSET))(this, a1);
		}

		::System::Boolean KJMGHEPEODB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJCFLPHCLB_KJMGHEPEODB_OFFSET))(this);
		}

		::System::Void KHGDNCABGEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJCFLPHCLB_KHGDNCABGEN_OFFSET))(this);
		}

		::System::Void JMIBHMICFOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJCFLPHCLB_JMIBHMICFOG_OFFSET))(this);
		}

		::System::Void EAKLAKAHMAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJCFLPHCLB_EAKLAKAHMAA_OFFSET))(this);
		}

		::System::Void JENKPDAHOKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJCFLPHCLB_JENKPDAHOKI_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJCFLPHCLB_DISPOSE_OFFSET))(this);
		}

		::System::Boolean AILEEAPENIA(::RPG::GameCore::LittleGameSandboxScope a1, ::EAIGLLEMOII* a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LittleGameSandboxScope, ::EAIGLLEMOII*, ::System::String*))((::PBYTE)hIl2Cpp + NBJCFLPHCLB_AILEEAPENIA_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void GPLLONMEDAC(::EAIGLLEMOII* a1)
		{
			return ((::System::Void(*)(::EAIGLLEMOII*))((::PBYTE)hIl2Cpp + NBJCFLPHCLB_GPLLONMEDAC_OFFSET))(a1);
		}

	};
