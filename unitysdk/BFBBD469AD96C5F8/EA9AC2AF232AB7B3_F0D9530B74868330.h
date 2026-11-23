#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace CriWare::CriMana { class MovieInfo; }
namespace System { class Object; }
namespace UnityEngine { class Shader; }

#define BFBBD469AD96C5F8_EA9AC2AF232AB7B3_F0D9530B74868330_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define BFBBD469AD96C5F8_EA9AC2AF232AB7B3_F0D9530B74868330__CTOR_OFFSET UNITYSDK_OFFSET(0x2ACB1F0)

namespace BFBBD469AD96C5F8
{
	inline static constexpr unsigned int EA9AC2AF232AB7B3_F0D9530B74868330_TypeDefinitionIndex = 19233;

	class EA9AC2AF232AB7B3_F0D9530B74868330 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BFBBD469AD96C5F8_EA9AC2AF232AB7B3_F0D9530B74868330__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::UnityEngine::Shader* Invoke(::CriWare::CriMana::MovieInfo* AB244CB2ACBFAAC7, ::System::Boolean FB2F4E3045E74862)
		{
			return ((::UnityEngine::Shader*(*)(::PVOID, ::CriWare::CriMana::MovieInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + BFBBD469AD96C5F8_EA9AC2AF232AB7B3_F0D9530B74868330_INVOKE_OFFSET))(this, AB244CB2ACBFAAC7, FB2F4E3045E74862);
		}
	};
}
