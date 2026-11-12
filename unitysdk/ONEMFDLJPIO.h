#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONEMFDLJPIO;
namespace RPG::Client { class GridFightConsumableItemData; }
namespace RPG::Client { class GridFightItemFrameInfo; }

#define ONEMFDLJPIO_ABGHHBNCNLL_OFFSET UNITYSDK_OFFSET(0xC84F0D0)
#define ONEMFDLJPIO_CCTOR_OFFSET UNITYSDK_OFFSET(0xC84F270)
#define ONEMFDLJPIO_CTOR_OFFSET UNITYSDK_OFFSET(0xC84F0C0)

inline static constexpr unsigned int ONEMFDLJPIO_TypeDefinitionIndex = 66462;

	class ONEMFDLJPIO : public ::System::Object
	{
	public:
		static ::ONEMFDLJPIO** StaticGet_FMJPMFEDIJL()
		{
			return (::ONEMFDLJPIO**)UnitySDK::FromName("", "ONEMFDLJPIO")->GetStaticField(0x56490);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONEMFDLJPIO_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONEMFDLJPIO_CCTOR_OFFSET))();
		}

		::RPG::Client::GridFightItemFrameInfo* ABGHHBNCNLL(::RPG::Client::GridFightConsumableItemData* a1)
		{
			return ((::RPG::Client::GridFightItemFrameInfo*(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*))((::PBYTE)hIl2Cpp + ONEMFDLJPIO_ABGHHBNCNLL_OFFSET))(this, a1);
		}

	};
