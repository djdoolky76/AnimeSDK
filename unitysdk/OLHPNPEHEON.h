#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifyCalcOpType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class OLHPNPEHEON;
class OLHPNPEHEON_ADGCENEMEFG;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define OLHPNPEHEON_ADPDGGAFEHC_OFFSET UNITYSDK_OFFSET(0xBF0C580)
#define OLHPNPEHEON_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBF0BCD0)
#define OLHPNPEHEON_CTOR_OFFSET UNITYSDK_OFFSET(0xBF0BE10)
#define OLHPNPEHEON_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xBF0BEA0)
#define OLHPNPEHEON_HGONPBCKOGM_OFFSET UNITYSDK_OFFSET(0xBF0C990)
#define OLHPNPEHEON_KJGABLPOFKD_OFFSET UNITYSDK_OFFSET(0xBF0C730)

inline static constexpr unsigned int OLHPNPEHEON_TypeDefinitionIndex = 65272;

	class OLHPNPEHEON : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* IAFNNMFIMOI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLHPNPEHEON_CTOR_OFFSET))(this);
		}

		static ::OLHPNPEHEON* BPLPBPMEODA(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::OLHPNPEHEON*(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + OLHPNPEHEON_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::String* ADPDGGAFEHC(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OLHPNPEHEON_ADPDGGAFEHC_OFFSET))(this, a1);
		}

		::System::Void KJGABLPOFKD(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::ModifyCalcOpType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::ModifyCalcOpType))((::PBYTE)hIl2Cpp + OLHPNPEHEON_KJGABLPOFKD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DIOEAJEHHND(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + OLHPNPEHEON_DIOEAJEHHND_OFFSET))(this, a1, a2);
		}

		::OLHPNPEHEON_ADGCENEMEFG* HGONPBCKOGM(::RPG::GameCore::ModifyCalcOpType a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::OLHPNPEHEON_ADGCENEMEFG*(*)(::PVOID, ::RPG::GameCore::ModifyCalcOpType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OLHPNPEHEON_HGONPBCKOGM_OFFSET))(this, a1, a2);
		}

	};
