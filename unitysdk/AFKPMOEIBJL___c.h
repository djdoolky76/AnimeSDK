#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
class EFHNDMENDHI;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define AFKPMOEIBJL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C880DB0)
#define AFKPMOEIBJL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C880DF0)
#define AFKPMOEIBJL___C___BUILDSHUFFLELIBRARY_B__21_0_OFFSET UNITYSDK_OFFSET(0x1C880ED0)
#define AFKPMOEIBJL___C___CREATEBOMBS_B__3_0_OFFSET UNITYSDK_OFFSET(0x1C880E00)

inline static constexpr unsigned int AFKPMOEIBJL___c_TypeDefinitionIndex = 42303;

	class AFKPMOEIBJL___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::EFHNDMENDHI*>** StaticGet___9__3_0()
		{
			return (::System::Comparison_1<::EFHNDMENDHI*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A710);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A718);
		}

		static ::System::Func_2<::System::ValueTuple_3<::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag>, ::System::Boolean>** StaticGet___9__21_0()
		{
			return (::System::Func_2<::System::ValueTuple_3<::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag>, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A720);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFKPMOEIBJL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKPMOEIBJL___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __CreateBombs_b__3_0(::EFHNDMENDHI* a1, ::EFHNDMENDHI* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::EFHNDMENDHI*, ::EFHNDMENDHI*))((::PBYTE)hIl2Cpp + AFKPMOEIBJL___C___CREATEBOMBS_B__3_0_OFFSET))(this, a1, a2);
		}

		::System::Boolean __BuildShuffleLibrary_b__21_0(::System::ValueTuple_3<::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_3<::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag>))((::PBYTE)hIl2Cpp + AFKPMOEIBJL___C___BUILDSHUFFLELIBRARY_B__21_0_OFFSET))(this, a1);
		}

	};
