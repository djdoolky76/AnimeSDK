#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCIFDHMKADE_CameraState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
class BCIFDHMKADE;
namespace System { class Object; }

#define BCIFDHMKADE_OPCKNPGJDLN_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x15EAA0D0)
#define BCIFDHMKADE_OPCKNPGJDLN_CTOR_OFFSET UNITYSDK_OFFSET(0x15EA9150)
#define BCIFDHMKADE_OPCKNPGJDLN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15EA9FE0)
#define BCIFDHMKADE_OPCKNPGJDLN_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x15EAA080)
#define BCIFDHMKADE_OPCKNPGJDLN_KLFECPACMFD_OFFSET UNITYSDK_OFFSET(0x15EAA1B0)
#define BCIFDHMKADE_OPCKNPGJDLN_OBKNANIDMKH_OFFSET UNITYSDK_OFFSET(0x15EAA160)
#define BCIFDHMKADE_OPCKNPGJDLN_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15EAA020)
#define BCIFDHMKADE_OPCKNPGJDLN_PJPIHOEJCBP_OFFSET UNITYSDK_OFFSET(0x15EAA1F0)
#define BCIFDHMKADE_OPCKNPGJDLN_POAACIDJOKM_OFFSET UNITYSDK_OFFSET(0x15EAA120)

inline static constexpr unsigned int BCIFDHMKADE_OPCKNPGJDLN_TypeDefinitionIndex = 78642;

	class BCIFDHMKADE_OPCKNPGJDLN : public ::System::Object
	{
	public:
		::BCIFDHMKADE* JBCDFFNIMLP; // 0x10
		::BCIFDHMKADE_CameraState NEOGKILELNP; // 0x18
		::System::Void _ctor(::BCIFDHMKADE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCIFDHMKADE*))((::PBYTE)hIl2Cpp + BCIFDHMKADE_OPCKNPGJDLN_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIFDHMKADE_OPCKNPGJDLN_DISPOSE_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BCIFDHMKADE_OPCKNPGJDLN_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void KIGBILLGNOH(::BCIFDHMKADE_CameraState a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BCIFDHMKADE_CameraState, ::System::Object*))((::PBYTE)hIl2Cpp + BCIFDHMKADE_OPCKNPGJDLN_KIGBILLGNOH_OFFSET))(this, a1, a2);
		}

		::System::Void CHAHBFGGIDL(::BCIFDHMKADE_CameraState a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCIFDHMKADE_CameraState))((::PBYTE)hIl2Cpp + BCIFDHMKADE_OPCKNPGJDLN_CHAHBFGGIDL_OFFSET))(this, a1);
		}

		::System::Void POAACIDJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIFDHMKADE_OPCKNPGJDLN_POAACIDJOKM_OFFSET))(this);
		}

		::System::Void OBKNANIDMKH(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + BCIFDHMKADE_OPCKNPGJDLN_OBKNANIDMKH_OFFSET))(this, a1);
		}

		::System::Void KLFECPACMFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIFDHMKADE_OPCKNPGJDLN_KLFECPACMFD_OFFSET))(this);
		}

		::BCIFDHMKADE_CameraState PJPIHOEJCBP()
		{
			return ((::BCIFDHMKADE_CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIFDHMKADE_OPCKNPGJDLN_PJPIHOEJCBP_OFFSET))(this);
		}

	};
