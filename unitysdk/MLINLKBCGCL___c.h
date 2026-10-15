#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChessRogueDiceSurfaceDisplayData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define MLINLKBCGCL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB9B17A0)
#define MLINLKBCGCL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB9B17E0)
#define MLINLKBCGCL___C__GETDICESURFACEDISPLAYDATALIST_B__15_0_OFFSET UNITYSDK_OFFSET(0xB9B17F0)

inline static constexpr unsigned int MLINLKBCGCL___c_TypeDefinitionIndex = 66947;

	class MLINLKBCGCL___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::ChessRogueDiceSurfaceDisplayData*>** StaticGet___9__15_0()
		{
			return (::System::Comparison_1<::RPG::Client::ChessRogueDiceSurfaceDisplayData*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0xB230);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xB238);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLINLKBCGCL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLINLKBCGCL___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetDiceSurfaceDisplayDataList_b__15_0(::RPG::Client::ChessRogueDiceSurfaceDisplayData* a1, ::RPG::Client::ChessRogueDiceSurfaceDisplayData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChessRogueDiceSurfaceDisplayData*, ::RPG::Client::ChessRogueDiceSurfaceDisplayData*))((::PBYTE)hIl2Cpp + MLINLKBCGCL___C__GETDICESURFACEDISPLAYDATALIST_B__15_0_OFFSET))(this, a1, a2);
		}

	};
