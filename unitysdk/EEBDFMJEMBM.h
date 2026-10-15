#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::PixAir { class PixAirEquipItemChangeInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EEBDFMJEMBM_CTOR_OFFSET UNITYSDK_OFFSET(0x13349A50)

inline static constexpr unsigned int EEBDFMJEMBM_TypeDefinitionIndex = 79270;

	class EEBDFMJEMBM : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipItemChangeInfo*>* MJMDFCJINFL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEBDFMJEMBM_CTOR_OFFSET))(this);
		}

	};
