#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Cinemachine { class CinemachineVirtualCameraBase; }

#define NKIHMKEFBAL_HECAPMIIOBE_OFFSET UNITYSDK_OFFSET(0xBC35840)
#define NKIHMKEFBAL_KGNOLLBFAAH_OFFSET UNITYSDK_OFFSET(0xBC355A0)

inline static constexpr unsigned int NKIHMKEFBAL_TypeDefinitionIndex = 78454;

	class NKIHMKEFBAL : public ::System::Object
	{
	public:
		static ::System::Void KGNOLLBFAAH(::Cinemachine::CinemachineVirtualCameraBase* a1)
		{
			return ((::System::Void(*)(::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + NKIHMKEFBAL_KGNOLLBFAAH_OFFSET))(a1);
		}

		static ::System::Void HECAPMIIOBE(::Cinemachine::CinemachineVirtualCameraBase* a1)
		{
			return ((::System::Void(*)(::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + NKIHMKEFBAL_HECAPMIIOBE_OFFSET))(a1);
		}

	};
