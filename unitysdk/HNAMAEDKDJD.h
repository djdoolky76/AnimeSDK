#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDHJMNAGIIA.h"
#include "unitysdk/System/Object.h"
class EEBDFMJEMBM;
namespace RPG::Client::PixAir { class PixAirEquipItemChangeInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HNAMAEDKDJD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1A362A50)
#define HNAMAEDKDJD_CTOR_OFFSET UNITYSDK_OFFSET(0x1A362B30)

inline static constexpr unsigned int HNAMAEDKDJD_TypeDefinitionIndex = 82052;

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
