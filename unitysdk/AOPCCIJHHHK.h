#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLNKLOMDIIC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class LittleGameCircleCurveInfo; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AOPCCIJHHHK_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C8A6C50)
#define AOPCCIJHHHK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8A7A70)
#define AOPCCIJHHHK_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1C8A7180)
#define AOPCCIJHHHK_GETDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x1C8A7870)
#define AOPCCIJHHHK_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x1C8A7820)
#define AOPCCIJHHHK_IELAKFFFHCP_OFFSET UNITYSDK_OFFSET(0x1C8A7220)
#define AOPCCIJHHHK_ODJKPOLPMNO_OFFSET UNITYSDK_OFFSET(0x1C8A7A30)
#define AOPCCIJHHHK_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x1C8A6DA0)
#define AOPCCIJHHHK_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C8A6CD0)
#define AOPCCIJHHHK_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C8A6D60)
#define AOPCCIJHHHK_RECALCULATE_OFFSET UNITYSDK_OFFSET(0x1C8A7960)

inline static constexpr unsigned int AOPCCIJHHHK_TypeDefinitionIndex = 43667;

	class AOPCCIJHHHK : public ::System::Object
	{
	public:
		::RPG::GameCore::LittleGameCircleCurveInfo* HLALMJDNGPN; // 0x10
		::RPG::PoolList_1<::System::Object*>* IMLJBOJOIPP; // 0x18
		::KLNKLOMDIIC CIJHJOEEHMI; // 0x20
		::System::Single HDHPNOOMAGE; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPCCIJHHHK_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPCCIJHHHK_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPCCIJHHHK_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPCCIJHHHK_ONRECYCLE_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL(::RPG::GameCore::LittleGameCircleCurveInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameCircleCurveInfo*))((::PBYTE)hIl2Cpp + AOPCCIJHHHK_OINBDMGFFJL_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AOPCCIJHHHK_EVALUATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IELAKFFFHCP(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AOPCCIJHHHK_IELAKFFFHCP_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GetLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPCCIJHHHK_GETLENGTH_OFFSET))(this);
		}

		::System::Single GetDistanceRatio(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AOPCCIJHHHK_GETDISTANCERATIO_OFFSET))(this, a1);
		}

		::System::Void Recalculate(::KLNKLOMDIIC a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::KLNKLOMDIIC, ::System::Boolean))((::PBYTE)hIl2Cpp + AOPCCIJHHHK_RECALCULATE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::Object*>* ODJKPOLPMNO()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPCCIJHHHK_ODJKPOLPMNO_OFFSET))(this);
		}

	};
