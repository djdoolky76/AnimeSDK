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

#define OLOHFCIHMNK_CJCPLADJLIB_OFFSET UNITYSDK_OFFSET(0xBF16BF0)
#define OLOHFCIHMNK_CTOR_OFFSET UNITYSDK_OFFSET(0xBF14CE0)
#define OLOHFCIHMNK_DDBNIAAOKDJ_OFFSET UNITYSDK_OFFSET(0xBF15B00)
#define OLOHFCIHMNK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF15080)
#define OLOHFCIHMNK_EPEKFGEAKIM_OFFSET UNITYSDK_OFFSET(0xBF15D60)
#define OLOHFCIHMNK_GET_CASTQUEUES_OFFSET UNITYSDK_OFFSET(0xBF17110)
#define OLOHFCIHMNK_GET_FRAMEABILITYUSECOUNT_OFFSET UNITYSDK_OFFSET(0xBF17120)
#define OLOHFCIHMNK_GET_NEXTCASTTIME_OFFSET UNITYSDK_OFFSET(0xBF17100)
#define OLOHFCIHMNK_IBKNNBBLIIJ_OFFSET UNITYSDK_OFFSET(0xBF15CB0)
#define OLOHFCIHMNK_IMHBBPODIIN_OFFSET UNITYSDK_OFFSET(0xBF16AB0)
#define OLOHFCIHMNK_JEKCJKIBJDK_OFFSET UNITYSDK_OFFSET(0xBF14F10)
#define OLOHFCIHMNK_JJKFHLNJOMM_OFFSET UNITYSDK_OFFSET(0xBF15150)
#define OLOHFCIHMNK_JNBALLGCJFF_OFFSET UNITYSDK_OFFSET(0xBF15F60)
#define OLOHFCIHMNK_KKPAFDJMEAH_OFFSET UNITYSDK_OFFSET(0xBF164C0)
#define OLOHFCIHMNK_NGFGLMCFOJK_OFFSET UNITYSDK_OFFSET(0xBF168E0)
#define OLOHFCIHMNK_OLBKOJMNGEE_OFFSET UNITYSDK_OFFSET(0xBF15970)
#define OLOHFCIHMNK_PGOCOMAKHEL_OFFSET UNITYSDK_OFFSET(0xBF16220)

inline static constexpr unsigned int OLOHFCIHMNK_TypeDefinitionIndex = 77300;

	class OLOHFCIHMNK : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _FrameAbilityUseCount_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Queue_1<::NEGJLOAEGPL*>*>* _CastQueues_k__BackingField; // 0x18
		::NJKFCOIBIOK* JDILNDANFCO; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* _NextCastTime_k__BackingField; // 0x28
		::LAECFLNNOFH* FKINCGODJEP; // 0x30
		::System::Int32 AHFGLFMJELJ; // 0x38
		::System::Boolean PPIGLCIEIIM; // 0x3C
		::System::Byte _padding0[0x3];
		::System::Int32 OCDPPDPDGME; // 0x40
		::System::Single KEENOCIHFDF; // 0x44
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
