#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FIHEDFLGJPI;
namespace RPG::Client { class GridFightConsumableItemData; }
namespace RPG::Client { class GridFightItemFrameInfo; }

#define FIHEDFLGJPI_ABGHHBNCNLL_OFFSET UNITYSDK_OFFSET(0x19805420)
#define FIHEDFLGJPI_CCTOR_OFFSET UNITYSDK_OFFSET(0x198055C0)
#define FIHEDFLGJPI_CTOR_OFFSET UNITYSDK_OFFSET(0x19805410)

inline static constexpr unsigned int FIHEDFLGJPI_TypeDefinitionIndex = 66465;

	class FIHEDFLGJPI : public ::System::Object
	{
	public:
		static ::FIHEDFLGJPI** StaticGet_FMJPMFEDIJL()
		{
			return (::FIHEDFLGJPI**)UnitySDK::FromName("", "FIHEDFLGJPI")->GetStaticField(0x61810);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHEDFLGJPI_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIHEDFLGJPI_CCTOR_OFFSET))();
		}

		::RPG::Client::GridFightItemFrameInfo* ABGHHBNCNLL(::RPG::Client::GridFightConsumableItemData* a1)
		{
			return ((::RPG::Client::GridFightItemFrameInfo*(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*))((::PBYTE)hIl2Cpp + FIHEDFLGJPI_ABGHHBNCNLL_OFFSET))(this, a1);
		}

	};
