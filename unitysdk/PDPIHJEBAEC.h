#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLNKLOMDIIC.h"
#include "unitysdk/RPG/GameCore/FiveDimCardinalDirection.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/System/ValueTuple_4.h"
namespace RPG { template <typename T> class PoolList_1; }

#define PDPIHJEBAEC_CEOECDIAGEC_OFFSET UNITYSDK_OFFSET(0x1C9A6090)
#define PDPIHJEBAEC_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C9A59D0)
#define PDPIHJEBAEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9A9B00)
#define PDPIHJEBAEC_EBHEODMGGCE_OFFSET UNITYSDK_OFFSET(0x1C9A9220)
#define PDPIHJEBAEC_GGJJGAMDNED_OFFSET UNITYSDK_OFFSET(0x1C9A61A0)
#define PDPIHJEBAEC_HJINJINMBNB_OFFSET UNITYSDK_OFFSET(0x1C9A98F0)
#define PDPIHJEBAEC_HKEGFBPLCDH_OFFSET UNITYSDK_OFFSET(0x1C9A9820)
#define PDPIHJEBAEC_KLIBNNLCKIH_OFFSET UNITYSDK_OFFSET(0x1C9A82D0)
#define PDPIHJEBAEC_LBDJFNDMMOA_1_OFFSET UNITYSDK_OFFSET(0x1C9A71E0)
#define PDPIHJEBAEC_LBDJFNDMMOA_OFFSET UNITYSDK_OFFSET(0x1C9A5A30)
#define PDPIHJEBAEC_LLCPNBBGABJ_OFFSET UNITYSDK_OFFSET(0x1C9A99F0)
#define PDPIHJEBAEC_OFFNNJDGFDI_OFFSET UNITYSDK_OFFSET(0x1C9A9890)
#define PDPIHJEBAEC_OHPDOPCLFAD_OFFSET UNITYSDK_OFFSET(0x1C9A6110)
#define PDPIHJEBAEC_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C9A5900)
#define PDPIHJEBAEC_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C9A5990)

inline static constexpr unsigned int PDPIHJEBAEC_TypeDefinitionIndex = 43369;

	class PDPIHJEBAEC : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::KLNKLOMDIIC>* AMOAILILJED; // 0x10
		::RPG::GameCore::FiveDimCardinalDirection CDFCOICCPJN; // 0x18
		::System::Single LIBNCDAIOPK; // 0x1C
		::KLNKLOMDIIC EHEPFGAHPBK; // 0x20
		::System::Boolean PELJACANAFH; // 0x88
		::System::Boolean EEBCOLBIPBC; // 0x89
		::System::Byte _padding0[0x2];
		::KLNKLOMDIIC GIBGFBIAPBI; // 0x8C
		::UnityEngine::Vector3 HBCLOFAJDMH; // 0xF4
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPIHJEBAEC_CTOR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPIHJEBAEC_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPIHJEBAEC_ONRECYCLE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPIHJEBAEC_CLEAR_OFFSET))(this);
		}

		::System::ValueTuple_4<::KLNKLOMDIIC, ::System::Int32, ::System::Int32, ::System::Single> LBDJFNDMMOA(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::System::ValueTuple_4<::KLNKLOMDIIC, ::System::Int32, ::System::Int32, ::System::Single>(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + PDPIHJEBAEC_LBDJFNDMMOA_OFFSET))(this, a1, a2);
		}

		::System::ValueTuple_4<::KLNKLOMDIIC, ::System::Int32, ::System::Int32, ::System::Single> LBDJFNDMMOA_1(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::ValueTuple_4<::KLNKLOMDIIC, ::System::Int32, ::System::Int32, ::System::Single>(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + PDPIHJEBAEC_LBDJFNDMMOA_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::KLNKLOMDIIC GGJJGAMDNED(::KLNKLOMDIIC a1, ::KLNKLOMDIIC a2, ::UnityEngine::Vector3 a3, ::System::Boolean a4, ::System::Single a5)
		{
			return ((::KLNKLOMDIIC(*)(::KLNKLOMDIIC, ::KLNKLOMDIIC, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + PDPIHJEBAEC_GGJJGAMDNED_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Single EBHEODMGGCE(::KLNKLOMDIIC a1, ::KLNKLOMDIIC a2)
		{
			return ((::System::Single(*)(::KLNKLOMDIIC, ::KLNKLOMDIIC))((::PBYTE)hIl2Cpp + PDPIHJEBAEC_EBHEODMGGCE_OFFSET))(a1, a2);
		}

		static ::KLNKLOMDIIC KLIBNNLCKIH(::KLNKLOMDIIC a1, ::KLNKLOMDIIC a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::KLNKLOMDIIC(*)(::KLNKLOMDIIC, ::KLNKLOMDIIC, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + PDPIHJEBAEC_KLIBNNLCKIH_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean OFFNNJDGFDI(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PDPIHJEBAEC_OFFNNJDGFDI_OFFSET))(this, a1);
		}

		::System::Boolean HKEGFBPLCDH(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PDPIHJEBAEC_HKEGFBPLCDH_OFFSET))(this, a1);
		}

		::System::Int32 CEOECDIAGEC(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PDPIHJEBAEC_CEOECDIAGEC_OFFSET))(this, a1);
		}

		::System::Int32 OHPDOPCLFAD(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PDPIHJEBAEC_OHPDOPCLFAD_OFFSET))(this, a1);
		}

		::KLNKLOMDIIC HJINJINMBNB()
		{
			return ((::KLNKLOMDIIC(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPIHJEBAEC_HJINJINMBNB_OFFSET))(this);
		}

		::KLNKLOMDIIC LLCPNBBGABJ()
		{
			return ((::KLNKLOMDIIC(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPIHJEBAEC_LLCPNBBGABJ_OFFSET))(this);
		}

	};
