#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Monster/MatrixKeyItem.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONSTER_SYMMETRYMATRIXLIST_CANAIOBANOD_OFFSET UNITYSDK_OFFSET(0x1469F200)
#define MOLEMOLE_MONSTER_SYMMETRYMATRIXLIST_FHDJDIIPGGP_OFFSET UNITYSDK_OFFSET(0x1469EAF0)
#define MOLEMOLE_MONSTER_SYMMETRYMATRIXLIST_KPBJFPLFGOE_OFFSET UNITYSDK_OFFSET(0x1469F170)
#define MOLEMOLE_MONSTER_SYMMETRYMATRIXLIST_MGMFKIOLMCK_OFFSET UNITYSDK_OFFSET(0x1469EFB0)
#define MOLEMOLE_MONSTER_SYMMETRYMATRIXLIST_NHEHPEBMEIG_OFFSET UNITYSDK_OFFSET(0x1469F110)
#define MOLEMOLE_MONSTER_SYMMETRYMATRIXLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1469E820)

namespace MoleMole::Monster
{
	inline static constexpr unsigned int SymmetryMatrixList_TypeDefinitionIndex = 74611;

	class SymmetryMatrixList : public ::System::Object
	{
	public:
		// static const ::System::Int32 MaxKeyCount = 0x20; // 0x0
		// static const ::System::Int32 MaxValueCount = 0x210; // 0x0
		::System::Collections::Generic::List_1<::MoleMole::Monster::MatrixKeyItem>* MartixKeys; // 0x10
		::Il2CppArray<::System::Boolean>* MatrixValues; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTER_SYMMETRYMATRIXLIST__CTOR_OFFSET))(this);
		}

		::System::String* MGMFKIOLMCK(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTER_SYMMETRYMATRIXLIST_MGMFKIOLMCK_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Void NHEHPEBMEIG(::System::Int32& MGHAAHCCHBP, ::System::Int32& LELAKALBNBK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTER_SYMMETRYMATRIXLIST_NHEHPEBMEIG_OFFSET))(this, MGHAAHCCHBP, LELAKALBNBK);
		}

		::System::Void KPBJFPLFGOE(::System::Int32 MGHAAHCCHBP, ::System::Int32 LELAKALBNBK, ::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTER_SYMMETRYMATRIXLIST_KPBJFPLFGOE_OFFSET))(this, MGHAAHCCHBP, LELAKALBNBK, EGEGIMGMJHN);
		}

		::System::Int32 CANAIOBANOD(::System::Int32 MGHAAHCCHBP, ::System::Int32 LELAKALBNBK)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTER_SYMMETRYMATRIXLIST_CANAIOBANOD_OFFSET))(this, MGHAAHCCHBP, LELAKALBNBK);
		}

		::System::Boolean FHDJDIIPGGP(::System::Int32 MGHAAHCCHBP, ::System::Int32 LELAKALBNBK)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTER_SYMMETRYMATRIXLIST_FHDJDIIPGGP_OFFSET))(this, MGHAAHCCHBP, LELAKALBNBK);
		}
	};
}
