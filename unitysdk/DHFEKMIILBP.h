#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AudioBundleInfoItem; }
namespace System { class String; }

#define DHFEKMIILBP_CTOR_OFFSET UNITYSDK_OFFSET(0xEBC71C0)
#define DHFEKMIILBP_EPJMDDLNAJP_OFFSET UNITYSDK_OFFSET(0xEBC7690)
#define DHFEKMIILBP_FGDJDBHMCOJ_OFFSET UNITYSDK_OFFSET(0xEBC73D0)
#define DHFEKMIILBP_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xEBC7220)
#define DHFEKMIILBP_JDHJDIHLCAK_OFFSET UNITYSDK_OFFSET(0xEBC74D0)
#define DHFEKMIILBP_JMFFHBHOHGD_OFFSET UNITYSDK_OFFSET(0xEBC7600)
#define DHFEKMIILBP_KBKDFFHOJPK_OFFSET UNITYSDK_OFFSET(0xEBC7840)
#define DHFEKMIILBP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xEBC71E0)
#define DHFEKMIILBP_MEMPMKGIBKN_OFFSET UNITYSDK_OFFSET(0xEBC7720)
#define DHFEKMIILBP_MIMMIDDKCFI_OFFSET UNITYSDK_OFFSET(0xEBC7260)
#define DHFEKMIILBP_MLODHCBPGDG_OFFSET UNITYSDK_OFFSET(0xEBC7280)
#define DHFEKMIILBP_PGBMECJEPJF_OFFSET UNITYSDK_OFFSET(0xEBC7460)
#define DHFEKMIILBP_PKPIJPGKCPE_OFFSET UNITYSDK_OFFSET(0xEBC7270)

inline static constexpr unsigned int DHFEKMIILBP_TypeDefinitionIndex = 61219;

	class DHFEKMIILBP : public ::System::Object
	{
	public:
		::System::String* ALAKHHHOMDO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFEKMIILBP_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFEKMIILBP_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFEKMIILBP_HADOHLNHHGB_OFFSET))(this);
		}

		::System::String* MIMMIDDKCFI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFEKMIILBP_MIMMIDDKCFI_OFFSET))(this);
		}

		::System::Void PKPIJPGKCPE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DHFEKMIILBP_PKPIJPGKCPE_OFFSET))(this, a1);
		}

		static ::System::String* MLODHCBPGDG()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + DHFEKMIILBP_MLODHCBPGDG_OFFSET))();
		}

		static ::System::String* FGDJDBHMCOJ(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + DHFEKMIILBP_FGDJDBHMCOJ_OFFSET))(a1);
		}

		static ::System::Boolean PGBMECJEPJF(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + DHFEKMIILBP_PGBMECJEPJF_OFFSET))(a1);
		}

		static ::System::Boolean JDHJDIHLCAK(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + DHFEKMIILBP_JDHJDIHLCAK_OFFSET))(a1);
		}

		static ::System::Boolean JMFFHBHOHGD(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + DHFEKMIILBP_JMFFHBHOHGD_OFFSET))(a1);
		}

		static ::System::Boolean EPJMDDLNAJP(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + DHFEKMIILBP_EPJMDDLNAJP_OFFSET))(a1, a2);
		}

		::System::Boolean MEMPMKGIBKN(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DHFEKMIILBP_MEMPMKGIBKN_OFFSET))(this, a1);
		}

		::System::Boolean KBKDFFHOJPK(::RPG::Client::AudioBundleInfoItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AudioBundleInfoItem*))((::PBYTE)hIl2Cpp + DHFEKMIILBP_KBKDFFHOJPK_OFFSET))(this, a1);
		}

	};
