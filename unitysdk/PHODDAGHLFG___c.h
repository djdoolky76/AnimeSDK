#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client { class RogueTournHexData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define PHODDAGHLFG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A9B9CA0)
#define PHODDAGHLFG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1A9B9CE0)
#define PHODDAGHLFG___C__TOSTRING_B__1_0_OFFSET UNITYSDK_OFFSET(0x1A9B9CF0)
#define PHODDAGHLFG___C__TOSTRING_B__1_1_OFFSET UNITYSDK_OFFSET(0x1A9B9D10)
#define PHODDAGHLFG___C__TOSTRING_B__1_2_OFFSET UNITYSDK_OFFSET(0x1A9B9D30)
#define PHODDAGHLFG___C__TOSTRING_B__1_3_OFFSET UNITYSDK_OFFSET(0x1A9B9D50)

inline static constexpr unsigned int PHODDAGHLFG___c_TypeDefinitionIndex = 69464;

	class PHODDAGHLFG___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::RogueTournHexData*, ::System::Nullable_1<::System::UInt32>>** StaticGet___9__1_2()
		{
			return (::System::Func_2<::RPG::Client::RogueTournHexData*, ::System::Nullable_1<::System::UInt32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x735E0);
		}

		static ::System::Func_2<::RPG::Client::RogueTournHexData*, ::System::Nullable_1<::System::UInt32>>** StaticGet___9__1_3()
		{
			return (::System::Func_2<::RPG::Client::RogueTournHexData*, ::System::Nullable_1<::System::UInt32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x735E8);
		}

		static ::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::Nullable_1<::System::UInt32>>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::Nullable_1<::System::UInt32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x735F0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x735F8);
		}

		static ::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::Nullable_1<::System::UInt32>>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::Nullable_1<::System::UInt32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x73600);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHODDAGHLFG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHODDAGHLFG___C_CTOR_OFFSET))(this);
		}

		::System::Nullable_1<::System::UInt32> _ToString_b__1_0(::RPG::Client::RogueFormulaData* a1)
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + PHODDAGHLFG___C__TOSTRING_B__1_0_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::UInt32> _ToString_b__1_1(::RPG::Client::RogueFormulaData* a1)
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + PHODDAGHLFG___C__TOSTRING_B__1_1_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::UInt32> _ToString_b__1_2(::RPG::Client::RogueTournHexData* a1)
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID, ::RPG::Client::RogueTournHexData*))((::PBYTE)hIl2Cpp + PHODDAGHLFG___C__TOSTRING_B__1_2_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::UInt32> _ToString_b__1_3(::RPG::Client::RogueTournHexData* a1)
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID, ::RPG::Client::RogueTournHexData*))((::PBYTE)hIl2Cpp + PHODDAGHLFG___C__TOSTRING_B__1_3_OFFSET))(this, a1);
		}

	};
