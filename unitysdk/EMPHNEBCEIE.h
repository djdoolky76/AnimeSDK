#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class EMPHNEBCEIE;
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EMPHNEBCEIE_BBIMDNBFOCJ_OFFSET UNITYSDK_OFFSET(0x155A4900)
#define EMPHNEBCEIE_CTOR_OFFSET UNITYSDK_OFFSET(0x155A5250)
#define EMPHNEBCEIE_HJLDAMJPCKH_OFFSET UNITYSDK_OFFSET(0x155A3C50)
#define EMPHNEBCEIE_HMPDCLHIPHI_OFFSET UNITYSDK_OFFSET(0x155A4DC0)
#define EMPHNEBCEIE_NFAAKEHMPFA_OFFSET UNITYSDK_OFFSET(0x155A4280)
#define EMPHNEBCEIE_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x155A4420)

	class EMPHNEBCEIE : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* NHCHOBLPJGO; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>* OHCJEIDJIKC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPHNEBCEIE_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* HJLDAMJPCKH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPHNEBCEIE_HJLDAMJPCKH_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* NFAAKEHMPFA(::System::UInt32 a1, ::Il2CppArray<::RPG::GameCore::FixPoint>* a2)
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + EMPHNEBCEIE_NFAAKEHMPFA_OFFSET))(this, a1, a2);
		}

		::System::Void PPEGOIODAKI(::EMPHNEBCEIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMPHNEBCEIE*))((::PBYTE)hIl2Cpp + EMPHNEBCEIE_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::System::Void BBIMDNBFOCJ(::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>*))((::PBYTE)hIl2Cpp + EMPHNEBCEIE_BBIMDNBFOCJ_OFFSET))(this, a1);
		}

		::System::Void HMPDCLHIPHI(::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>*))((::PBYTE)hIl2Cpp + EMPHNEBCEIE_HMPDCLHIPHI_OFFSET))(this, a1);
		}

	};
