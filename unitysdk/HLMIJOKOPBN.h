#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCAFLGBOMFN;
class HLMIJOKOPBN;
class ODPGEKCDNCJ;
namespace RPG::Client { class BattleShowUIPageParam; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Coroutine; }

#define HLMIJOKOPBN_BDJAMKKKPPA_OFFSET UNITYSDK_OFFSET(0x15D65B90)
#define HLMIJOKOPBN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15D65790)
#define HLMIJOKOPBN_CTOR_OFFSET UNITYSDK_OFFSET(0x15D65860)
#define HLMIJOKOPBN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D65870)
#define HLMIJOKOPBN_GET_PARAM_OFFSET UNITYSDK_OFFSET(0x15D65BF0)
#define HLMIJOKOPBN_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x15D65C10)
#define HLMIJOKOPBN_JGEDDJPLILF_OFFSET UNITYSDK_OFFSET(0x15D65940)
#define HLMIJOKOPBN_LDGNLJGOMBL_OFFSET UNITYSDK_OFFSET(0x15D65A60)
#define HLMIJOKOPBN_OCCIFHOEJMI_OFFSET UNITYSDK_OFFSET(0x15D659A0)
#define HLMIJOKOPBN_ONJICMEONGF_OFFSET UNITYSDK_OFFSET(0x15D65A00)
#define HLMIJOKOPBN_SET_PARAM_OFFSET UNITYSDK_OFFSET(0x15D65C00)
#define HLMIJOKOPBN_SET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x15D65C20)

	class HLMIJOKOPBN : public ::System::Object
	{
	public:
		::System::Action* JLBLEBFNIIM; // 0x10
		::UnityEngine::Coroutine* CGAEACAKGMP; // 0x18
		::System::String* _UniqueName_k__BackingField; // 0x20
		::RPG::Client::BattleShowUIPageParam* _Param_k__BackingField; // 0x28
		::System::Action* OPHEBAAKIHB; // 0x30
		::System::Action* JFKMKCIPIGI; // 0x38
		::System::Single HIMIAAEICFA; // 0x40
		// static const ::System::Object FOPMNAAAIDC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMIJOKOPBN_CTOR_OFFSET))(this);
		}

		static ::HLMIJOKOPBN* BPLPBPMEODA(::ODPGEKCDNCJ* a1, ::System::Action* a2, ::System::Action* a3, ::System::Action* a4)
		{
			return ((::HLMIJOKOPBN*(*)(::ODPGEKCDNCJ*, ::System::Action*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + HLMIJOKOPBN_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMIJOKOPBN_DISPOSE_OFFSET))(this);
		}

		::System::Void ONJICMEONGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMIJOKOPBN_ONJICMEONGF_OFFSET))(this);
		}

		::System::Void LDGNLJGOMBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMIJOKOPBN_LDGNLJGOMBL_OFFSET))(this);
		}

		::System::Void JGEDDJPLILF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMIJOKOPBN_JGEDDJPLILF_OFFSET))(this);
		}

		::System::Void BDJAMKKKPPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMIJOKOPBN_BDJAMKKKPPA_OFFSET))(this);
		}

		::System::Void OCCIFHOEJMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMIJOKOPBN_OCCIFHOEJMI_OFFSET))(this);
		}

		::RPG::Client::BattleShowUIPageParam* get_Param()
		{
			return ((::RPG::Client::BattleShowUIPageParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMIJOKOPBN_GET_PARAM_OFFSET))(this);
		}

		::System::Void set_Param(::RPG::Client::BattleShowUIPageParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleShowUIPageParam*))((::PBYTE)hIl2Cpp + HLMIJOKOPBN_SET_PARAM_OFFSET))(this, a1);
		}

		::System::String* get_UniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMIJOKOPBN_GET_UNIQUENAME_OFFSET))(this);
		}

		::System::Void set_UniqueName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HLMIJOKOPBN_SET_UNIQUENAME_OFFSET))(this, a1);
		}

	};
