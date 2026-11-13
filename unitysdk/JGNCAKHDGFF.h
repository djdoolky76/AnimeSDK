#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMAAIJFIFED;
class JGNCAKHDGFF;
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightItemFrameInfo; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define JGNCAKHDGFF_ABGHHBNCNLL_OFFSET UNITYSDK_OFFSET(0x19352D10)
#define JGNCAKHDGFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x193538C0)
#define JGNCAKHDGFF_CTOR_OFFSET UNITYSDK_OFFSET(0x19352D00)
#define JGNCAKHDGFF_EDGFJNLCLPJ_OFFSET UNITYSDK_OFFSET(0x19353630)
#define JGNCAKHDGFF_HNJMJIJBINN_OFFSET UNITYSDK_OFFSET(0x19352F20)
#define JGNCAKHDGFF_KJGCKNKBJNF_OFFSET UNITYSDK_OFFSET(0x193535A0)

inline static constexpr unsigned int JGNCAKHDGFF_TypeDefinitionIndex = 66569;

	class JGNCAKHDGFF : public ::System::Object
	{
	public:
		static ::JGNCAKHDGFF** StaticGet_FMJPMFEDIJL()
		{
			return (::JGNCAKHDGFF**)UnitySDK::FromName("", "JGNCAKHDGFF")->GetStaticField(0x53410);
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::GMAAIJFIFED*>** StaticGet_DBEFEPBMBAK()
		{
			return (::System::Collections::Generic::IReadOnlyList_1<::GMAAIJFIFED*>**)UnitySDK::FromName("", "JGNCAKHDGFF")->GetStaticField(0x53418);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCAKHDGFF_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGNCAKHDGFF_CCTOR_OFFSET))();
		}

		::RPG::Client::GridFightItemFrameInfo* ABGHHBNCNLL(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::RPG::Client::GridFightItemFrameInfo*(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + JGNCAKHDGFF_ABGHHBNCNLL_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightItemFrameInfo* KJGCKNKBJNF(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::GridFightItemFrameInfo*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JGNCAKHDGFF_KJGCKNKBJNF_OFFSET))(a1, a2);
		}

		static ::RPG::Client::GridFightItemFrameInfo* HNJMJIJBINN(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::RPG::Client::GridFightItemFrameInfo*(*)(::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + JGNCAKHDGFF_HNJMJIJBINN_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightEquipItemData* EDGFJNLCLPJ(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JGNCAKHDGFF_EDGFJNLCLPJ_OFFSET))(a1, a2);
		}

	};
