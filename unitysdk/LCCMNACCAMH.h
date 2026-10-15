#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class LAJCPEFEOPN;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionAreaInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LCCMNACCAMH_CTOR_OFFSET UNITYSDK_OFFSET(0xB6121E0)
#define LCCMNACCAMH_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0xB6120E0)
#define LCCMNACCAMH_GET_DISTANCECOUNT_OFFSET UNITYSDK_OFFSET(0xB6121C0)
#define LCCMNACCAMH_GET_HORIZONTALDIRECTION_OFFSET UNITYSDK_OFFSET(0xB612100)
#define LCCMNACCAMH_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0xB6120A0)
#define LCCMNACCAMH_GET_ORIGIN_OFFSET UNITYSDK_OFFSET(0xB6120C0)
#define LCCMNACCAMH_GET_WIDTHCOUNT_OFFSET UNITYSDK_OFFSET(0xB6121A0)
#define LCCMNACCAMH_GMCOPDBFDDO_OFFSET UNITYSDK_OFFSET(0xB612980)
#define LCCMNACCAMH_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0xB612CF0)
#define LCCMNACCAMH_LLMAJLEMIDM_OFFSET UNITYSDK_OFFSET(0xB612720)
#define LCCMNACCAMH_NINDHOGICJD_1_OFFSET UNITYSDK_OFFSET(0xB612B70)
#define LCCMNACCAMH_NINDHOGICJD_OFFSET UNITYSDK_OFFSET(0xB612AC0)
#define LCCMNACCAMH_OBIIJABDNPC_OFFSET UNITYSDK_OFFSET(0xB612120)
#define LCCMNACCAMH_PJEMGKGLDOK_OFFSET UNITYSDK_OFFSET(0xB612180)
#define LCCMNACCAMH_SET_DISTANCECOUNT_OFFSET UNITYSDK_OFFSET(0xB6121D0)
#define LCCMNACCAMH_SET_ISOPEN_OFFSET UNITYSDK_OFFSET(0xB6120B0)
#define LCCMNACCAMH_SET_WIDTHCOUNT_OFFSET UNITYSDK_OFFSET(0xB6121B0)

inline static constexpr unsigned int LCCMNACCAMH_TypeDefinitionIndex = 69313;

	class LCCMNACCAMH : public ::System::Object
	{
	public:
		::Il2CppArray<::Il2CppArray<::UnityEngine::Vector3>*>* MEFHNMCBABJ; // 0x10
		::RPG::GameCore::LevelPedestrianV2IntersectionAreaInfo* EABKOHGCHFP; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* AGBJKPBEFJO; // 0x20
		::System::Collections::Generic::Dictionary_2<::LAJCPEFEOPN*, ::System::Int32>* PLDNMEDFJCD; // 0x28
		::UnityEngine::Vector3 _HorizontalDirection_k__BackingField; // 0x30
		::UnityEngine::Vector3 _Origin_k__BackingField; // 0x3C
		::System::Int32 _DistanceCount_k__BackingField; // 0x48
		::UnityEngine::Vector3 _Direction_k__BackingField; // 0x4C
		::System::Boolean _IsOpen_k__BackingField; // 0x58
		::System::Byte _padding0[0x3];
		::System::Int32 _WidthCount_k__BackingField; // 0x5C
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
