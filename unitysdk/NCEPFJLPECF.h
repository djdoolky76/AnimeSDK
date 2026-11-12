#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIStateCtrl; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define NCEPFJLPECF_CTOR_OFFSET UNITYSDK_OFFSET(0xC391E70)
#define NCEPFJLPECF_GOCEFNJACCM_OFFSET UNITYSDK_OFFSET(0xC391A20)
#define NCEPFJLPECF_HPNKDJDJMLN_OFFSET UNITYSDK_OFFSET(0xC391960)
#define NCEPFJLPECF_KHIJELCAOIO_OFFSET UNITYSDK_OFFSET(0xC391DB0)
#define NCEPFJLPECF_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0xC391D50)
#define NCEPFJLPECF_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xC391870)
#define NCEPFJLPECF__ONBIND_OFFSET UNITYSDK_OFFSET(0xC391430)

inline static constexpr unsigned int NCEPFJLPECF_TypeDefinitionIndex = 74348;

	class NCEPFJLPECF : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::LocalizedText* OLMGOILGCKN; // 0x60
		::UnityEngine::Transform* MGKMPLIICNA; // 0x68
		::UnityEngine::Transform* EHHMNHMEFEB; // 0x70
		::UnityEngine::Transform* IILLJBCGOOJ; // 0x78
		::UnityEngine::Transform* PBAMNMKPJIN; // 0x80
		::RPG::Client::UIStateCtrl* GIMAEGBDOBL; // 0x88
		::UnityEngine::Transform* KICDAHDCBJI; // 0x90
		::System::Boolean CNFNMLCNCCL; // 0x98
		// static const ::System::String* JFCMCPFPDFP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEPFJLPECF_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEPFJLPECF__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + NCEPFJLPECF_NKPPGDENJAE_OFFSET))(this, a1, a2);
		}

		::System::Void GOCEFNJACCM(::RPG::Client::GridFightRole* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*, ::System::Boolean))((::PBYTE)hIl2Cpp + NCEPFJLPECF_GOCEFNJACCM_OFFSET))(this, a1, a2);
		}

		::System::Void NHPDCPKMNAM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NCEPFJLPECF_NHPDCPKMNAM_OFFSET))(this, a1);
		}

		::System::Void KHIJELCAOIO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NCEPFJLPECF_KHIJELCAOIO_OFFSET))(this, a1);
		}

		static ::System::String* HPNKDJDJMLN(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NCEPFJLPECF_HPNKDJDJMLN_OFFSET))(a1, a2);
		}

	};
