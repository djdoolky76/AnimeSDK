#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A970A434E9CC38AD/FA043A0B436D95A7.h"
#include "unitysdk/E68AA4EB51923C98/A78FBDBE963A373C.h"
#include "unitysdk/E68AA4EB51923C98/FD699FA2B6BA260A.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AB642D1382756991;

#define AAC475144E3DB952_E2C5D97566B1FCD5_OFFSET UNITYSDK_OFFSET(0x16D1B60)
#define AAC475144E3DB952_EAD971F40EF57660_OFFSET UNITYSDK_OFFSET(0x1740BA0)
#define AAC475144E3DB952_F43DC3F10C616593_OFFSET UNITYSDK_OFFSET(0x1740CE0)
#define AAC475144E3DB952__CTOR_OFFSET UNITYSDK_OFFSET(0x1740C80)

inline static constexpr unsigned int AAC475144E3DB952_TypeDefinitionIndex = 776;

class AAC475144E3DB952 : public ::System::Object
{
public:
	::System::Boolean EB8B85D1E2C4B773; // 0x10
	::System::Boolean ACD43576D3056039; // 0x11
	::System::Byte _padding0[0x2];
	::System::Int32 F75A63C6186A3A84; // 0x14
	::UnityEngine::Vector2 A2718778DA817A4C; // 0x18
	::System::Single BE9261CFC391AA9A; // 0x20
	::System::Single B7DCC88A0C37F2EF; // 0x24
	::E68AA4EB51923C98::FD699FA2B6BA260A FD71861C0D0312D2; // 0x28
	::System::Single FCC74495DCD6653E; // 0x2C
	::System::Boolean FEF36BB83B44A2D4; // 0x30
	::System::Boolean B0F7137E0FF4AA16; // 0x31
	::System::Byte _padding1[0x2];
	::System::Single F5860450C8BB754B; // 0x34
	::System::Single FD547FCAD7A5B741; // 0x38
	::E68AA4EB51923C98::A78FBDBE963A373C E197260C5F13ACD6; // 0x3C
	::UnityEngine::Vector3 EECD1CAFE6E4D97F; // 0x40
	::System::Boolean B8E154933BC1B92B; // 0x4C
	::System::Byte _padding2[0x3];
	::UnityEngine::Vector3 E36FCE485D945741; // 0x50
	::System::Boolean BF655D5873E05CE1; // 0x5C
	::System::Boolean FAD48B37332682C5; // 0x5D
	::System::Byte _padding3[0x2];
	::UnityEngine::Vector3 F203CACEDF39F3AA; // 0x60
	::System::Byte _padding4[0x4];
	::AB642D1382756991* E1CBE0B1E04A5F9C; // 0x70
	::System::Single E789D69E3970C76F; // 0x78
	::System::Boolean B88A18266D010ECC; // 0x7C
	::System::Byte _padding5[0x3];
	::System::Single BE2FC04DD98C9ED1; // 0x80
	::A970A434E9CC38AD::FA043A0B436D95A7 AF4E3FC5AE6B65A0; // 0x84
	::A970A434E9CC38AD::FA043A0B436D95A7 A2D0B756DDFFEAAC; // 0x88

	::System::Boolean F43DC3F10C616593()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AAC475144E3DB952_F43DC3F10C616593_OFFSET))(this);
	}

	::UnityEngine::Vector3 E2C5D97566B1FCD5()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AAC475144E3DB952_E2C5D97566B1FCD5_OFFSET))(this);
	}

	::System::Void EAD971F40EF57660(::System::Boolean FD8ED29B78ECF3A8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AAC475144E3DB952_EAD971F40EF57660_OFFSET))(this, FD8ED29B78ECF3A8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAC475144E3DB952__CTOR_OFFSET))(this);
	}
};
