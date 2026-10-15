#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPFGOGOLBI.h"
#include "unitysdk/RPG/GameCore/RtModifierBehaviorLifeBinding.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
class BMICACAAOGP;
class LNHNKDOIOAG;
class OLAPJIKMNMH;
namespace RPG::GameCore { class GameEntityList; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FKFKOFKDGLP_CNLPPGFKLKI_OFFSET UNITYSDK_OFFSET(0x157F0300)
#define FKFKOFKDGLP_CTOR_OFFSET UNITYSDK_OFFSET(0x157F0350)
#define FKFKOFKDGLP_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x157EFE40)
#define FKFKOFKDGLP_EDONENHMMCJ_OFFSET UNITYSDK_OFFSET(0x157F01D0)
#define FKFKOFKDGLP_EFKLLLLPAJH_OFFSET UNITYSDK_OFFSET(0x157EFE30)
#define FKFKOFKDGLP_IMHGGMPFCAP_OFFSET UNITYSDK_OFFSET(0x157F0020)
#define FKFKOFKDGLP_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0x157EFED0)
#define FKFKOFKDGLP_PNFPLDEENKP_OFFSET UNITYSDK_OFFSET(0x157EFF20)

inline static constexpr unsigned int FKFKOFKDGLP_TypeDefinitionIndex = 54144;

	class FKFKOFKDGLP : public ::GJPFGOGOLBI
	{
	public:
		::LNHNKDOIOAG* MJKMKDGAINA; // 0x18
		::System::Collections::Generic::List_1<::BMICACAAOGP*>* AGLOMMKDCDN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFKOFKDGLP_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::RtModifierBehaviorLifeBinding EFKLLLLPAJH()
		{
			return ((::RPG::GameCore::RtModifierBehaviorLifeBinding(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFKOFKDGLP_EFKLLLLPAJH_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFKOFKDGLP_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFKOFKDGLP_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Int32 IMHGGMPFCAP(::RPG::GameCore::GameEntityList* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + FKFKOFKDGLP_IMHGGMPFCAP_OFFSET))(this, a1);
		}

		::System::Boolean EDONENHMMCJ(::RPG::GameCore::IVec2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + FKFKOFKDGLP_EDONENHMMCJ_OFFSET))(this, a1);
		}

		::System::Void PNFPLDEENKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFKOFKDGLP_PNFPLDEENKP_OFFSET))(this);
		}

		::System::Boolean CNLPPGFKLKI(::OLAPJIKMNMH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OLAPJIKMNMH*))((::PBYTE)hIl2Cpp + FKFKOFKDGLP_CNLPPGFKLKI_OFFSET))(this, a1);
		}

	};
