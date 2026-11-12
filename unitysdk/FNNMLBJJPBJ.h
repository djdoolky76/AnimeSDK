#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FNNMLBJJPBJ;
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FNNMLBJJPBJ_BBIMDNBFOCJ_OFFSET UNITYSDK_OFFSET(0x167FA620)
#define FNNMLBJJPBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x167F9B80)
#define FNNMLBJJPBJ_GIEGHFKCEIK_OFFSET UNITYSDK_OFFSET(0x167F9B40)
#define FNNMLBJJPBJ_HMPDCLHIPHI_OFFSET UNITYSDK_OFFSET(0x167FA1F0)
#define FNNMLBJJPBJ_LHFHPPJCEGA_OFFSET UNITYSDK_OFFSET(0x167FAAA0)
#define FNNMLBJJPBJ_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x167F9C20)

inline static constexpr unsigned int FNNMLBJJPBJ_TypeDefinitionIndex = 57510;

	class FNNMLBJJPBJ : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* MNBJBIHLKIE; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* DNOBPAFNGFM; // 0x18
		::System::Int32 BNPCLOPOJAC; // 0x20
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FNNMLBJJPBJ_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* GIEGHFKCEIK()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNMLBJJPBJ_GIEGHFKCEIK_OFFSET))(this);
		}

		::System::Void PPEGOIODAKI(::FNNMLBJJPBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNNMLBJJPBJ*))((::PBYTE)hIl2Cpp + FNNMLBJJPBJ_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::System::Void HMPDCLHIPHI(::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + FNNMLBJJPBJ_HMPDCLHIPHI_OFFSET))(this, a1);
		}

		::System::Void BBIMDNBFOCJ(::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + FNNMLBJJPBJ_BBIMDNBFOCJ_OFFSET))(this, a1);
		}

		::System::Void LHFHPPJCEGA(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FNNMLBJJPBJ_LHFHPPJCEGA_OFFSET))(this, a1, a2);
		}

	};
