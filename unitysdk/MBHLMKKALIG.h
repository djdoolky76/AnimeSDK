#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDPFOOJIAIJ;
namespace RPG::Client { class GridFightTrait; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MBHLMKKALIG_CTOR_OFFSET UNITYSDK_OFFSET(0xB85AF50)
#define MBHLMKKALIG_GDGIANNMOKP_OFFSET UNITYSDK_OFFSET(0xB85B5D0)
#define MBHLMKKALIG_JODCDEFKKOM_OFFSET UNITYSDK_OFFSET(0xB85AF60)

	class MBHLMKKALIG : public ::System::Object
	{
	public:
		::NDPFOOJIAIJ* BABBJILOOAL; // 0x10
		::System::UInt32 FKFJBEKKKNI; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::NDPFOOJIAIJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NDPFOOJIAIJ*))((::PBYTE)hIl2Cpp + MBHLMKKALIG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* JODCDEFKKOM()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBHLMKKALIG_JODCDEFKKOM_OFFSET))(this);
		}

		::RPG::Client::GridFightTrait* GDGIANNMOKP(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MBHLMKKALIG_GDGIANNMOKP_OFFSET))(this, a1);
		}

	};
