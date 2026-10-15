#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SignalTransformProcessor_SignalDrivenMode.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_BHJECKLMBHF_OFFSET UNITYSDK_OFFSET(0xE0C3000)
#define RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE0C3380)
#define RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_FCJMNCIGGOF_OFFSET UNITYSDK_OFFSET(0xE0C3190)
#define RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xE0C3360)
#define RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_GET_SHOULDPLAYCURVE_OFFSET UNITYSDK_OFFSET(0xE0C3370)
#define RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xE0C3280)
#define RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_IECIAPPANHI_OFFSET UNITYSDK_OFFSET(0xE0C3310)
#define RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_JDAGFHEPMHF_OFFSET UNITYSDK_OFFSET(0xE0C3230)
#define RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_LBFJIKCKNFA_OFFSET UNITYSDK_OFFSET(0xE0C2E00)
#define RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0xE0C32D0)
#define RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_OJBOOAFKFPD_OFFSET UNITYSDK_OFFSET(0xE0C3110)

namespace RPG::Client
{
	class SignalTransformProcessor : public ::System::Object
	{
	public:
		::RPG::Client::SignalTransformProcessor_SignalDrivenMode DrivenMode; // 0x10
		::System::Single Threshold; // 0x14
		::System::Single Speed; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* SignalCurve; // 0x20
		::System::Int32 PhaseID; // 0x28
		::System::Boolean _shouldPlayCurve; // 0x2C
		::System::Byte _padding1[0x3];
		::System::Single _progress; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_CTOR_OFFSET))(this);
		}

		::System::Single LBFJIKCKNFA(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_LBFJIKCKNFA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single BHJECKLMBHF(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_BHJECKLMBHF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single OJBOOAFKFPD(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_OJBOOAFKFPD_OFFSET))(this, a1);
		}

		::System::Void FCJMNCIGGOF(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_FCJMNCIGGOF_OFFSET))(this, a1, a2);
		}

		::System::Void JDAGFHEPMHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_JDAGFHEPMHF_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void OHMHJFANEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Void IECIAPPANHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_IECIAPPANHI_OFFSET))(this);
		}

		::System::Single get_Progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_GET_PROGRESS_OFFSET))(this);
		}

		::System::Boolean get_ShouldPlayCurve()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALTRANSFORMPROCESSOR_GET_SHOULDPLAYCURVE_OFFSET))(this);
		}

	};
}
