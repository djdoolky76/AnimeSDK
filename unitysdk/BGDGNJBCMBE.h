#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBMMGODFEEO;
class KDJNAAOFMMJ;
class OKKFJLFMPFK;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define BGDGNJBCMBE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBB01BF0)
#define BGDGNJBCMBE_CTOR_OFFSET UNITYSDK_OFFSET(0xBB02010)
#define BGDGNJBCMBE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB00B20)
#define BGDGNJBCMBE_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xBB01D20)
#define BGDGNJBCMBE_IECIAPPANHI_OFFSET UNITYSDK_OFFSET(0xBB01DF0)
#define BGDGNJBCMBE_JIGJDOFEJMI_OFFSET UNITYSDK_OFFSET(0xBB00C80)
#define BGDGNJBCMBE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBB01FA0)
#define BGDGNJBCMBE_OBOJEIPJBBJ_OFFSET UNITYSDK_OFFSET(0xBB01850)
#define BGDGNJBCMBE_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0xBB01B10)

inline static constexpr unsigned int BGDGNJBCMBE_TypeDefinitionIndex = 62072;

	class BGDGNJBCMBE : public ::System::Object
	{
	public:
		::OKKFJLFMPFK* EKNDGBINNII; // 0x10
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::String* GECCDOFLJDF; // 0x20
		::EBMMGODFEEO* PDOJELJJHCO; // 0x28
		::UnityEngine::Playables::PlayableDirector* JOPCGEFEJAM; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Double>* IOAFCOHLBIN; // 0x38
		::KDJNAAOFMMJ* IICPBHINLJH; // 0x40
		::System::Int32 FMJHGJLOGPG; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDGNJBCMBE_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDGNJBCMBE_DISPOSE_OFFSET))(this);
		}

		::System::Void JIGJDOFEJMI(::System::String* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + BGDGNJBCMBE_JIGJDOFEJMI_OFFSET))(this, a1, a2);
		}

		::System::Void BPLPBPMEODA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BGDGNJBCMBE_BPLPBPMEODA_OFFSET))(this, a1);
		}

		::System::Void OBOJEIPJBBJ(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + BGDGNJBCMBE_OBOJEIPJBBJ_OFFSET))(this, a1);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDGNJBCMBE_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void OHMHJFANEIF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BGDGNJBCMBE_OHMHJFANEIF_OFFSET))(this, a1);
		}

		::System::Void IECIAPPANHI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BGDGNJBCMBE_IECIAPPANHI_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BGDGNJBCMBE_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
