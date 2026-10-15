#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJNAOAEPNJF_JCKKNDFIFLM_FCHIHJFAMOI.h"
#include "unitysdk/RPG/GameCore/AntiLockHPStrength.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
namespace RPG::GameCore { class GameEntity; }

#define FJNAOAEPNJF_JCKKNDFIFLM_APBGOKEOHNF_OFFSET UNITYSDK_OFFSET(0x157D0B70)
#define FJNAOAEPNJF_JCKKNDFIFLM_CTOR_OFFSET UNITYSDK_OFFSET(0x157CEF10)
#define FJNAOAEPNJF_JCKKNDFIFLM_DGIBJJFBMMK_OFFSET UNITYSDK_OFFSET(0x157D0D30)
#define FJNAOAEPNJF_JCKKNDFIFLM_EFOKNMPOIPE_OFFSET UNITYSDK_OFFSET(0x157D0BF0)
#define FJNAOAEPNJF_JCKKNDFIFLM_GET_MAINTARGET_OFFSET UNITYSDK_OFFSET(0x157D0AD0)
#define FJNAOAEPNJF_JCKKNDFIFLM_GOCKCOMLFEO_OFFSET UNITYSDK_OFFSET(0x157D07E0)
#define FJNAOAEPNJF_JCKKNDFIFLM_LDBHMDLCCLA_OFFSET UNITYSDK_OFFSET(0x157CF300)
#define FJNAOAEPNJF_JCKKNDFIFLM_MFPLEIHIJBI_OFFSET UNITYSDK_OFFSET(0x157D0AF0)
#define FJNAOAEPNJF_JCKKNDFIFLM_SET_MAINTARGET_OFFSET UNITYSDK_OFFSET(0x157D0AE0)

inline static constexpr unsigned int FJNAOAEPNJF_JCKKNDFIFLM_TypeDefinitionIndex = 57720;

	class FJNAOAEPNJF_JCKKNDFIFLM : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _MainTarget_k__BackingField; // 0x10
		::FJNAOAEPNJF_JCKKNDFIFLM_FCHIHJFAMOI PFKOKPCDFHO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNAOAEPNJF_JCKKNDFIFLM_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_MainTarget()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNAOAEPNJF_JCKKNDFIFLM_GET_MAINTARGET_OFFSET))(this);
		}

		::System::Void set_MainTarget(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FJNAOAEPNJF_JCKKNDFIFLM_SET_MAINTARGET_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint MFPLEIHIJBI()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNAOAEPNJF_JCKKNDFIFLM_MFPLEIHIJBI_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint APBGOKEOHNF()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNAOAEPNJF_JCKKNDFIFLM_APBGOKEOHNF_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GOCKCOMLFEO()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNAOAEPNJF_JCKKNDFIFLM_GOCKCOMLFEO_OFFSET))(this);
		}

		::System::Void LDBHMDLCCLA(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + FJNAOAEPNJF_JCKKNDFIFLM_LDBHMDLCCLA_OFFSET))(this, a1, a2);
		}

		::System::Void EFOKNMPOIPE(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::AntiLockHPStrength a2, ::CHMCAGBDPJH a3, ::RPG::GameCore::FixPoint a4, ::System::Nullable_1<::RPG::GameCore::FixPoint> a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::AntiLockHPStrength, ::CHMCAGBDPJH, ::RPG::GameCore::FixPoint, ::System::Nullable_1<::RPG::GameCore::FixPoint>))((::PBYTE)hIl2Cpp + FJNAOAEPNJF_JCKKNDFIFLM_EFOKNMPOIPE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void DGIBJJFBMMK(::RPG::GameCore::FixPoint a1, ::CHMCAGBDPJH a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + FJNAOAEPNJF_JCKKNDFIFLM_DGIBJJFBMMK_OFFSET))(this, a1, a2);
		}

	};
