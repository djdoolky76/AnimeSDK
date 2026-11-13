#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHPMNMMGLHI.h"
class FKHNFMFIKGL;
class IFMNCFKBEGL;
class JBPOKKNFOKM;
class NOEGOMIJDAH;
class OBJANKHLNGO;
class PAMDEKPLLEL;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define LDFEDNEMOCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1AC7A040)
#define LDFEDNEMOCD_DPFJDEDDLJH_OFFSET UNITYSDK_OFFSET(0x1AC7A270)
#define LDFEDNEMOCD_IEDNMJLEPJN_OFFSET UNITYSDK_OFFSET(0x1AC7ABF0)
#define LDFEDNEMOCD_JGEAGMNGIPH_OFFSET UNITYSDK_OFFSET(0x1AC7AC90)
#define LDFEDNEMOCD_NFPJBEIPCCA_OFFSET UNITYSDK_OFFSET(0x1AC7A1E0)
#define LDFEDNEMOCD_OOEAEALLJHD_OFFSET UNITYSDK_OFFSET(0x1AC7A950)
#define LDFEDNEMOCD_PGBOMFMFFJK_OFFSET UNITYSDK_OFFSET(0x1AC7AB10)
#define LDFEDNEMOCD_START_OFFSET UNITYSDK_OFFSET(0x1AC7A090)
#define LDFEDNEMOCD_STOP_OFFSET UNITYSDK_OFFSET(0x1AC7A180)

inline static constexpr unsigned int LDFEDNEMOCD_TypeDefinitionIndex = 84869;

	class LDFEDNEMOCD : public ::BHPMNMMGLHI
	{
	public:
		::OBJANKHLNGO* GJALMBBNNOF; // 0x20
		::System::Void _ctor(::OBJANKHLNGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + LDFEDNEMOCD_CTOR_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFEDNEMOCD_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFEDNEMOCD_STOP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::PAMDEKPLLEL*>* NFPJBEIPCCA()
		{
			return ((::RPG::Client::Promises::IPromise_1<::PAMDEKPLLEL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFEDNEMOCD_NFPJBEIPCCA_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::IFMNCFKBEGL*>* DPFJDEDDLJH(::System::UInt32 a1, ::System::Boolean a2, ::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::IAvatar*>* a3)
		{
			return ((::RPG::Client::Promises::IPromise_1<::IFMNCFKBEGL*>*(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + LDFEDNEMOCD_DPFJDEDDLJH_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Promises::IPromise_1<::FKHNFMFIKGL*>* OOEAEALLJHD(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::FKHNFMFIKGL*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDFEDNEMOCD_OOEAEALLJHD_OFFSET))(this, a1);
		}

		::System::Void PGBOMFMFFJK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDFEDNEMOCD_PGBOMFMFFJK_OFFSET))(this, a1);
		}

		::System::Void IEDNMJLEPJN(::System::UInt16 a1, ::NOEGOMIJDAH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::NOEGOMIJDAH*))((::PBYTE)hIl2Cpp + LDFEDNEMOCD_IEDNMJLEPJN_OFFSET))(this, a1, a2);
		}

		::System::Void JGEAGMNGIPH(::System::UInt16 a1, ::JBPOKKNFOKM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::JBPOKKNFOKM*))((::PBYTE)hIl2Cpp + LDFEDNEMOCD_JGEAGMNGIPH_OFFSET))(this, a1, a2);
		}

	};
