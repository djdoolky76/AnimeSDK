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

#define NBJCFLPHCLB_AILEEAPENIA_OFFSET UNITYSDK_OFFSET(0xC34EDE0)
#define NBJCFLPHCLB_BDLDEGOJAGD_1_OFFSET UNITYSDK_OFFSET(0xC34F150)
#define NBJCFLPHCLB_BDLDEGOJAGD_OFFSET UNITYSDK_OFFSET(0xC34F0F0)
#define NBJCFLPHCLB_CTOR_OFFSET UNITYSDK_OFFSET(0xC34EB00)
#define NBJCFLPHCLB_DIPFOIAKDDM_OFFSET UNITYSDK_OFFSET(0xC34EC30)
#define NBJCFLPHCLB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC34F7A0)
#define NBJCFLPHCLB_EAHILENOAAI_OFFSET UNITYSDK_OFFSET(0xC34EF90)
#define NBJCFLPHCLB_EAKLAKAHMAA_OFFSET UNITYSDK_OFFSET(0xC34F5A0)
#define NBJCFLPHCLB_EHEIFEBEGOD_1_OFFSET UNITYSDK_OFFSET(0xC34EED0)
#define NBJCFLPHCLB_EHEIFEBEGOD_OFFSET UNITYSDK_OFFSET(0xC34EE70)
#define NBJCFLPHCLB_FGBMAEHPNFD_OFFSET UNITYSDK_OFFSET(0xC34F040)
#define NBJCFLPHCLB_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0xC34EBF0)
#define NBJCFLPHCLB_GET_RESOLVEDPROFILE_OFFSET UNITYSDK_OFFSET(0xC34EC10)
#define NBJCFLPHCLB_GPLLONMEDAC_OFFSET UNITYSDK_OFFSET(0xC34F3D0)
#define NBJCFLPHCLB_JENKPDAHOKI_OFFSET UNITYSDK_OFFSET(0xC34F6A0)
#define NBJCFLPHCLB_JMIBHMICFOG_OFFSET UNITYSDK_OFFSET(0xC34F4A0)
#define NBJCFLPHCLB_KHGDNCABGEN_OFFSET UNITYSDK_OFFSET(0xC34F2D0)
#define NBJCFLPHCLB_KJMGHEPEODB_OFFSET UNITYSDK_OFFSET(0xC34F210)
#define NBJCFLPHCLB_OOABJIIMLAB_1_OFFSET UNITYSDK_OFFSET(0xC34ED20)
#define NBJCFLPHCLB_OOABJIIMLAB_OFFSET UNITYSDK_OFFSET(0xC34ECC0)
#define NBJCFLPHCLB_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0xC34EC00)
#define NBJCFLPHCLB_SET_RESOLVEDPROFILE_OFFSET UNITYSDK_OFFSET(0xC34EC20)

inline static constexpr unsigned int NBJCFLPHCLB_TypeDefinitionIndex = 61913;

	class NBJCFLPHCLB : public ::System::Object
	{
	public:
		::EAIGLLEMOII* ADONIGCOAKF; // 0x10
		::EAIGLLEMOII* MBGIDDPIFNF; // 0x18
		::JPFJJLEPGBC* _Context_k__BackingField; // 0x20
		::EAIGLLEMOII* IKKNGPJFGJH; // 0x28
		::MCFDMCPGEBD* _ResolvedProfile_k__BackingField; // 0x30
		::FKOBFKHJFLH* KGCNPIEDOCA; // 0x38
		::EAIGLLEMOII* AEMNNNJHHCB; // 0x40
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
