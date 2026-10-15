#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GpuParticleOccluder; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define HNHPHDLGHHB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15D96A20)
#define HNHPHDLGHHB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15D96A50)
#define HNHPHDLGHHB___C__CALCULATEOBBAABBINTERSECTIONS_B__16_0_OFFSET UNITYSDK_OFFSET(0x15D96A60)

	class HNHPHDLGHHB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31C90);
		}

		static ::System::Comparison_1<::RPG::Client::GpuParticleOccluder*>** StaticGet___9__16_0()
		{
			return (::System::Comparison_1<::RPG::Client::GpuParticleOccluder*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31C98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNHPHDLGHHB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNHPHDLGHHB___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _CalculateOBBAABBIntersections_b__16_0(::RPG::Client::GpuParticleOccluder* a1, ::RPG::Client::GpuParticleOccluder* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GpuParticleOccluder*, ::RPG::Client::GpuParticleOccluder*))((::PBYTE)hIl2Cpp + HNHPHDLGHHB___C__CALCULATEOBBAABBINTERSECTIONS_B__16_0_OFFSET))(this, a1, a2);
		}

	};
