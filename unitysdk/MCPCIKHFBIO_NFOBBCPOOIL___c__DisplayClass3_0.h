#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/System/Object.h"
class DBPFECFIKOM;
class KGBHKDBKNLG;
class MCPCIKHFBIO_NFOBBCPOOIL;

#define MCPCIKHFBIO_NFOBBCPOOIL___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB88D530)
#define MCPCIKHFBIO_NFOBBCPOOIL___C__DISPLAYCLASS3_0__CREATE_B__0_OFFSET UNITYSDK_OFFSET(0xB88D540)
#define MCPCIKHFBIO_NFOBBCPOOIL___C__DISPLAYCLASS3_0__CREATE_B__1_OFFSET UNITYSDK_OFFSET(0xB88D710)

	class MCPCIKHFBIO_NFOBBCPOOIL___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::DBPFECFIKOM* model; // 0x10
		::MCPCIKHFBIO_NFOBBCPOOIL* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCPCIKHFBIO_NFOBBCPOOIL___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::KGBHKDBKNLG* _Create_b__0(::RPG::Client::MechCraft::MechCraftChipTraitType a1)
		{
			return ((::KGBHKDBKNLG*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftChipTraitType))((::PBYTE)hIl2Cpp + MCPCIKHFBIO_NFOBBCPOOIL___C__DISPLAYCLASS3_0__CREATE_B__0_OFFSET))(this, a1);
		}

		::System::Int32 _Create_b__1(::KGBHKDBKNLG* a1, ::KGBHKDBKNLG* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::KGBHKDBKNLG*, ::KGBHKDBKNLG*))((::PBYTE)hIl2Cpp + MCPCIKHFBIO_NFOBBCPOOIL___C__DISPLAYCLASS3_0__CREATE_B__1_OFFSET))(this, a1, a2);
		}

	};
