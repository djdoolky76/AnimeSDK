#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GridFightDivisionConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GBLMFEAAHOK_CTOR_OFFSET UNITYSDK_OFFSET(0x15952880)
#define GBLMFEAAHOK_HHJFEDECJHE_OFFSET UNITYSDK_OFFSET(0x15952510)
#define GBLMFEAAHOK_MEFBDHPONOI_OFFSET UNITYSDK_OFFSET(0x15952480)

inline static constexpr unsigned int GBLMFEAAHOK_TypeDefinitionIndex = 64570;

	class GBLMFEAAHOK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::GridFightDivisionConfigRow*>*>** StaticGet_FNHDMKOCAIF()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::GridFightDivisionConfigRow*>*>**)UnitySDK::FromName("", "GBLMFEAAHOK")->GetStaticField(0x5F720);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBLMFEAAHOK_CTOR_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::GridFightDivisionConfigRow*>* MEFBDHPONOI(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GridFightDivisionConfigRow*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GBLMFEAAHOK_MEFBDHPONOI_OFFSET))(a1);
		}

		static ::System::Void HHJFEDECJHE()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBLMFEAAHOK_HHJFEDECJHE_OFFSET))();
		}

	};
