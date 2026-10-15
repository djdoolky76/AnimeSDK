#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHGAEBPLFFK.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class FBKKFMONGAA;
class NKIJFPHFJCO;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define AGDBDNGEKFP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C50E910)
#define AGDBDNGEKFP_GET_AFFECTEDCELLS_OFFSET UNITYSDK_OFFSET(0x1C50E8D0)
#define AGDBDNGEKFP_GET_AFFECTEDPIECES_OFFSET UNITYSDK_OFFSET(0x1C50E8F0)
#define AGDBDNGEKFP_GET_BUFF_OFFSET UNITYSDK_OFFSET(0x1C50E8B0)
#define AGDBDNGEKFP_SET_AFFECTEDCELLS_OFFSET UNITYSDK_OFFSET(0x1C50E8E0)
#define AGDBDNGEKFP_SET_AFFECTEDPIECES_OFFSET UNITYSDK_OFFSET(0x1C50E900)
#define AGDBDNGEKFP_SET_BUFF_OFFSET UNITYSDK_OFFSET(0x1C50E8C0)

inline static constexpr unsigned int AGDBDNGEKFP_TypeDefinitionIndex = 41747;

	class AGDBDNGEKFP : public ::LHGAEBPLFFK
	{
	public:
		::System::Collections::Generic::HashSet_1<::NKIJFPHFJCO*>* _AffectedPieces_k__BackingField; // 0x10
		::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* _AffectedCells_k__BackingField; // 0x18
		::FBKKFMONGAA* _Buff_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDBDNGEKFP_CTOR_OFFSET))(this);
		}

		::FBKKFMONGAA* get_Buff()
		{
			return ((::FBKKFMONGAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDBDNGEKFP_GET_BUFF_OFFSET))(this);
		}

		::System::Void set_Buff(::FBKKFMONGAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBKKFMONGAA*))((::PBYTE)hIl2Cpp + AGDBDNGEKFP_SET_BUFF_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* get_AffectedCells()
		{
			return ((::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDBDNGEKFP_GET_AFFECTEDCELLS_OFFSET))(this);
		}

		::System::Void set_AffectedCells(::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + AGDBDNGEKFP_SET_AFFECTEDCELLS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::NKIJFPHFJCO*>* get_AffectedPieces()
		{
			return ((::System::Collections::Generic::HashSet_1<::NKIJFPHFJCO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDBDNGEKFP_GET_AFFECTEDPIECES_OFFSET))(this);
		}

		::System::Void set_AffectedPieces(::System::Collections::Generic::HashSet_1<::NKIJFPHFJCO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::NKIJFPHFJCO*>*))((::PBYTE)hIl2Cpp + AGDBDNGEKFP_SET_AFFECTEDPIECES_OFFSET))(this, a1);
		}

	};
