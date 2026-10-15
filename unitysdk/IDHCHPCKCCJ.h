#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLFIGBPHLHI;
namespace UnityEngine { class Transform; }

#define IDHCHPCKCCJ_AFLMHCIOPBE_OFFSET UNITYSDK_OFFSET(0x15EC7970)
#define IDHCHPCKCCJ_EAFGOEBBJJO_1_OFFSET UNITYSDK_OFFSET(0x15EC7AB0)
#define IDHCHPCKCCJ_EDOAOGNPJDO_OFFSET UNITYSDK_OFFSET(0x15EC7A20)

inline static constexpr unsigned int IDHCHPCKCCJ_TypeDefinitionIndex = 73538;

	class IDHCHPCKCCJ : public ::System::Object
	{
	public:
		static ::System::Void AFLMHCIOPBE(::UnityEngine::Transform* a1, ::CLFIGBPHLHI* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::CLFIGBPHLHI*))((::PBYTE)hIl2Cpp + IDHCHPCKCCJ_AFLMHCIOPBE_OFFSET))(a1, a2);
		}

		static ::System::Void EDOAOGNPJDO(::CLFIGBPHLHI* a1)
		{
			return ((::System::Void(*)(::CLFIGBPHLHI*))((::PBYTE)hIl2Cpp + IDHCHPCKCCJ_EDOAOGNPJDO_OFFSET))(a1);
		}

		static ::System::Void EAFGOEBBJJO_1(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + IDHCHPCKCCJ_EAFGOEBBJJO_1_OFFSET))(a1);
		}

	};
