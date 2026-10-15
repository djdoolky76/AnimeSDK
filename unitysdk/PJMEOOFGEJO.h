#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"
#include "unitysdk/System/Object.h"
class EOBNDBAEPHG;
class NOAAPIFJKNE;
namespace RPG::Client { class SwordTrainingGameInstance; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define PJMEOOFGEJO_APNMFDCHMDG_OFFSET UNITYSDK_OFFSET(0xC293B00)
#define PJMEOOFGEJO_BNMFMCEFHLH_OFFSET UNITYSDK_OFFSET(0xC293F50)
#define PJMEOOFGEJO_CCEDOIDEMEG_OFFSET UNITYSDK_OFFSET(0xC293930)
#define PJMEOOFGEJO_CTOR_OFFSET UNITYSDK_OFFSET(0xC294760)
#define PJMEOOFGEJO_DDFHPDCBOHD_OFFSET UNITYSDK_OFFSET(0xC293530)
#define PJMEOOFGEJO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC293310)
#define PJMEOOFGEJO_ECOLODEMCNE_OFFSET UNITYSDK_OFFSET(0xC2944B0)
#define PJMEOOFGEJO_EHFBAAFEBDJ_OFFSET UNITYSDK_OFFSET(0xC293710)
#define PJMEOOFGEJO_FHMIDJDMIDD_OFFSET UNITYSDK_OFFSET(0xC293B80)
#define PJMEOOFGEJO_GAMOJIBCHPO_OFFSET UNITYSDK_OFFSET(0xC2940A0)
#define PJMEOOFGEJO_GKLPIIGLNOO_OFFSET UNITYSDK_OFFSET(0xC294710)
#define PJMEOOFGEJO_HGEPFPFLHFM_OFFSET UNITYSDK_OFFSET(0xC2938F0)
#define PJMEOOFGEJO_HKOFONNIPDC_1_OFFSET UNITYSDK_OFFSET(0xC293D80)
#define PJMEOOFGEJO_HKOFONNIPDC_OFFSET UNITYSDK_OFFSET(0xC2939F0)
#define PJMEOOFGEJO_INGOAEPFMAP_1_OFFSET UNITYSDK_OFFSET(0xC293490)
#define PJMEOOFGEJO_INGOAEPFMAP_OFFSET UNITYSDK_OFFSET(0xC293400)
#define PJMEOOFGEJO_JHEPMLCGNLC_OFFSET UNITYSDK_OFFSET(0xC293860)
#define PJMEOOFGEJO_JKLNEBBGBGI_OFFSET UNITYSDK_OFFSET(0xC2935F0)
#define PJMEOOFGEJO_JLIMDKOMLKD_OFFSET UNITYSDK_OFFSET(0xC2945A0)
#define PJMEOOFGEJO_JOJHBKKOIGK_OFFSET UNITYSDK_OFFSET(0xC2937A0)
#define PJMEOOFGEJO_KLKJIGKDFML_OFFSET UNITYSDK_OFFSET(0xC293ED0)
#define PJMEOOFGEJO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC293260)
#define PJMEOOFGEJO_MLPDEIPAAIA_OFFSET UNITYSDK_OFFSET(0xC294450)
#define PJMEOOFGEJO_ONIPNAILHIH_OFFSET UNITYSDK_OFFSET(0xC293980)
#define PJMEOOFGEJO_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xC293DE0)
#define PJMEOOFGEJO_PNIEFOONFOP_OFFSET UNITYSDK_OFFSET(0xC293670)

inline static constexpr unsigned int PJMEOOFGEJO_TypeDefinitionIndex = 75039;

