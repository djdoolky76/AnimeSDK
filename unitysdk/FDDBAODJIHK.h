#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGCLAKDAHDB.h"
#include "unitysdk/RPG/GameCore/PetDiySlotType.h"
class FKIODIMJPNA;
class HFFHEPEBJFE;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FDDBAODJIHK_AFDEEMPIOLO_OFFSET UNITYSDK_OFFSET(0x156D29D0)
#define FDDBAODJIHK_CTOR_OFFSET UNITYSDK_OFFSET(0x156D3260)
#define FDDBAODJIHK_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x156D3050)
#define FDDBAODJIHK_HIBJNGKEKOG_OFFSET UNITYSDK_OFFSET(0x156D2900)
#define FDDBAODJIHK_HMDEGMNIFGO_OFFSET UNITYSDK_OFFSET(0x156D2B90)
#define FDDBAODJIHK_IICGHDNEBKN_OFFSET UNITYSDK_OFFSET(0x156D2D30)
#define FDDBAODJIHK_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x156D2E70)
#define FDDBAODJIHK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x156D2920)
#define FDDBAODJIHK_NCBGDCINJEB_OFFSET UNITYSDK_OFFSET(0x156D2910)

inline static constexpr unsigned int FDDBAODJIHK_TypeDefinitionIndex = 60194;

	class FDDBAODJIHK : public ::DGCLAKDAHDB
	{
	public:
		::System::Collections::Generic::Dictionary_2<::FKIODIMJPNA*, ::System::Object*>* DIDBPDJOOAO; // 0x10
		::System::Boolean AMDJLAFJKFA; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single JOBNCJOPEHJ; // 0x1C
		::System::Single NAJNDICJNGH; // 0x20
		::System::Single GELMKELMIPE; // 0x24
		// static const ::System::String* DPKDDDHNDLC; // 0x0
		// static const ::System::String* HBJLMAPLLJA; // 0x0
		// static const ::System::String* BPCGAHNPPKB; // 0x0
		// static const ::System::Object FAGNJEHBAOC; // 0x0
		// static const ::System::Object KIJLDMGBPOK; // 0x0
		// static const ::System::Object ICKNJPBGHHE; // 0x0
		// static const ::System::Object FCGDMLPFOEB; // 0x0
		// static const ::System::Object FNHONLBDDGK; // 0x0
		// static const ::System::Object MFMDPPAKJJN; // 0x0
		// static const ::System::Object AHBEEEPEFCM; // 0x0
		// static const ::System::Object NBCNLOHLBAE; // 0x0
		// static const ::System::Object KMEBKBMDJJP; // 0x0
		// static const ::System::Object NMNHJHMNOME; // 0x0
		// static const ::System::Object FAGEHFCCFKF; // 0x0
		// static const ::System::Object EKGLODKEDOB; // 0x0
		// static const ::System::Object OOMPOJCIKBE; // 0x0
		// static const ::System::Object FOKKGCIOJEC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDBAODJIHK_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::PetDiySlotType HIBJNGKEKOG()
		{
			return ((::RPG::GameCore::PetDiySlotType(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDBAODJIHK_HIBJNGKEKOG_OFFSET))(this);
		}

		::System::Boolean NCBGDCINJEB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDBAODJIHK_NCBGDCINJEB_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::HFFHEPEBJFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFFHEPEBJFE*))((::PBYTE)hIl2Cpp + FDDBAODJIHK_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void AFDEEMPIOLO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FDDBAODJIHK_AFDEEMPIOLO_OFFSET))(this, a1);
		}

		::System::Void HMDEGMNIFGO(::FKIODIMJPNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKIODIMJPNA*))((::PBYTE)hIl2Cpp + FDDBAODJIHK_HMDEGMNIFGO_OFFSET))(this, a1);
		}

		::System::Void IICGHDNEBKN(::FKIODIMJPNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKIODIMJPNA*))((::PBYTE)hIl2Cpp + FDDBAODJIHK_IICGHDNEBKN_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FDDBAODJIHK_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDBAODJIHK_HADOHLNHHGB_OFFSET))(this);
		}

	};
