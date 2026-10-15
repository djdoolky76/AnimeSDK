#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftPartType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
class HNMIPBLIAJA;
class JACIBMLLOFE;
class OCKFDCAINLB;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KOGNDOEELHI_CTOR_OFFSET UNITYSDK_OFFSET(0xB5900E0)
#define KOGNDOEELHI_LMFPDGFALML_OFFSET UNITYSDK_OFFSET(0xB5901F0)
#define KOGNDOEELHI_ODAOBOJBMMH_OFFSET UNITYSDK_OFFSET(0xB590380)

inline static constexpr unsigned int KOGNDOEELHI_TypeDefinitionIndex = 80128;

	class KOGNDOEELHI : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::UInt32, ::RPG::Client::MechCraft::MechCraftPartType>, ::JACIBMLLOFE*>* LHFHFJBKJDK; // 0x10
		::HNMIPBLIAJA* CEFLLELKFOP; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::RPG::Client::MechCraft::MechCraftPartType>, ::OCKFDCAINLB*>* HJLKLEMKDNI; // 0x20
		::System::Void _ctor(::HNMIPBLIAJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNMIPBLIAJA*))((::PBYTE)hIl2Cpp + KOGNDOEELHI_CTOR_OFFSET))(this, a1);
		}

		::OCKFDCAINLB* LMFPDGFALML(::System::UInt32 a1, ::RPG::Client::MechCraft::MechCraftPartType a2)
		{
			return ((::OCKFDCAINLB*(*)(::PVOID, ::System::UInt32, ::RPG::Client::MechCraft::MechCraftPartType))((::PBYTE)hIl2Cpp + KOGNDOEELHI_LMFPDGFALML_OFFSET))(this, a1, a2);
		}

		::JACIBMLLOFE* ODAOBOJBMMH(::RPG::Client::MechCraft::MechCraftAttributeType a1, ::System::UInt32 a2, ::RPG::Client::MechCraft::MechCraftPartType a3)
		{
			return ((::JACIBMLLOFE*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType, ::System::UInt32, ::RPG::Client::MechCraft::MechCraftPartType))((::PBYTE)hIl2Cpp + KOGNDOEELHI_ODAOBOJBMMH_OFFSET))(this, a1, a2, a3);
		}

	};
