#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimVCameraBlendHint.h"
#include "unitysdk/System/Object.h"
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimMonoCamera; }
namespace RPG::GameCore { class FiveDimVCameraBlendConfig; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define IDLMJDKPBGC_ADNANIOABOO_OFFSET UNITYSDK_OFFSET(0x15EDA210)
#define IDLMJDKPBGC_BIKEBDGMFCC_OFFSET UNITYSDK_OFFSET(0x15EDAB40)
#define IDLMJDKPBGC_CCTOR_OFFSET UNITYSDK_OFFSET(0x15EDAC90)
#define IDLMJDKPBGC_CTOR_OFFSET UNITYSDK_OFFSET(0x15EDA1E0)
#define IDLMJDKPBGC_DGAIEKHCCNB_OFFSET UNITYSDK_OFFSET(0x15EDA780)
#define IDLMJDKPBGC_FPKGPDAEDLD_OFFSET UNITYSDK_OFFSET(0x15EDA3F0)
#define IDLMJDKPBGC_HAOKAKJDGKL_OFFSET UNITYSDK_OFFSET(0x15EDAC20)
#define IDLMJDKPBGC_HINCOLADLIL_OFFSET UNITYSDK_OFFSET(0x15EDA360)
#define IDLMJDKPBGC_IADHKDLCEKO_OFFSET UNITYSDK_OFFSET(0x15EDA200)
#define IDLMJDKPBGC_JKEONEEPIHH_OFFSET UNITYSDK_OFFSET(0x15EDA1F0)
#define IDLMJDKPBGC_MGGOPHDIAFH_OFFSET UNITYSDK_OFFSET(0x15EDA5C0)
#define IDLMJDKPBGC_MOLBPDIMKDD_OFFSET UNITYSDK_OFFSET(0x15EDABC0)

inline static constexpr unsigned int IDLMJDKPBGC_TypeDefinitionIndex = 76866;

	class IDLMJDKPBGC : public ::System::Object
	{
	public:
		::System::Action_1<::System::Object*>* DAENOGJCGFK; // 0x10
		::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* KCIFKMOMPOL; // 0x18
		::RPG::GameCore::FiveDimVCameraBlendConfig* OFMHHIAOEHK; // 0x20
		::System::Boolean FMNEEONAMNO; // 0x28
		static ::RPG::GameCore::FiveDimVCameraBlendConfig** StaticGet_FPOCGJNJIAH()
		{
			return (::RPG::GameCore::FiveDimVCameraBlendConfig**)UnitySDK::FromName("", "IDLMJDKPBGC")->GetStaticField(0x53150);
		}

		::System::Void _ctor(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + IDLMJDKPBGC_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDLMJDKPBGC_CCTOR_OFFSET))();
		}

		::System::Boolean JKEONEEPIHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDLMJDKPBGC_JKEONEEPIHH_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* IADHKDLCEKO()
		{
			return ((::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDLMJDKPBGC_IADHKDLCEKO_OFFSET))(this);
		}

		::System::Void ADNANIOABOO(::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a1, ::RPG::GameCore::FiveDimVCameraBlendConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*, ::RPG::GameCore::FiveDimVCameraBlendConfig*))((::PBYTE)hIl2Cpp + IDLMJDKPBGC_ADNANIOABOO_OFFSET))(this, a1, a2);
		}

		::System::Void HINCOLADLIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDLMJDKPBGC_HINCOLADLIL_OFFSET))(this);
		}

		::System::Void BIKEBDGMFCC(::RPG::GameCore::FiveDimVCameraBlendConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimVCameraBlendConfig*))((::PBYTE)hIl2Cpp + IDLMJDKPBGC_BIKEBDGMFCC_OFFSET))(this, a1);
		}

		::System::Boolean MOLBPDIMKDD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDLMJDKPBGC_MOLBPDIMKDD_OFFSET))(this);
		}

		static ::System::Void FPKGPDAEDLD()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDLMJDKPBGC_FPKGPDAEDLD_OFFSET))();
		}

		static ::System::Void MGGOPHDIAFH(::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a1)
		{
			return ((::System::Void(*)(::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + IDLMJDKPBGC_MGGOPHDIAFH_OFFSET))(a1);
		}

		static ::System::Void DGAIEKHCCNB(::RPG::GameCore::FiveDimVCameraBlendConfig* a1, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::FiveDimVCameraBlendConfig*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + IDLMJDKPBGC_DGAIEKHCCNB_OFFSET))(a1, a2);
		}

		static ::System::Void HAOKAKJDGKL(::RPG::GameCore::FiveDimVCameraBlendHint a1, ::Cinemachine::CinemachineVirtualCamera* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::FiveDimVCameraBlendHint, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + IDLMJDKPBGC_HAOKAKJDGKL_OFFSET))(a1, a2);
		}

	};
