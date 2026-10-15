#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class ANGGDDJJBKO;
namespace RPG::GameCore { class RtBattleMode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KIFJCNNALIL_CTOR_OFFSET UNITYSDK_OFFSET(0xB41E930)
#define KIFJCNNALIL_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xB41E890)
#define KIFJCNNALIL_OHCJOIANPFG_OFFSET UNITYSDK_OFFSET(0xB41E250)

inline static constexpr unsigned int KIFJCNNALIL_TypeDefinitionIndex = 54209;

	class KIFJCNNALIL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::ANGGDDJJBKO*>* GBNDBGJLDKC; // 0x10
		::System::UInt32 LCHLDHNIILN; // 0x18
		::System::UInt32 GMLENIEKBKC; // 0x1C
		::RPG::GameCore::FixPoint CFECALPLBNP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFJCNNALIL_CTOR_OFFSET))(this);
		}

		::System::Void OHCJOIANPFG(::RPG::GameCore::RtBattleMode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtBattleMode*))((::PBYTE)hIl2Cpp + KIFJCNNALIL_OHCJOIANPFG_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFJCNNALIL_KHGIKBFDLFB_OFFSET))(this);
		}

	};