	class PJMEOOFGEJO : public ::System::Object
	{
	public:
		::NOAAPIFJKNE* BKIFMPHBIAK; // 0x10
		::EOBNDBAEPHG* JJBOPOPCOCH; // 0x18
		::System::Collections::Generic::Queue_1<::EOBNDBAEPHG*>* EFJKPFHLKHA; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMEOOFGEJO_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMEOOFGEJO_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMEOOFGEJO_DISPOSE_OFFSET))(this);
		}

		::System::Void INGOAEPFMAP(::EOBNDBAEPHG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOBNDBAEPHG*))((::PBYTE)hIl2Cpp + PJMEOOFGEJO_INGOAEPFMAP_OFFSET))(this, a1);
		}

		::System::Void INGOAEPFMAP_1(::RPG::Client::SwordTraining::SwordTrainingGameStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingGameStateType))((::PBYTE)hIl2Cpp + PJMEOOFGEJO_INGOAEPFMAP_1_OFFSET))(this, a1);
		}

		::System::Void JKLNEBBGBGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMEOOFGEJO_JKLNEBBGBGI_OFFSET))(this);
		}

		::System::Void JOJHBKKOIGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMEOOFGEJO_JOJHBKKOIGK_OFFSET))(this);
		}

		::System::Void HGEPFPFLHFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMEOOFGEJO_HGEPFPFLHFM_OFFSET))(this);
		}

		::System::Void CCEDOIDEMEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMEOOFGEJO_CCEDOIDEMEG_OFFSET))(this);
		}

		::System::Void ONIPNAILHIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMEOOFGEJO_ONIPNAILHIH_OFFSET))(this);
		}

		::System::Void HKOFONNIPDC(::EOBNDBAEPHG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOBNDBAEPHG*))((::PBYTE)hIl2Cpp + PJMEOOFGEJO_HKOFONNIPDC_OFFSET))(this, a1);
		}

		::System::Void HKOFONNIPDC_1(::RPG::Client::SwordTraining::SwordTrainingGameStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingGameStateType))((::PBYTE)hIl2Cpp + PJMEOOFGEJO_HKOFONNIPDC_1_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMEOOFGEJO_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void KLKJIGKDFML(::RPG::Client::SwordTraining::SwordTrainingGameStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingGameStateType))((::PBYTE)hIl2Cpp + PJMEOOFGEJO_KLKJIGKDFML_OFFSET))(this, a1);
		}

		::System::Void GAMOJIBCHPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMEOOFGEJO_GAMOJIBCHPO_OFFSET))(this);
		}

		::System::Void MLPDEIPAAIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMEOOFGEJO_MLPDEIPAAIA_OFFSET))(this);
		}

		::System::Boolean APNMFDCHMDG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMEOOFGEJO_APNMFDCHMDG_OFFSET))(this);
		}

		::System::Void EHFBAAFEBDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMEOOFGEJO_EHFBAAFEBDJ_OFFSET))(this);
		}

		::System::Void FHMIDJDMIDD(::EOBNDBAEPHG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOBNDBAEPHG*))((::PBYTE)hIl2Cpp + PJMEOOFGEJO_FHMIDJDMIDD_OFFSET))(this, a1);
		}

		::System::Void JHEPMLCGNLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMEOOFGEJO_JHEPMLCGNLC_OFFSET))(this);
		}

		::System::Void ECOLODEMCNE(::EOBNDBAEPHG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOBNDBAEPHG*))((::PBYTE)hIl2Cpp + PJMEOOFGEJO_ECOLODEMCNE_OFFSET))(this, a1);
		}

		::EOBNDBAEPHG* DDFHPDCBOHD(::RPG::Client::SwordTraining::SwordTrainingGameStateType a1)
		{
			return ((::EOBNDBAEPHG*(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingGameStateType))((::PBYTE)hIl2Cpp + PJMEOOFGEJO_DDFHPDCBOHD_OFFSET))(this, a1);
		}

		::RPG::Client::SwordTraining::SwordTrainingGameStateType BNMFMCEFHLH()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMEOOFGEJO_BNMFMCEFHLH_OFFSET))(this);
		}

		::RPG::Client::SwordTraining::SwordTrainingGameStateType JLIMDKOMLKD()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMEOOFGEJO_JLIMDKOMLKD_OFFSET))(this);
		}

		::System::Boolean GKLPIIGLNOO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMEOOFGEJO_GKLPIIGLNOO_OFFSET))(this);
		}

		::RPG::Client::SwordTrainingGameInstance* PNIEFOONFOP()
		{
			return ((::RPG::Client::SwordTrainingGameInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMEOOFGEJO_PNIEFOONFOP_OFFSET))(this);
		}

	};
