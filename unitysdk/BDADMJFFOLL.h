#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EFreeStyleControlMode.h"
#include "unitysdk/RPG/GameCore/FreeStyleController.h"
class IMPNPPMLNPH;
namespace RPG::GameCore { class FreeStyleComponent; }

#define BDADMJFFOLL_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x170B2D00)
#define BDADMJFFOLL_CTOR_OFFSET UNITYSDK_OFFSET(0x170B2C80)
#define BDADMJFFOLL_EHBDPCBNJND_OFFSET UNITYSDK_OFFSET(0x170B2D40)
#define BDADMJFFOLL_GET_INFO_OFFSET UNITYSDK_OFFSET(0x170B2B60)
#define BDADMJFFOLL_GET_MODE_OFFSET UNITYSDK_OFFSET(0x170B2B50)
#define BDADMJFFOLL_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x170B2CC0)

inline static constexpr unsigned int BDADMJFFOLL_TypeDefinitionIndex = 58502;

	class BDADMJFFOLL : public ::RPG::GameCore::FreeStyleController
	{
	public:
		::System::Void _ctor(::RPG::GameCore::FreeStyleComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleComponent*))((::PBYTE)hIl2Cpp + BDADMJFFOLL_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::EFreeStyleControlMode get_Mode()
		{
			return ((::RPG::GameCore::EFreeStyleControlMode(*)(::PVOID))((::PBYTE)hIl2Cpp + BDADMJFFOLL_GET_MODE_OFFSET))(this);
		}

		::IMPNPPMLNPH* get_Info()
		{
			return ((::IMPNPPMLNPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDADMJFFOLL_GET_INFO_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDADMJFFOLL_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDADMJFFOLL_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void EHBDPCBNJND(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDADMJFFOLL_EHBDPCBNJND_OFFSET))(this, a1);
		}

	};
