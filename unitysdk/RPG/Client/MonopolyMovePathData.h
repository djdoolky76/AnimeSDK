#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonopolyMapMoveType.h"
#include "unitysdk/System/Object.h"
class BLHGFHMEFMB;
class EIDFCGLODFB;
class KGMBGMIGHOE;
namespace RPG::Client { class MonopolyMovePathData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYMOVEPATHDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xD8A11A0)
#define RPG_CLIENT_MONOPOLYMOVEPATHDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD8AB810)
#define RPG_CLIENT_MONOPOLYMOVEPATHDATA_GET_PATHLIST_OFFSET UNITYSDK_OFFSET(0xD8ABA90)
#define RPG_CLIENT_MONOPOLYMOVEPATHDATA_SET_PATHLIST_OFFSET UNITYSDK_OFFSET(0xD8ABAA0)
#define RPG_CLIENT_MONOPOLYMOVEPATHDATA__GETMOVETYPE_OFFSET UNITYSDK_OFFSET(0xD8AB820)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyMovePathData_TypeDefinitionIndex = 66284;

	class MonopolyMovePathData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::KGMBGMIGHOE*>* _PathList_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYMOVEPATHDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MonopolyMovePathData* Create(::BLHGFHMEFMB* a1)
		{
			return ((::RPG::Client::MonopolyMovePathData*(*)(::BLHGFHMEFMB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYMOVEPATHDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::GameCore::MonopolyMapMoveType _GetMoveType(::EIDFCGLODFB* a1, ::EIDFCGLODFB* a2)
		{
			return ((::RPG::GameCore::MonopolyMapMoveType(*)(::EIDFCGLODFB*, ::EIDFCGLODFB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYMOVEPATHDATA__GETMOVETYPE_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::List_1<::KGMBGMIGHOE*>* get_PathList()
		{
			return ((::System::Collections::Generic::List_1<::KGMBGMIGHOE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYMOVEPATHDATA_GET_PATHLIST_OFFSET))(this);
		}

		::System::Void set_PathList(::System::Collections::Generic::List_1<::KGMBGMIGHOE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KGMBGMIGHOE*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYMOVEPATHDATA_SET_PATHLIST_OFFSET))(this, a1);
		}

	};
}
