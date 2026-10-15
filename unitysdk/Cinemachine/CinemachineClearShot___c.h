#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cinemachine/CinemachineClearShot_Pair.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define CINEMACHINE_CINEMACHINECLEARSHOT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x166724C0)
#define CINEMACHINE_CINEMACHINECLEARSHOT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x16672500)
#define CINEMACHINE_CINEMACHINECLEARSHOT___C__RANDOMIZE_B__47_0_OFFSET UNITYSDK_OFFSET(0x16672510)

namespace Cinemachine
{
	class CinemachineClearShot___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cinemachine", "<>c")->GetStaticField(0x53270);
		}

		static ::System::Comparison_1<::System::Object*>** StaticGet___9__47_0()
		{
			return (::System::Comparison_1<::System::Object*>**)UnitySDK::FromName("Cinemachine", "<>c")->GetStaticField(0x53278);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _Randomize_b__47_0(::Cinemachine::CinemachineClearShot_Pair a1, ::Cinemachine::CinemachineClearShot_Pair a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Cinemachine::CinemachineClearShot_Pair, ::Cinemachine::CinemachineClearShot_Pair))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECLEARSHOT___C__RANDOMIZE_B__47_0_OFFSET))(this, a1, a2);
		}

	};
}
