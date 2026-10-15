#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDHJMNAGIIA.h"
#include "unitysdk/System/Object.h"
class EEBDFMJEMBM;
namespace RPG::Client::PixAir { class PixAirEquipItemChangeInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HNAMAEDKDJD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15D7F8B0)
#define HNAMAEDKDJD_CTOR_OFFSET UNITYSDK_OFFSET(0x15D7F990)

inline static constexpr unsigned int HNAMAEDKDJD_TypeDefinitionIndex = 79275;

	class HNAMAEDKDJD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNAMAEDKDJD_CTOR_OFFSET))(this);
		}

		static ::EEBDFMJEMBM* BPLPBPMEODA(::JDHJMNAGIIA a1, ::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipItemChangeInfo*>* a2)
		{
			return ((::EEBDFMJEMBM*(*)(::JDHJMNAGIIA, ::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipItemChangeInfo*>*))((::PBYTE)hIl2Cpp + HNAMAEDKDJD_BPLPBPMEODA_OFFSET))(a1, a2);
		}

	};
