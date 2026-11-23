#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A12FADAEF4BBD786.h"
#include "unitysdk/A970A434E9CC38AD/AB14D4C03978CFA6.h"
#include "unitysdk/AD0DC96CD01830D7.h"
#include "unitysdk/AEE8489B91368410.h"
#include "unitysdk/E68AA4EB51923C98/BC3145134F59AEB2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/E99D0ADA759D15E2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class A375536B9B082594;
class AC1374683C82EBE8;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AFD2E3D628ADA047_F82C37C83B3A764B_OFFSET UNITYSDK_OFFSET(0x1675160)
#define AFD2E3D628ADA047__CTOR_OFFSET UNITYSDK_OFFSET(0x16754A0)

inline static constexpr unsigned int AFD2E3D628ADA047_TypeDefinitionIndex = 83;

class AFD2E3D628ADA047 : public ::A12FADAEF4BBD786
{
public:
	::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::BC3145134F59AEB2, ::A375536B9B082594*>* F2D92ECCE6EE7D64; // 0x140
	::System::Collections::Generic::List_1<::AC1374683C82EBE8*>* B2EAFE75C8741299; // 0x148
	::System::Boolean B5C6A2EE671A0263; // 0x150
	::System::Byte _padding0[0x7];
	::System::Collections::Generic::List_1<::AD0DC96CD01830D7>* F41764947A1364DA; // 0x158
	::A970A434E9CC38AD::AB14D4C03978CFA6 EFD80F4BDB4EE145; // 0x160
	::UnityEngine::E99D0ADA759D15E2 A05BDB2BCC68910E; // 0x164
	::UnityEngine::Vector3 F4BB207E23011A3C; // 0x190
	::System::Single F91269F3240F225B; // 0x19C
	::System::Boolean FCD369D2CE26F593; // 0x1A0
	::System::Byte _padding1[0x3];
	::UnityEngine::E99D0ADA759D15E2 BE7B25828876C3E1; // 0x1A4
	::System::Nullable_1<::AEE8489B91368410> A69FDF580AE26BCB; // 0x1D0
	::System::Byte _padding2[0x30];
	::System::Single BA93BDB4B522DFD2; // 0x208

	::System::Void F82C37C83B3A764B(::AFD2E3D628ADA047* BEEE7A5A60941632)
	{
		return ((::System::Void(*)(::PVOID, ::AFD2E3D628ADA047*))((::PBYTE)hIl2Cpp + AFD2E3D628ADA047_F82C37C83B3A764B_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFD2E3D628ADA047__CTOR_OFFSET))(this);
	}
};
