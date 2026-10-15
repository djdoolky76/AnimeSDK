#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBMKENJFELG;
namespace RPG::Client { class AudioManager; }
namespace System { class String; }

#define PBMKENJFELG_AHGICMPOLIO_OFFSET UNITYSDK_OFFSET(0xBFED910)
#define PBMKENJFELG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBFED6C0)
#define PBMKENJFELG_COBDNLCNDED_OFFSET UNITYSDK_OFFSET(0xBFEDC90)
#define PBMKENJFELG_CTOR_OFFSET UNITYSDK_OFFSET(0xBFED730)
#define PBMKENJFELG_FPAJNFKMLOD_OFFSET UNITYSDK_OFFSET(0xBFED790)
#define PBMKENJFELG_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBFEDA90)
#define PBMKENJFELG_JGCKKODKCGO_OFFSET UNITYSDK_OFFSET(0xBFEDA10)
#define PBMKENJFELG_JJJOBHLJPAK_OFFSET UNITYSDK_OFFSET(0xBFEDD90)
#define PBMKENJFELG_JJMEJDCBCFO_OFFSET UNITYSDK_OFFSET(0xBFEDB40)
#define PBMKENJFELG_LOGDICCEOHH_OFFSET UNITYSDK_OFFSET(0xBFEDD20)
#define PBMKENJFELG_NFKAFBFOAGP_OFFSET UNITYSDK_OFFSET(0xBFED740)
#define PBMKENJFELG_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xBFED860)

inline static constexpr unsigned int PBMKENJFELG_TypeDefinitionIndex = 76426;

	class PBMKENJFELG : public ::System::Object
	{
	public:
		// static const ::System::String* HIENAPPOAII; // 0x0
		// static const ::System::String* PJGFAFPJAOI; // 0x0
		// static const ::System::String* BEPKIOKPIIF; // 0x0
		// static const ::System::String* HAAGEIHEABN; // 0x0
		// static const ::System::String* ADFIPJPEHPO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMKENJFELG_CTOR_OFFSET))(this);
		}

		static ::PBMKENJFELG* BPLPBPMEODA()
		{
			return ((::PBMKENJFELG*(*)())((::PBYTE)hIl2Cpp + PBMKENJFELG_BPLPBPMEODA_OFFSET))();
		}

		::System::Void NFKAFBFOAGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMKENJFELG_NFKAFBFOAGP_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMKENJFELG_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMKENJFELG_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void COBDNLCNDED(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PBMKENJFELG_COBDNLCNDED_OFFSET))(this, a1);
		}

		::System::Void AHGICMPOLIO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PBMKENJFELG_AHGICMPOLIO_OFFSET))(this, a1);
		}

		::System::Void JGCKKODKCGO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PBMKENJFELG_JGCKKODKCGO_OFFSET))(this, a1);
		}

		::System::Void FPAJNFKMLOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMKENJFELG_FPAJNFKMLOD_OFFSET))(this);
		}

		::System::Void JJMEJDCBCFO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMKENJFELG_JJMEJDCBCFO_OFFSET))(this);
		}

		::System::Void JJJOBHLJPAK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PBMKENJFELG_JJJOBHLJPAK_OFFSET))(this, a1);
		}

		::RPG::Client::AudioManager* LOGDICCEOHH()
		{
			return ((::RPG::Client::AudioManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMKENJFELG_LOGDICCEOHH_OFFSET))(this);
		}

	};
