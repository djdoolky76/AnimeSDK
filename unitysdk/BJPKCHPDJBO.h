#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class PKIIEFHDOKD;
namespace RootMotion::IKJob { class IKThreadProxyContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityChan { class SpringCollider; }
namespace UnityChan { class SpringManager; }
namespace UnityEngine { class Transform; }

#define BJPKCHPDJBO_ABCKLFIBJIP_OFFSET UNITYSDK_OFFSET(0xB7AB8C0)
#define BJPKCHPDJBO_ANALOEDDDHD_OFFSET UNITYSDK_OFFSET(0xB7AABE0)
#define BJPKCHPDJBO_CIJDJDICMMM_OFFSET UNITYSDK_OFFSET(0xB7AB630)
#define BJPKCHPDJBO_CTOR_OFFSET UNITYSDK_OFFSET(0xB7AAD40)
#define BJPKCHPDJBO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7ABA20)
#define BJPKCHPDJBO_EHFLDBMLBPM_OFFSET UNITYSDK_OFFSET(0xB7AB150)
#define BJPKCHPDJBO_EODFFLJDPHC_OFFSET UNITYSDK_OFFSET(0xB7AAC30)
#define BJPKCHPDJBO_FJHFEDIAOGJ_OFFSET UNITYSDK_OFFSET(0xB7AAC50)
#define BJPKCHPDJBO_GHDIJCNKKOM_OFFSET UNITYSDK_OFFSET(0xB7AABF0)
#define BJPKCHPDJBO_GOLCPJMCALA_OFFSET UNITYSDK_OFFSET(0xB7AAC10)
#define BJPKCHPDJBO_HHHGNHNEHKN_OFFSET UNITYSDK_OFFSET(0xB7AAC20)
#define BJPKCHPDJBO_HPFBLBAFHBM_OFFSET UNITYSDK_OFFSET(0xB7AAE30)
#define BJPKCHPDJBO_JAHPOBFHFPE_OFFSET UNITYSDK_OFFSET(0xB7AB930)
#define BJPKCHPDJBO_JAIMPHDIBGN_OFFSET UNITYSDK_OFFSET(0xB7AB010)
#define BJPKCHPDJBO_KHNCMBEFIKI_OFFSET UNITYSDK_OFFSET(0xB7AB5D0)
#define BJPKCHPDJBO_KNMNMDJECGI_OFFSET UNITYSDK_OFFSET(0xB7AAC00)
#define BJPKCHPDJBO_KPLLMMKGKMO_OFFSET UNITYSDK_OFFSET(0xB7AB9A0)
#define BJPKCHPDJBO_LBFDJKBHBPG_OFFSET UNITYSDK_OFFSET(0xB7AAC40)
#define BJPKCHPDJBO_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xB7AB0F0)

inline static constexpr unsigned int BJPKCHPDJBO_TypeDefinitionIndex = 68464;

	class BJPKCHPDJBO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityChan::SpringCollider*>* LNKMBJLODPG; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* JLMMLHEOMJB; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* IFBNCKCIAAG; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* OKCAKGNICCG; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* CMLADIHAHAK; // 0x30
		::PKIIEFHDOKD* APPIHABBCGK; // 0x38
		::RootMotion::IKJob::IKThreadProxyContext* EEFMDEHLLFI; // 0x40
		::System::UInt32 PHFMCACHFIJ; // 0x48
		::System::Single MMNELBFMJOF; // 0x4C
		::System::Boolean FAJMPJCBHIO; // 0x50
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJPKCHPDJBO_CTOR_OFFSET))(this, a1);
		}

		::PKIIEFHDOKD* ANALOEDDDHD()
		{
			return ((::PKIIEFHDOKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJPKCHPDJBO_ANALOEDDDHD_OFFSET))(this);
		}

		::RootMotion::IKJob::IKThreadProxyContext* GHDIJCNKKOM()
		{
			return ((::RootMotion::IKJob::IKThreadProxyContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJPKCHPDJBO_GHDIJCNKKOM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* KNMNMDJECGI()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJPKCHPDJBO_KNMNMDJECGI_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* GOLCPJMCALA()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJPKCHPDJBO_GOLCPJMCALA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityChan::SpringCollider*>* HHHGNHNEHKN()
		{
			return ((::System::Collections::Generic::List_1<::UnityChan::SpringCollider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJPKCHPDJBO_HHHGNHNEHKN_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* EODFFLJDPHC()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJPKCHPDJBO_EODFFLJDPHC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* LBFDJKBHBPG()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJPKCHPDJBO_LBFDJKBHBPG_OFFSET))(this);
		}

		::RootMotion::IKJob::IKTransformRef FJHFEDIAOGJ(::UnityEngine::Transform* a1)
		{
			return ((::RootMotion::IKJob::IKTransformRef(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + BJPKCHPDJBO_FJHFEDIAOGJ_OFFSET))(this, a1);
		}

		::System::Void HPFBLBAFHBM(::UnityChan::SpringManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityChan::SpringManager*))((::PBYTE)hIl2Cpp + BJPKCHPDJBO_HPFBLBAFHBM_OFFSET))(this, a1);
		}

		::System::Void JAIMPHDIBGN(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + BJPKCHPDJBO_JAIMPHDIBGN_OFFSET))(this, a1, a2);
		}

		::System::Void LJBCDJNNBJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJPKCHPDJBO_LJBCDJNNBJH_OFFSET))(this);
		}

		::System::Void EHFLDBMLBPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJPKCHPDJBO_EHFLDBMLBPM_OFFSET))(this);
		}

		::System::Void KHNCMBEFIKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJPKCHPDJBO_KHNCMBEFIKI_OFFSET))(this);
		}

		::System::Void CIJDJDICMMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJPKCHPDJBO_CIJDJDICMMM_OFFSET))(this);
		}

		::System::Void JAHPOBFHFPE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BJPKCHPDJBO_JAHPOBFHFPE_OFFSET))(this, a1);
		}

		::System::Void ABCKLFIBJIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJPKCHPDJBO_ABCKLFIBJIP_OFFSET))(this);
		}

		::System::Void KPLLMMKGKMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJPKCHPDJBO_KPLLMMKGKMO_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJPKCHPDJBO_DISPOSE_OFFSET))(this);
		}

	};
