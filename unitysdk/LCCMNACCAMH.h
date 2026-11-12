#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class LAJCPEFEOPN;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionAreaInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LCCMNACCAMH_CTOR_OFFSET UNITYSDK_OFFSET(0xBEA4C40)
#define LCCMNACCAMH_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0xBEA4B40)
#define LCCMNACCAMH_GET_DISTANCECOUNT_OFFSET UNITYSDK_OFFSET(0xBEA4C20)
#define LCCMNACCAMH_GET_HORIZONTALDIRECTION_OFFSET UNITYSDK_OFFSET(0xBEA4B60)
#define LCCMNACCAMH_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0xBEA4B00)
#define LCCMNACCAMH_GET_ORIGIN_OFFSET UNITYSDK_OFFSET(0xBEA4B20)
#define LCCMNACCAMH_GET_WIDTHCOUNT_OFFSET UNITYSDK_OFFSET(0xBEA4C00)
#define LCCMNACCAMH_GMCOPDBFDDO_OFFSET UNITYSDK_OFFSET(0xBEA53C0)
#define LCCMNACCAMH_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0xBEA5730)
#define LCCMNACCAMH_LLMAJLEMIDM_OFFSET UNITYSDK_OFFSET(0xBEA5190)
#define LCCMNACCAMH_NINDHOGICJD_1_OFFSET UNITYSDK_OFFSET(0xBEA55B0)
#define LCCMNACCAMH_NINDHOGICJD_OFFSET UNITYSDK_OFFSET(0xBEA5500)
#define LCCMNACCAMH_OBIIJABDNPC_OFFSET UNITYSDK_OFFSET(0xBEA4B80)
#define LCCMNACCAMH_PJEMGKGLDOK_OFFSET UNITYSDK_OFFSET(0xBEA4BE0)
#define LCCMNACCAMH_SET_DISTANCECOUNT_OFFSET UNITYSDK_OFFSET(0xBEA4C30)
#define LCCMNACCAMH_SET_ISOPEN_OFFSET UNITYSDK_OFFSET(0xBEA4B10)
#define LCCMNACCAMH_SET_WIDTHCOUNT_OFFSET UNITYSDK_OFFSET(0xBEA4C10)

inline static constexpr unsigned int LCCMNACCAMH_TypeDefinitionIndex = 71267;

	class LCCMNACCAMH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* AGBJKPBEFJO; // 0x10
		::Il2CppArray<::Il2CppArray<::UnityEngine::Vector3>*>* MEFHNMCBABJ; // 0x18
		::System::Collections::Generic::Dictionary_2<::LAJCPEFEOPN*, ::System::Int32>* PLDNMEDFJCD; // 0x20
		::RPG::GameCore::LevelPedestrianV2IntersectionAreaInfo* EABKOHGCHFP; // 0x28
		::UnityEngine::Vector3 _Direction_k__BackingField; // 0x30
		::System::Int32 _WidthCount_k__BackingField; // 0x3C
		::System::Int32 _DistanceCount_k__BackingField; // 0x40
		::UnityEngine::Vector3 _Origin_k__BackingField; // 0x44
		::System::Boolean _IsOpen_k__BackingField; // 0x50
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 _HorizontalDirection_k__BackingField; // 0x54
		// static const ::System::Object DFNCMHJCDDB; // 0x0
		::System::Void _ctor(::RPG::GameCore::LevelPedestrianV2IntersectionAreaInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPedestrianV2IntersectionAreaInfo*))((::PBYTE)hIl2Cpp + LCCMNACCAMH_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LCCMNACCAMH_GET_ISOPEN_OFFSET))(this);
		}

		::System::Void set_IsOpen(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LCCMNACCAMH_SET_ISOPEN_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_Origin()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LCCMNACCAMH_GET_ORIGIN_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Direction()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LCCMNACCAMH_GET_DIRECTION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_HorizontalDirection()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LCCMNACCAMH_GET_HORIZONTALDIRECTION_OFFSET))(this);
		}

		::System::Single OBIIJABDNPC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LCCMNACCAMH_OBIIJABDNPC_OFFSET))(this);
		}

		::System::Single PJEMGKGLDOK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LCCMNACCAMH_PJEMGKGLDOK_OFFSET))(this);
		}

		::System::Int32 get_WidthCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCCMNACCAMH_GET_WIDTHCOUNT_OFFSET))(this);
		}

		::System::Void set_WidthCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LCCMNACCAMH_SET_WIDTHCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_DistanceCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCCMNACCAMH_GET_DISTANCECOUNT_OFFSET))(this);
		}

		::System::Void set_DistanceCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LCCMNACCAMH_SET_DISTANCECOUNT_OFFSET))(this, a1);
		}

		::System::Void LLMAJLEMIDM(::LAJCPEFEOPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAJCPEFEOPN*))((::PBYTE)hIl2Cpp + LCCMNACCAMH_LLMAJLEMIDM_OFFSET))(this, a1);
		}

		::System::Boolean GMCOPDBFDDO(::LAJCPEFEOPN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LAJCPEFEOPN*))((::PBYTE)hIl2Cpp + LCCMNACCAMH_GMCOPDBFDDO_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 NINDHOGICJD(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LCCMNACCAMH_NINDHOGICJD_OFFSET))(this, a1);
		}

		::System::Boolean NINDHOGICJD_1(::LAJCPEFEOPN* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::LAJCPEFEOPN*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LCCMNACCAMH_NINDHOGICJD_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean LCJMKJPECAP(::LAJCPEFEOPN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LAJCPEFEOPN*))((::PBYTE)hIl2Cpp + LCCMNACCAMH_LCJMKJPECAP_OFFSET))(this, a1);
		}

	};
