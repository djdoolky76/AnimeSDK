#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KFHGFEFAOHN_CTOR_OFFSET UNITYSDK_OFFSET(0xB3A37A0)
#define KFHGFEFAOHN_GET_POSINDEXS_OFFSET UNITYSDK_OFFSET(0xB3A3840)
#define KFHGFEFAOHN_SET_POSINDEXS_OFFSET UNITYSDK_OFFSET(0xB3A3850)

inline static constexpr unsigned int KFHGFEFAOHN_TypeDefinitionIndex = 65005;

	class KFHGFEFAOHN : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _PosIndexs_k__BackingField; // 0x28
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + KFHGFEFAOHN_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_PosIndexs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFHGFEFAOHN_GET_POSINDEXS_OFFSET))(this);
		}

		::System::Void set_PosIndexs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + KFHGFEFAOHN_SET_POSINDEXS_OFFSET))(this, a1);
		}

	};
