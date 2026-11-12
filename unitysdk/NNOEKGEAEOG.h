#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNOEKGEAEOG;
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightItemFrameInfo; }

#define NNOEKGEAEOG_ABGHHBNCNLL_OFFSET UNITYSDK_OFFSET(0xC5C38E0)
#define NNOEKGEAEOG_CCTOR_OFFSET UNITYSDK_OFFSET(0xC5C3930)
#define NNOEKGEAEOG_CTOR_OFFSET UNITYSDK_OFFSET(0xC5C38D0)

inline static constexpr unsigned int NNOEKGEAEOG_TypeDefinitionIndex = 66547;

	class NNOEKGEAEOG : public ::System::Object
	{
	public:
		::RPG::Client::GridFightItemFrameInfo* MBLBEDPLDFL; // 0x10
		static ::NNOEKGEAEOG** StaticGet_HAHAHMDEPLC()
		{
			return (::NNOEKGEAEOG**)UnitySDK::FromName("", "NNOEKGEAEOG")->GetStaticField(0x11CD0);
		}

		::System::Void _ctor(::RPG::Client::GridFightItemFrameInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightItemFrameInfo*))((::PBYTE)hIl2Cpp + NNOEKGEAEOG_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNOEKGEAEOG_CCTOR_OFFSET))();
		}

		::RPG::Client::GridFightItemFrameInfo* ABGHHBNCNLL(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::RPG::Client::GridFightItemFrameInfo*(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + NNOEKGEAEOG_ABGHHBNCNLL_OFFSET))(this, a1);
		}

	};
