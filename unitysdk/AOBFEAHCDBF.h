#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GridFightDivisionLevelShowRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AOBFEAHCDBF_CTOR_OFFSET UNITYSDK_OFFSET(0x1589AC10)
#define AOBFEAHCDBF_MEFBDHPONOI_OFFSET UNITYSDK_OFFSET(0x1589A810)
#define AOBFEAHCDBF_PLLCOOEJGAF_OFFSET UNITYSDK_OFFSET(0x1589A8A0)

inline static constexpr unsigned int AOBFEAHCDBF_TypeDefinitionIndex = 64571;

	class AOBFEAHCDBF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::GridFightDivisionLevelShowRow*>*>** StaticGet_GDAGMHIHPGP()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::GridFightDivisionLevelShowRow*>*>**)UnitySDK::FromName("", "AOBFEAHCDBF")->GetStaticField(0x5E1A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOBFEAHCDBF_CTOR_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::GridFightDivisionLevelShowRow*>* MEFBDHPONOI(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GridFightDivisionLevelShowRow*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AOBFEAHCDBF_MEFBDHPONOI_OFFSET))(a1);
		}

		static ::System::Void PLLCOOEJGAF()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOBFEAHCDBF_PLLCOOEJGAF_OFFSET))();
		}

	};
