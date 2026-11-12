#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class ValuePostProcessConfig; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KKDKGKHDEDL_BCJMKFBENLP_OFFSET UNITYSDK_OFFSET(0xBCFF700)
#define KKDKGKHDEDL_BDCNBBJBJBA_OFFSET UNITYSDK_OFFSET(0xBCFF9C0)
#define KKDKGKHDEDL_BJHOOFBJBEB_OFFSET UNITYSDK_OFFSET(0xBCFF850)
#define KKDKGKHDEDL_BNMHBNENCMI_OFFSET UNITYSDK_OFFSET(0xBCFFD70)
#define KKDKGKHDEDL_CCTOR_OFFSET UNITYSDK_OFFSET(0xBD00440)
#define KKDKGKHDEDL_CTOR_OFFSET UNITYSDK_OFFSET(0xBD00430)
#define KKDKGKHDEDL_EEGCLBHDAOI_OFFSET UNITYSDK_OFFSET(0xBCFF610)
#define KKDKGKHDEDL_EOFBDEIPNAG_OFFSET UNITYSDK_OFFSET(0xBCFFAD0)
#define KKDKGKHDEDL_JBGIFBGMLMF_OFFSET UNITYSDK_OFFSET(0xBCFF0F0)
#define KKDKGKHDEDL_KMDEGIJDBME_OFFSET UNITYSDK_OFFSET(0xBCFF960)
#define KKDKGKHDEDL_LHHLKAKJJOG_OFFSET UNITYSDK_OFFSET(0xBCFF430)
#define KKDKGKHDEDL_MFHJPCDPFCM_OFFSET UNITYSDK_OFFSET(0xBCFF760)
#define KKDKGKHDEDL_NGPCPNMMGBI_OFFSET UNITYSDK_OFFSET(0xBD001B0)
#define KKDKGKHDEDL_OOIHGEJIJLF_OFFSET UNITYSDK_OFFSET(0xBCFF340)
#define KKDKGKHDEDL_PJFHPJOFAEK_OFFSET UNITYSDK_OFFSET(0xBCFF520)

inline static constexpr unsigned int KKDKGKHDEDL_TypeDefinitionIndex = 60537;

	class KKDKGKHDEDL : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>** StaticGet_MMGBPIDLOLG()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>**)UnitySDK::FromName("", "KKDKGKHDEDL")->GetStaticField(0x4AAD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKDKGKHDEDL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKDKGKHDEDL_CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::FixPoint JBGIFBGMLMF(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::ValuePostProcessConfig* a2, ::RPG::GameCore::TaskContext* a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::ValuePostProcessConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KKDKGKHDEDL_JBGIFBGMLMF_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixPoint OOIHGEJIJLF(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::ValuePostProcessConfig* a2, ::RPG::GameCore::TaskContext* a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::ValuePostProcessConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KKDKGKHDEDL_OOIHGEJIJLF_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixPoint LHHLKAKJJOG(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::ValuePostProcessConfig* a2, ::RPG::GameCore::TaskContext* a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::ValuePostProcessConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KKDKGKHDEDL_LHHLKAKJJOG_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixPoint PJFHPJOFAEK(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::ValuePostProcessConfig* a2, ::RPG::GameCore::TaskContext* a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::ValuePostProcessConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KKDKGKHDEDL_PJFHPJOFAEK_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixPoint EEGCLBHDAOI(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::ValuePostProcessConfig* a2, ::RPG::GameCore::TaskContext* a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::ValuePostProcessConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KKDKGKHDEDL_EEGCLBHDAOI_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixPoint BCJMKFBENLP(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::ValuePostProcessConfig* a2, ::RPG::GameCore::TaskContext* a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::ValuePostProcessConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KKDKGKHDEDL_BCJMKFBENLP_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixPoint MFHJPCDPFCM(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::ValuePostProcessConfig* a2, ::RPG::GameCore::TaskContext* a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::ValuePostProcessConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KKDKGKHDEDL_MFHJPCDPFCM_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixPoint BJHOOFBJBEB(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::ValuePostProcessConfig* a2, ::RPG::GameCore::TaskContext* a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::ValuePostProcessConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KKDKGKHDEDL_BJHOOFBJBEB_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixPoint KMDEGIJDBME(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::ValuePostProcessConfig* a2, ::RPG::GameCore::TaskContext* a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::ValuePostProcessConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KKDKGKHDEDL_KMDEGIJDBME_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixPoint BDCNBBJBJBA(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::ValuePostProcessConfig* a2, ::RPG::GameCore::TaskContext* a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::ValuePostProcessConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KKDKGKHDEDL_BDCNBBJBJBA_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixPoint EOFBDEIPNAG(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::ValuePostProcessConfig* a2, ::RPG::GameCore::TaskContext* a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::ValuePostProcessConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KKDKGKHDEDL_EOFBDEIPNAG_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixPoint BNMHBNENCMI(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::ValuePostProcessConfig* a2, ::RPG::GameCore::TaskContext* a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::ValuePostProcessConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KKDKGKHDEDL_BNMHBNENCMI_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixPoint NGPCPNMMGBI(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::ValuePostProcessConfig* a2, ::RPG::GameCore::TaskContext* a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::ValuePostProcessConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KKDKGKHDEDL_NGPCPNMMGBI_OFFSET))(a1, a2, a3);
		}

	};
