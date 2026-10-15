#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EKPOLIPHPIK;
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }

#define BONINBGAHOL_CCTOR_OFFSET UNITYSDK_OFFSET(0xC199B60)
#define BONINBGAHOL_CFBHFIJFIOF_OFFSET UNITYSDK_OFFSET(0xC199A80)
#define BONINBGAHOL_CTOR_OFFSET UNITYSDK_OFFSET(0xC199B20)
#define BONINBGAHOL_DGONHBLGKAP_OFFSET UNITYSDK_OFFSET(0xC198FB0)
#define BONINBGAHOL_DKIJPIIFFHB_OFFSET UNITYSDK_OFFSET(0xC199A20)
#define BONINBGAHOL_HPDJPBBEJBI_OFFSET UNITYSDK_OFFSET(0xC198D30)
#define BONINBGAHOL_NNJGFABCOAK_OFFSET UNITYSDK_OFFSET(0xC198F00)

inline static constexpr unsigned int BONINBGAHOL_TypeDefinitionIndex = 51887;

	class BONINBGAHOL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::EKPOLIPHPIK*>* OBFJAJIAEPF; // 0x10
		static ::System::Comparison_1<::EKPOLIPHPIK*>** StaticGet_ALKBOFECEDE()
		{
			return (::System::Comparison_1<::EKPOLIPHPIK*>**)UnitySDK::FromName("", "BONINBGAHOL")->GetStaticField(0x2C10);
		}

		static ::UnityEngine::Camera** StaticGet_LJDPPOJNJBA()
		{
			return (::UnityEngine::Camera**)UnitySDK::FromName("", "BONINBGAHOL")->GetStaticField(0x2C18);
		}

		static ::UnityEngine::Vector3* StaticGet_FLLMOJMLOBL()
		{
			return (::UnityEngine::Vector3*)UnitySDK::FromName("", "BONINBGAHOL")->GetStaticField(0x2250);
		}

		static ::UnityEngine::Vector3* StaticGet_AGBAEPFJNGK()
		{
			return (::UnityEngine::Vector3*)UnitySDK::FromName("", "BONINBGAHOL")->GetStaticField(0x225C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONINBGAHOL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BONINBGAHOL_CCTOR_OFFSET))();
		}

		static ::System::Int32 HPDJPBBEJBI(::EKPOLIPHPIK* a1, ::EKPOLIPHPIK* a2)
		{
			return ((::System::Int32(*)(::EKPOLIPHPIK*, ::EKPOLIPHPIK*))((::PBYTE)hIl2Cpp + BONINBGAHOL_HPDJPBBEJBI_OFFSET))(a1, a2);
		}

		::System::Void NNJGFABCOAK(::EKPOLIPHPIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKPOLIPHPIK*))((::PBYTE)hIl2Cpp + BONINBGAHOL_NNJGFABCOAK_OFFSET))(this, a1);
		}

		::System::Void DGONHBLGKAP(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + BONINBGAHOL_DGONHBLGKAP_OFFSET))(this, a1);
		}

		::System::Void DKIJPIIFFHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONINBGAHOL_DKIJPIIFFHB_OFFSET))(this);
		}

		::System::Void CFBHFIJFIOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONINBGAHOL_CFBHFIJFIOF_OFFSET))(this);
		}

	};
