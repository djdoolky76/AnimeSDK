#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BlindBox/Pool/PoolClosedReason.h"
#include "unitysdk/System/Object.h"
class EGILMOEBHPN;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define DBKJAOBPDFA_CTOR_OFFSET UNITYSDK_OFFSET(0xE22A940)
#define DBKJAOBPDFA_EMMPCNEIFGM_OFFSET UNITYSDK_OFFSET(0xE22AA80)

	class DBKJAOBPDFA : public ::System::Object
	{
	public:
		::Il2CppArray<::EGILMOEBHPN*>* OGHCLELFCDB; // 0x10
		::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::EGILMOEBHPN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::EGILMOEBHPN*>*))((::PBYTE)hIl2Cpp + DBKJAOBPDFA_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::BlindBox::Pool::PoolClosedReason EMMPCNEIFGM()
		{
			return ((::RPG::Client::BlindBox::Pool::PoolClosedReason(*)(::PVOID))((::PBYTE)hIl2Cpp + DBKJAOBPDFA_EMMPCNEIFGM_OFFSET))(this);
		}

	};
