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

#define BGDGNJBCMBE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB17A0D0)
#define BGDGNJBCMBE_CTOR_OFFSET UNITYSDK_OFFSET(0xB17A4F0)
#define BGDGNJBCMBE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB178FF0)
#define BGDGNJBCMBE_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xB17A200)
#define BGDGNJBCMBE_IECIAPPANHI_OFFSET UNITYSDK_OFFSET(0xB17A2D0)
#define BGDGNJBCMBE_JIGJDOFEJMI_OFFSET UNITYSDK_OFFSET(0xB179160)
#define BGDGNJBCMBE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB17A480)
#define BGDGNJBCMBE_OBOJEIPJBBJ_OFFSET UNITYSDK_OFFSET(0xB179D30)
#define BGDGNJBCMBE_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0xB179FF0)

inline static constexpr unsigned int BGDGNJBCMBE_TypeDefinitionIndex = 60695;

	class BGDGNJBCMBE : public ::System::Object
	{
	public:
		::KDJNAAOFMMJ* IICPBHINLJH; // 0x10
		::System::String* GECCDOFLJDF; // 0x18
		::OKKFJLFMPFK* EKNDGBINNII; // 0x20
		::EBMMGODFEEO* PDOJELJJHCO; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Double>* IOAFCOHLBIN; // 0x38
		::UnityEngine::Playables::PlayableDirector* JOPCGEFEJAM; // 0x40
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
