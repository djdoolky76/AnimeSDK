#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cinemachine/CinemachineClearShot_Pair.h"

namespace System { template <typename T> class Comparison_1; }

#define CINEMACHINE_CINEMACHINECLEARSHOT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FACF000)
#define CINEMACHINE_CINEMACHINECLEARSHOT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FACF040)
#define CINEMACHINE_CINEMACHINECLEARSHOT___C__RANDOMIZE_B__47_0_OFFSET UNITYSDK_OFFSET(0x1FACF050)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineClearShot___c_TypeDefinitionIndex = 34198;

	class CinemachineClearShot___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CinemachineClearShot___c_TypeDefinitionIndex)->GetStaticField(0x2A1D0);
		}
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__47_0()
		{
			return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(CinemachineClearShot___c_TypeDefinitionIndex)->GetStaticField(0x2A1D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Randomize_b__47_0(::Cinemachine::CinemachineClearShot_Pair p1, ::Cinemachine::CinemachineClearShot_Pair p2)
		{
			return ((::System::Int32(*)(::PVOID, ::Cinemachine::CinemachineClearShot_Pair, ::Cinemachine::CinemachineClearShot_Pair))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT___C__RANDOMIZE_B__47_0_OFFSET))(this, p1, p2);
		}
	};
}
