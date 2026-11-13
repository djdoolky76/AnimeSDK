#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PADIOAPBPLC.h"
class KAKADGHNMFK;
class MKINHDIFEBD;
namespace RPG::GameCore { class ChimeraDuelEntityComparerBase; }

#define MKINHDIFEBD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1B906DC0)
#define MKINHDIFEBD_COMPARE_OFFSET UNITYSDK_OFFSET(0x1B906CF0)
#define MKINHDIFEBD_CTOR_OFFSET UNITYSDK_OFFSET(0x1B906CD0)

inline static constexpr unsigned int MKINHDIFEBD_TypeDefinitionIndex = 80175;

	class MKINHDIFEBD : public ::PADIOAPBPLC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::ChimeraDuelEntityComparerBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelEntityComparerBase*))((::PBYTE)hIl2Cpp + MKINHDIFEBD_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 Compare(::KAKADGHNMFK* a1, ::KAKADGHNMFK* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::KAKADGHNMFK*, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + MKINHDIFEBD_COMPARE_OFFSET))(this, a1, a2);
		}

		static ::MKINHDIFEBD* BPLPBPMEODA(::RPG::GameCore::ChimeraDuelEntityComparerBase* a1)
		{
			return ((::MKINHDIFEBD*(*)(::RPG::GameCore::ChimeraDuelEntityComparerBase*))((::PBYTE)hIl2Cpp + MKINHDIFEBD_BPLPBPMEODA_OFFSET))(a1);
		}

	};
