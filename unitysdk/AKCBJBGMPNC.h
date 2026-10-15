#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHOLDPBFDLO;
class KBGKAMMKDCE;
namespace RPG::GameCore { class LevelPedestrianInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKCBJBGMPNC_ACDGPABGIFE_OFFSET UNITYSDK_OFFSET(0x12CCA670)
#define AKCBJBGMPNC_CTOR_OFFSET UNITYSDK_OFFSET(0x12CCA460)
#define AKCBJBGMPNC_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x12CCA7C0)
#define AKCBJBGMPNC_FFEOOBGDLCN_OFFSET UNITYSDK_OFFSET(0x12CCAAC0)
#define AKCBJBGMPNC_KDJANOAPAFO_OFFSET UNITYSDK_OFFSET(0x12CCA9D0)
#define AKCBJBGMPNC_OODNNFMLDCH_OFFSET UNITYSDK_OFFSET(0x12CCA890)

inline static constexpr unsigned int AKCBJBGMPNC_TypeDefinitionIndex = 69223;

	class AKCBJBGMPNC : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelPedestrianInfo*>* HMFAHECCONK; // 0x10
		::System::Collections::Generic::List_1<::KBGKAMMKDCE*>* EGMMEMMOBCE; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::KBGKAMMKDCE*>* OCJJJIFPIBE; // 0x20
		::System::Int32 CAJFLBCFGLD; // 0x28
		::System::UInt32 MJPPOIHKCCB; // 0x2C
		::System::Void _ctor(::System::UInt32 a1, ::Il2CppArray<::RPG::GameCore::LevelPedestrianInfo*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::LevelPedestrianInfo*>*))((::PBYTE)hIl2Cpp + AKCBJBGMPNC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void ACDGPABGIFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCBJBGMPNC_ACDGPABGIFE_OFFSET))(this);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKCBJBGMPNC_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void OODNNFMLDCH(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AKCBJBGMPNC_OODNNFMLDCH_OFFSET))(this, a1, a2);
		}

		::KBGKAMMKDCE* KDJANOAPAFO(::System::Int32 a1)
		{
			return ((::KBGKAMMKDCE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKCBJBGMPNC_KDJANOAPAFO_OFFSET))(this, a1);
		}

		::System::Void FFEOOBGDLCN(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Int32 a4, ::FHOLDPBFDLO* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::FHOLDPBFDLO*))((::PBYTE)hIl2Cpp + AKCBJBGMPNC_FFEOOBGDLCN_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
