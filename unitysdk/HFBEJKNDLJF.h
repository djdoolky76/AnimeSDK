#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ONPKMMDCDAN.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class BIKFPBGFCHP;
class CCEIJBFAOAI;
class GIJLOICALKG;
class IAJGGEMFOMB;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Immutable { template <typename T> class IImmutableSet_1; }

#define HFBEJKNDLJF_CTOR_OFFSET UNITYSDK_OFFSET(0x1A212A40)
#define HFBEJKNDLJF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A2133C0)
#define HFBEJKNDLJF_GET_BUFFAREA_OFFSET UNITYSDK_OFFSET(0x1A212A20)
#define HFBEJKNDLJF_GET_GROUND_OFFSET UNITYSDK_OFFSET(0x1A212A00)
#define HFBEJKNDLJF_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1A2129E0)
#define HFBEJKNDLJF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1A212A50)
#define HFBEJKNDLJF_SET_BUFFAREA_OFFSET UNITYSDK_OFFSET(0x1A212A30)
#define HFBEJKNDLJF_SET_GROUND_OFFSET UNITYSDK_OFFSET(0x1A212A10)
#define HFBEJKNDLJF_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1A2129F0)
#define HFBEJKNDLJF__INIT_B__15_0_OFFSET UNITYSDK_OFFSET(0x1A2135E0)
#define HFBEJKNDLJF__INIT_B__15_1_OFFSET UNITYSDK_OFFSET(0x1A213600)
#define HFBEJKNDLJF__INIT_B__15_2_OFFSET UNITYSDK_OFFSET(0x1A213620)

inline static constexpr unsigned int HFBEJKNDLJF_TypeDefinitionIndex = 82235;

	class HFBEJKNDLJF : public ::System::Object
	{
	public:
		::CCEIJBFAOAI* JOKBAPFCJFM; // 0x10
		::GIJLOICALKG* _BuffArea_k__BackingField; // 0x18
		::BIKFPBGFCHP* _Ground_k__BackingField; // 0x20
		::System::Int32 _Level_k__BackingField; // 0x28
		::System::Void _ctor(::CCEIJBFAOAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCEIJBFAOAI*))((::PBYTE)hIl2Cpp + HFBEJKNDLJF_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBEJKNDLJF_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HFBEJKNDLJF_SET_LEVEL_OFFSET))(this, a1);
		}

		::BIKFPBGFCHP* get_Ground()
		{
			return ((::BIKFPBGFCHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBEJKNDLJF_GET_GROUND_OFFSET))(this);
		}

		::System::Void set_Ground(::BIKFPBGFCHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIKFPBGFCHP*))((::PBYTE)hIl2Cpp + HFBEJKNDLJF_SET_GROUND_OFFSET))(this, a1);
		}

		::GIJLOICALKG* get_BuffArea()
		{
			return ((::GIJLOICALKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBEJKNDLJF_GET_BUFFAREA_OFFSET))(this);
		}

		::System::Void set_BuffArea(::GIJLOICALKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIJLOICALKG*))((::PBYTE)hIl2Cpp + HFBEJKNDLJF_SET_BUFFAREA_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP(::System::Collections::Generic::IEnumerable_1<::IAJGGEMFOMB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::IAJGGEMFOMB*>*))((::PBYTE)hIl2Cpp + HFBEJKNDLJF_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBEJKNDLJF_DISPOSE_OFFSET))(this);
		}

		::System::Void _Init_b__15_0(::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + HFBEJKNDLJF__INIT_B__15_0_OFFSET))(this, a1);
		}

		::System::Void _Init_b__15_1(::System::Collections::Immutable::IImmutableSet_1<::ONPKMMDCDAN>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::ONPKMMDCDAN>*))((::PBYTE)hIl2Cpp + HFBEJKNDLJF__INIT_B__15_1_OFFSET))(this, a1);
		}

		::System::Void _Init_b__15_2(::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + HFBEJKNDLJF__INIT_B__15_2_OFFSET))(this, a1);
		}

	};
