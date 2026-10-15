#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenGameGradeType.h"
#include "unitysdk/RPG/GameCore/HipplenMiniGameType.h"
#include "unitysdk/System/Object.h"
class DNKAAIFEKNP_JJEMALOPEDJ;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenGameInstance; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define ELMBLCNMADI_CTOR_OFFSET UNITYSDK_OFFSET(0x15528140)
#define ELMBLCNMADI_DLGFMPNEHGO_OFFSET UNITYSDK_OFFSET(0x15528500)
#define ELMBLCNMADI_GJEIDKMCGDO_OFFSET UNITYSDK_OFFSET(0x155286B0)
#define ELMBLCNMADI_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x15528420)
#define ELMBLCNMADI_HDBKOPOBFLG_OFFSET UNITYSDK_OFFSET(0x15528C80)
#define ELMBLCNMADI_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15528470)
#define ELMBLCNMADI_KBPINNLBCBA_OFFSET UNITYSDK_OFFSET(0x155285A0)
#define ELMBLCNMADI_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x15528550)

inline static constexpr unsigned int ELMBLCNMADI_TypeDefinitionIndex = 75474;

	class ELMBLCNMADI : public ::System::Object
	{
	public:
		::DNKAAIFEKNP_JJEMALOPEDJ* LPMGGBGJJCE; // 0x10
		::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* MFFELPGKEMH; // 0x18
		::System::UInt32 HEKMDEJINNJ; // 0x20
		::System::UInt32 ENBPBGBKCHG; // 0x24
		::System::UInt32 DCJIHBBCKBF; // 0x28
		::System::UInt32 IKGIHJHAKLD; // 0x2C
		::System::Single NPINECOCALC; // 0x30
		::System::Void _ctor(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*))((::PBYTE)hIl2Cpp + ELMBLCNMADI_CTOR_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMBLCNMADI_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ELMBLCNMADI_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMBLCNMADI_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void KBPINNLBCBA(::System::Boolean a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + ELMBLCNMADI_KBPINNLBCBA_OFFSET))(this, a1, a2);
		}

		::System::Void HDBKOPOBFLG(::System::Boolean a1, ::RPG::GameCore::HipplenMiniGameType a2, ::RPG::GameCore::HipplenGameGradeType a3, ::System::Boolean a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::HipplenMiniGameType, ::RPG::GameCore::HipplenGameGradeType, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + ELMBLCNMADI_HDBKOPOBFLG_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::DNKAAIFEKNP_JJEMALOPEDJ* GJEIDKMCGDO()
		{
			return ((::DNKAAIFEKNP_JJEMALOPEDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMBLCNMADI_GJEIDKMCGDO_OFFSET))(this);
		}

		::System::Boolean DLGFMPNEHGO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMBLCNMADI_DLGFMPNEHGO_OFFSET))(this);
		}

	};
