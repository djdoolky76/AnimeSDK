#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKCDIEEKMBP;
class JNNNBNFMIPO;
namespace UnityEngine { class Transform; }

#define JNNNBNFMIPO_ABMOFABKKAF_OFFSET UNITYSDK_OFFSET(0xB288840)
#define JNNNBNFMIPO_BILLILENDLH_OFFSET UNITYSDK_OFFSET(0xB288860)
#define JNNNBNFMIPO_CTOR_OFFSET UNITYSDK_OFFSET(0xB288BC0)
#define JNNNBNFMIPO_FFKOJDLGNDK_OFFSET UNITYSDK_OFFSET(0xB288850)
#define JNNNBNFMIPO_GET_ISEND_OFFSET UNITYSDK_OFFSET(0xB288820)
#define JNNNBNFMIPO_GET_ISMOVESTARTED_OFFSET UNITYSDK_OFFSET(0xB288800)
#define JNNNBNFMIPO_GET_NORMALIZEDSPEED_OFFSET UNITYSDK_OFFSET(0xB2887E0)
#define JNNNBNFMIPO_LKBBHPLKIDI_OFFSET UNITYSDK_OFFSET(0xB288AF0)
#define JNNNBNFMIPO_LPFBANCOMPE_OFFSET UNITYSDK_OFFSET(0xB288900)
#define JNNNBNFMIPO_NHMNPADILHH_OFFSET UNITYSDK_OFFSET(0xB2888B0)
#define JNNNBNFMIPO_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB288B30)
#define JNNNBNFMIPO_SET_ISEND_OFFSET UNITYSDK_OFFSET(0xB288830)
#define JNNNBNFMIPO_SET_ISMOVESTARTED_OFFSET UNITYSDK_OFFSET(0xB288810)
#define JNNNBNFMIPO_SET_NORMALIZEDSPEED_OFFSET UNITYSDK_OFFSET(0xB2887F0)

inline static constexpr unsigned int JNNNBNFMIPO_TypeDefinitionIndex = 57055;

	class JNNNBNFMIPO : public ::System::Object
	{
	public:
		::UnityEngine::Transform* HAEDDCDNPNB; // 0x10
		::DKCDIEEKMBP* MMNEINMMDND; // 0x18
		::System::Single PGNBMBBFPMB; // 0x20
		::System::Single LGCMBBBDLCA; // 0x24
		::System::Single AKLKCNFCKGK; // 0x28
		::System::Single NAOGOGOFDKH; // 0x2C
		::System::Single _NormalizedSpeed_k__BackingField; // 0x30
		::System::Single PFNKEBHPLBH; // 0x34
		::System::Single APHAMLGICNL; // 0x38
		::System::Single PGFBFDJIDLM; // 0x3C
		::System::Boolean _IsEnd_k__BackingField; // 0x40
		::System::Boolean _IsMoveStarted_k__BackingField; // 0x41
		::System::Boolean AFFJFFIDKAH; // 0x42
		// static const ::System::Object JOKEGBCPOFA; // 0x0
		// static const ::System::Object PMMKCIIOJGB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNNNBNFMIPO_CTOR_OFFSET))(this);
		}

		::System::Single get_NormalizedSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JNNNBNFMIPO_GET_NORMALIZEDSPEED_OFFSET))(this);
		}

		::System::Void set_NormalizedSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JNNNBNFMIPO_SET_NORMALIZEDSPEED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMoveStarted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNNNBNFMIPO_GET_ISMOVESTARTED_OFFSET))(this);
		}

		::System::Void set_IsMoveStarted(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JNNNBNFMIPO_SET_ISMOVESTARTED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNNNBNFMIPO_GET_ISEND_OFFSET))(this);
		}

		::System::Void set_IsEnd(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JNNNBNFMIPO_SET_ISEND_OFFSET))(this, a1);
		}

		::System::Boolean ABMOFABKKAF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNNNBNFMIPO_ABMOFABKKAF_OFFSET))(this);
		}

		::System::Boolean FFKOJDLGNDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNNNBNFMIPO_FFKOJDLGNDK_OFFSET))(this);
		}

		::System::Single BILLILENDLH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JNNNBNFMIPO_BILLILENDLH_OFFSET))(this);
		}

		::System::Single NHMNPADILHH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JNNNBNFMIPO_NHMNPADILHH_OFFSET))(this);
		}

		::System::Void LPFBANCOMPE(::UnityEngine::Transform* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + JNNNBNFMIPO_LPFBANCOMPE_OFFSET))(this, a1, a2);
		}

		::System::Void LKBBHPLKIDI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNNNBNFMIPO_LKBBHPLKIDI_OFFSET))(this);
		}

		::JNNNBNFMIPO* PJPFIHFAHGO()
		{
			return ((::JNNNBNFMIPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNNNBNFMIPO_PJPFIHFAHGO_OFFSET))(this);
		}

	};
