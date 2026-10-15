#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ONPKMMDCDAN.h"
#include "unitysdk/PLHLAIJKMOD.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftRotationType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class CHGHIALKMFM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Immutable { template <typename T> class IImmutableSet_1; }

#define NKIJFPHFJCO_ABNGKKDHIDM_OFFSET UNITYSDK_OFFSET(0x1C545150)
#define NKIJFPHFJCO_ADD_ONBUFFEDLINESCHANGED_OFFSET UNITYSDK_OFFSET(0x1C545330)
#define NKIJFPHFJCO_ADD_ONISATTRIBUTESBUFFEDCHANGED_OFFSET UNITYSDK_OFFSET(0x1C545090)
#define NKIJFPHFJCO_ADD_ONTRANSFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x1C544F00)
#define NKIJFPHFJCO_BLPLAFPIJPC_OFFSET UNITYSDK_OFFSET(0x1C544D40)
#define NKIJFPHFJCO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C545610)
#define NKIJFPHFJCO_EEIHKIJPCPN_OFFSET UNITYSDK_OFFSET(0x1C544DA0)
#define NKIJFPHFJCO_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x1C544FC0)
#define NKIJFPHFJCO_GET_MOLD_OFFSET UNITYSDK_OFFSET(0x1C544D20)
#define NKIJFPHFJCO_HDLGBMGMKDF_OFFSET UNITYSDK_OFFSET(0x1C545190)
#define NKIJFPHFJCO_JFECKCDCFJP_OFFSET UNITYSDK_OFFSET(0x1C5454E0)
#define NKIJFPHFJCO_MDKDFOGMIBP_OFFSET UNITYSDK_OFFSET(0x1C545020)
#define NKIJFPHFJCO_MFLEJEAGNCH_OFFSET UNITYSDK_OFFSET(0x1C5453F0)
#define NKIJFPHFJCO_OPGBPLIBIHE_OFFSET UNITYSDK_OFFSET(0x1C544FE0)
#define NKIJFPHFJCO_REMOVE_ONBUFFEDLINESCHANGED_OFFSET UNITYSDK_OFFSET(0x1C545390)
#define NKIJFPHFJCO_REMOVE_ONISATTRIBUTESBUFFEDCHANGED_OFFSET UNITYSDK_OFFSET(0x1C5450F0)
#define NKIJFPHFJCO_REMOVE_ONTRANSFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x1C544F60)
#define NKIJFPHFJCO_SET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x1C544FD0)
#define NKIJFPHFJCO_SET_MOLD_OFFSET UNITYSDK_OFFSET(0x1C544D30)

inline static constexpr unsigned int NKIJFPHFJCO_TypeDefinitionIndex = 41813;

	class NKIJFPHFJCO : public ::System::Object
	{
	public:
		::System::Action* OnTransformChanged; // 0x10
		::CHGHIALKMFM* _Mold_k__BackingField; // 0x18
		::System::Action* OnBuffedLinesChanged; // 0x20
		::System::Action* OnIsAttributesBuffedChanged; // 0x28
		::System::Collections::Immutable::IImmutableSet_1<::ONPKMMDCDAN>* OCJPDEKJKPF; // 0x30
		::System::Boolean MIKABFCDCGK; // 0x38
		::System::Boolean _IsLocked_k__BackingField; // 0x39
		::System::Byte _padding0[0x2];
		::PLHLAIJKMOD PDJGEDNLBKJ; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIJFPHFJCO_CTOR_OFFSET))(this);
		}

		::CHGHIALKMFM* get_Mold()
		{
			return ((::CHGHIALKMFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIJFPHFJCO_GET_MOLD_OFFSET))(this);
		}

		::System::Void set_Mold(::CHGHIALKMFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHGHIALKMFM*))((::PBYTE)hIl2Cpp + NKIJFPHFJCO_SET_MOLD_OFFSET))(this, a1);
		}

		::PLHLAIJKMOD BLPLAFPIJPC()
		{
			return ((::PLHLAIJKMOD(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIJFPHFJCO_BLPLAFPIJPC_OFFSET))(this);
		}

		::System::Void EEIHKIJPCPN(::PLHLAIJKMOD a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLHLAIJKMOD))((::PBYTE)hIl2Cpp + NKIJFPHFJCO_EEIHKIJPCPN_OFFSET))(this, a1);
		}

		::System::Void add_OnTransformChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NKIJFPHFJCO_ADD_ONTRANSFORMCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnTransformChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NKIJFPHFJCO_REMOVE_ONTRANSFORMCHANGED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIJFPHFJCO_GET_ISLOCKED_OFFSET))(this);
		}

		::System::Void set_IsLocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NKIJFPHFJCO_SET_ISLOCKED_OFFSET))(this, a1);
		}

		::System::Boolean OPGBPLIBIHE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIJFPHFJCO_OPGBPLIBIHE_OFFSET))(this);
		}

		::System::Void MDKDFOGMIBP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NKIJFPHFJCO_MDKDFOGMIBP_OFFSET))(this, a1);
		}

		::System::Void add_OnIsAttributesBuffedChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NKIJFPHFJCO_ADD_ONISATTRIBUTESBUFFEDCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnIsAttributesBuffedChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NKIJFPHFJCO_REMOVE_ONISATTRIBUTESBUFFEDCHANGED_OFFSET))(this, a1);
		}

		::System::Collections::Immutable::IImmutableSet_1<::ONPKMMDCDAN>* ABNGKKDHIDM()
		{
			return ((::System::Collections::Immutable::IImmutableSet_1<::ONPKMMDCDAN>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIJFPHFJCO_ABNGKKDHIDM_OFFSET))(this);
		}

		::System::Void HDLGBMGMKDF(::System::Collections::Immutable::IImmutableSet_1<::ONPKMMDCDAN>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::ONPKMMDCDAN>*))((::PBYTE)hIl2Cpp + NKIJFPHFJCO_HDLGBMGMKDF_OFFSET))(this, a1);
		}

		::System::Void add_OnBuffedLinesChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NKIJFPHFJCO_ADD_ONBUFFEDLINESCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnBuffedLinesChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NKIJFPHFJCO_REMOVE_ONBUFFEDLINESCHANGED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* MFLEJEAGNCH()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIJFPHFJCO_MFLEJEAGNCH_OFFSET))(this);
		}

		::System::Void JFECKCDCFJP(::UnityEngine::Vector2Int a1, ::RPG::Client::MechCraft::MechCraftRotationType a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::RPG::Client::MechCraft::MechCraftRotationType))((::PBYTE)hIl2Cpp + NKIJFPHFJCO_JFECKCDCFJP_OFFSET))(this, a1, a2);
		}

	};
