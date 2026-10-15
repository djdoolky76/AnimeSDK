#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace VLB { class VolumetricLightBeam; }

#define PEKIFHNMHMJ_GLEEJFBNGNK_OFFSET UNITYSDK_OFFSET(0xC1F29F0)
#define PEKIFHNMHMJ_HHLHHHDMHJN_1_OFFSET UNITYSDK_OFFSET(0xC1F2C30)
#define PEKIFHNMHMJ_HHLHHHDMHJN_OFFSET UNITYSDK_OFFSET(0xC1F2AB0)
#define PEKIFHNMHMJ_LHNHEMLKING_OFFSET UNITYSDK_OFFSET(0xC1F2D10)
#define PEKIFHNMHMJ_LJEPKEGFGHA_OFFSET UNITYSDK_OFFSET(0xC1F29C0)

	class PEKIFHNMHMJ : public ::System::Object
	{
	public:
		// static const ::System::Object OCEKOBHGCIH; // 0x0
		static ::System::Boolean LJEPKEGFGHA()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PEKIFHNMHMJ_LJEPKEGFGHA_OFFSET))();
		}

		static ::System::Void GLEEJFBNGNK(::UnityEngine::Material* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::Boolean))((::PBYTE)hIl2Cpp + PEKIFHNMHMJ_GLEEJFBNGNK_OFFSET))(a1, a2);
		}

		static ::System::Boolean HHLHHHDMHJN(::VLB::VolumetricLightBeam* a1, ::VLB::VolumetricLightBeam* a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::VLB::VolumetricLightBeam*, ::VLB::VolumetricLightBeam*, ::System::String*))((::PBYTE)hIl2Cpp + PEKIFHNMHMJ_HHLHHHDMHJN_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean HHLHHHDMHJN_1(::VLB::VolumetricLightBeam* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::VLB::VolumetricLightBeam*, ::System::String*))((::PBYTE)hIl2Cpp + PEKIFHNMHMJ_HHLHHHDMHJN_1_OFFSET))(a1, a2);
		}

		static ::System::Void LHNHEMLKING(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + PEKIFHNMHMJ_LHNHEMLKING_OFFSET))(a1, a2);
		}

	};
