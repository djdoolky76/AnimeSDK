#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class BCLKDMAHONE;
class GLLIPCNMDBO;
class HGJFHGEPFPP;
class LAECFLNNOFH;
class NEGJLOAEGPL;
class NJKFCOIBIOK;
namespace Entitas { class IEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define OLOHFCIHMNK_CJCPLADJLIB_OFFSET UNITYSDK_OFFSET(0xBF0F650)
#define OLOHFCIHMNK_CTOR_OFFSET UNITYSDK_OFFSET(0xBF0D740)
#define OLOHFCIHMNK_DDBNIAAOKDJ_OFFSET UNITYSDK_OFFSET(0xBF0E560)
#define OLOHFCIHMNK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF0DAE0)
#define OLOHFCIHMNK_EPEKFGEAKIM_OFFSET UNITYSDK_OFFSET(0xBF0E7C0)
#define OLOHFCIHMNK_GET_CASTQUEUES_OFFSET UNITYSDK_OFFSET(0xBF0FB70)
#define OLOHFCIHMNK_GET_FRAMEABILITYUSECOUNT_OFFSET UNITYSDK_OFFSET(0xBF0FB80)
#define OLOHFCIHMNK_GET_NEXTCASTTIME_OFFSET UNITYSDK_OFFSET(0xBF0FB60)
#define OLOHFCIHMNK_IBKNNBBLIIJ_OFFSET UNITYSDK_OFFSET(0xBF0E710)
#define OLOHFCIHMNK_IMHBBPODIIN_OFFSET UNITYSDK_OFFSET(0xBF0F510)
#define OLOHFCIHMNK_JEKCJKIBJDK_OFFSET UNITYSDK_OFFSET(0xBF0D970)
#define OLOHFCIHMNK_JJKFHLNJOMM_OFFSET UNITYSDK_OFFSET(0xBF0DBB0)
#define OLOHFCIHMNK_JNBALLGCJFF_OFFSET UNITYSDK_OFFSET(0xBF0E9C0)
#define OLOHFCIHMNK_KKPAFDJMEAH_OFFSET UNITYSDK_OFFSET(0xBF0EF20)
#define OLOHFCIHMNK_NGFGLMCFOJK_OFFSET UNITYSDK_OFFSET(0xBF0F340)
#define OLOHFCIHMNK_OLBKOJMNGEE_OFFSET UNITYSDK_OFFSET(0xBF0E3D0)
#define OLOHFCIHMNK_PGOCOMAKHEL_OFFSET UNITYSDK_OFFSET(0xBF0EC80)

inline static constexpr unsigned int OLOHFCIHMNK_TypeDefinitionIndex = 77299;

	class OLOHFCIHMNK : public ::System::Object
	{
	public:
		::NJKFCOIBIOK* JDILNDANFCO; // 0x10
		::LAECFLNNOFH* FKINCGODJEP; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _FrameAbilityUseCount_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Queue_1<::NEGJLOAEGPL*>*>* _CastQueues_k__BackingField; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* _NextCastTime_k__BackingField; // 0x30
		::System::Boolean PPIGLCIEIIM; // 0x38
		::System::Byte _padding0[0x3];
		::System::Single KEENOCIHFDF; // 0x3C
		::System::Int32 AHFGLFMJELJ; // 0x40
		::System::Int32 OCDPPDPDGME; // 0x44
		::System::Void _ctor(::LAECFLNNOFH* a1, ::NJKFCOIBIOK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LAECFLNNOFH*, ::NJKFCOIBIOK*))((::PBYTE)hIl2Cpp + OLOHFCIHMNK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOHFCIHMNK_DISPOSE_OFFSET))(this);
		}

		::System::Void JEKCJKIBJDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOHFCIHMNK_JEKCJKIBJDK_OFFSET))(this);
		}

		::System::Void JJKFHLNJOMM(::HGJFHGEPFPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGJFHGEPFPP*))((::PBYTE)hIl2Cpp + OLOHFCIHMNK_JJKFHLNJOMM_OFFSET))(this, a1);
		}

		::System::Boolean DDBNIAAOKDJ(::GLLIPCNMDBO* a1, ::HGJFHGEPFPP* a2, ::BCLKDMAHONE* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::GLLIPCNMDBO*, ::HGJFHGEPFPP*, ::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + OLOHFCIHMNK_DDBNIAAOKDJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IBKNNBBLIIJ(::GLLIPCNMDBO* a1, ::BCLKDMAHONE* a2, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::GLLIPCNMDBO*, ::BCLKDMAHONE*, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + OLOHFCIHMNK_IBKNNBBLIIJ_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PGOCOMAKHEL(::BCLKDMAHONE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + OLOHFCIHMNK_PGOCOMAKHEL_OFFSET))(this, a1);
		}

		::System::Void OLBKOJMNGEE(::BCLKDMAHONE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + OLOHFCIHMNK_OLBKOJMNGEE_OFFSET))(this, a1);
		}

		::System::Void JNBALLGCJFF(::GLLIPCNMDBO* a1, ::BCLKDMAHONE* a2, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::GLLIPCNMDBO*, ::BCLKDMAHONE*, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*, ::System::Int32))((::PBYTE)hIl2Cpp + OLOHFCIHMNK_JNBALLGCJFF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 EPEKFGEAKIM(::BCLKDMAHONE* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + OLOHFCIHMNK_EPEKFGEAKIM_OFFSET))(this, a1);
		}

		::System::Void KKPAFDJMEAH(::GLLIPCNMDBO* a1, ::BCLKDMAHONE* a2, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::GLLIPCNMDBO*, ::BCLKDMAHONE*, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*, ::System::Int32))((::PBYTE)hIl2Cpp + OLOHFCIHMNK_KKPAFDJMEAH_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void IMHBBPODIIN(::System::UInt32 a1, ::Entitas::IEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + OLOHFCIHMNK_IMHBBPODIIN_OFFSET))(this, a1, a2);
		}

		::System::Void NGFGLMCFOJK(::GLLIPCNMDBO* a1, ::System::Int32 a2, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::GLLIPCNMDBO*, ::System::Int32, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*, ::System::Int32))((::PBYTE)hIl2Cpp + OLOHFCIHMNK_NGFGLMCFOJK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CJCPLADJLIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOHFCIHMNK_CJCPLADJLIB_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* get_NextCastTime()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOHFCIHMNK_GET_NEXTCASTTIME_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Queue_1<::NEGJLOAEGPL*>*>* get_CastQueues()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Queue_1<::NEGJLOAEGPL*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOHFCIHMNK_GET_CASTQUEUES_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* get_FrameAbilityUseCount()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOHFCIHMNK_GET_FRAMEABILITYUSECOUNT_OFFSET))(this);
		}

	};
