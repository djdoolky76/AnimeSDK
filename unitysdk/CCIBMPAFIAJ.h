#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHCHAJIANIM;
namespace RPG::Client { class GridFightPreparationPendingAction; }

#define CCIBMPAFIAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x18FFD980)
#define CCIBMPAFIAJ_GOKNKIJGKIA_OFFSET UNITYSDK_OFFSET(0x18FFD000)

inline static constexpr unsigned int CCIBMPAFIAJ_TypeDefinitionIndex = 66707;

	class CCIBMPAFIAJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCIBMPAFIAJ_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightPreparationPendingAction* GOKNKIJGKIA(::CHCHAJIANIM* a1)
		{
			return ((::RPG::Client::GridFightPreparationPendingAction*(*)(::CHCHAJIANIM*))((::PBYTE)hIl2Cpp + CCIBMPAFIAJ_GOKNKIJGKIA_OFFSET))(a1);
		}

	};
