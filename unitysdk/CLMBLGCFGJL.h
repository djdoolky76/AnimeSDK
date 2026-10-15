#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLMBLGCFGJL_CTOR_OFFSET UNITYSDK_OFFSET(0xD78B6B0)
#define CLMBLGCFGJL_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xD78BC80)
#define CLMBLGCFGJL_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xD78BCD0)
#define CLMBLGCFGJL_LPBJDOMPMNA_OFFSET UNITYSDK_OFFSET(0xD78B6F0)
#define CLMBLGCFGJL__GET_ISSHOW_B__5_0_OFFSET UNITYSDK_OFFSET(0xD78BEC0)
#define CLMBLGCFGJL___GETISACTIVE_B__1_0_OFFSET UNITYSDK_OFFSET(0xD78BD80)

inline static constexpr unsigned int CLMBLGCFGJL_TypeDefinitionIndex = 65490;

	class CLMBLGCFGJL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* BDJNLOEBEIJ; // 0x10
		::RPG::Client::GridFightTrait* ENFAMOIAMGL; // 0x18
		::System::Void _ctor(::Il2CppArray<::System::UInt32>* a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + CLMBLGCFGJL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean LPBJDOMPMNA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLMBLGCFGJL_LPBJDOMPMNA_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLMBLGCFGJL_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLMBLGCFGJL_GET_ISSHOW_OFFSET))(this);
		}

		::System::Boolean __GetIsActive_b__1_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLMBLGCFGJL___GETISACTIVE_B__1_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_IsShow_b__5_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLMBLGCFGJL__GET_ISSHOW_B__5_0_OFFSET))(this, a1);
		}

	};
