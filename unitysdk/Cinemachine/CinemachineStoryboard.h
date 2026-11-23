#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineExtension.h"
#include "unitysdk/Cinemachine/CinemachineStoryboard_E03E8C6EE1228235.h"
#include "unitysdk/Cinemachine/CinemachineStoryboard_F446E19076F8FEFC.h"
#include "unitysdk/E7ED61E0B00DDE0C/FDBF4FD73B809E89_ED81FC0B9291B906.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/BCE1737A98084F1E.h"

namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineStoryboard_AA722F894A1D50FF; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture; }

#define CINEMACHINE_CINEMACHINESTORYBOARD_A51F3E16F656152E_OFFSET UNITYSDK_OFFSET(0x2A56B40)
#define CINEMACHINE_CINEMACHINESTORYBOARD_B22AE558B0196E47_OFFSET UNITYSDK_OFFSET(0x2A57980)
#define CINEMACHINE_CINEMACHINESTORYBOARD_B2E623FDDB0F1D26_OFFSET UNITYSDK_OFFSET(0x2A57360)
#define CINEMACHINE_CINEMACHINESTORYBOARD_B499618C9CE71F81_OFFSET UNITYSDK_OFFSET(0x2A55DB0)
#define CINEMACHINE_CINEMACHINESTORYBOARD_B8034D3338163EFA_OFFSET UNITYSDK_OFFSET(0x2A57250)
#define CINEMACHINE_CINEMACHINESTORYBOARD_BB41322D553FFB1A_OFFSET UNITYSDK_OFFSET(0x2A565D0)
#define CINEMACHINE_CINEMACHINESTORYBOARD_BDD274F8AB63E176_OFFSET UNITYSDK_OFFSET(0x2A55C40)
#define CINEMACHINE_CINEMACHINESTORYBOARD_E509B798973BF212_OFFSET UNITYSDK_OFFSET(0x2A566E0)
#define CINEMACHINE_CINEMACHINESTORYBOARD_FB12588B8C38E887_OFFSET UNITYSDK_OFFSET(0x2A55A70)
#define CINEMACHINE_CINEMACHINESTORYBOARD_FCEF5A55295ED2B7_OFFSET UNITYSDK_OFFSET(0x2A56330)
#define CINEMACHINE_CINEMACHINESTORYBOARD_FE7B60E47CA59550_OFFSET UNITYSDK_OFFSET(0x2A57670)
#define CINEMACHINE_CINEMACHINESTORYBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x2A57840)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineStoryboard_TypeDefinitionIndex = 18395;

	class CinemachineStoryboard : public ::Cinemachine::CinemachineExtension
	{
	public:
		static ::System::Boolean* StaticGet_BD71EB2FB72B4F24()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CinemachineStoryboard_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Boolean m_ShowImage; // 0x30
		::System::Byte _padding0[0x7];
		::UnityEngine::Texture* m_Image; // 0x38
		::Cinemachine::CinemachineStoryboard_E03E8C6EE1228235 m_Aspect; // 0x40
		::System::Single m_Alpha; // 0x44
		::UnityEngine::Vector2 m_Center; // 0x48
		::UnityEngine::Vector3 m_Rotation; // 0x50
		::UnityEngine::Vector2 m_Scale; // 0x5C
		::System::Boolean m_SyncScale; // 0x64
		::System::Boolean m_MuteCamera; // 0x65
		::System::Byte _padding1[0x2];
		::System::Single m_SplitView; // 0x68
		::Cinemachine::CinemachineStoryboard_F446E19076F8FEFC m_RenderMode; // 0x6C
		::System::Int32 m_SortingOrder; // 0x70
		::System::Single m_PlaneDistance; // 0x74
		::System::Collections::Generic::List_1<::System::Object*>* F7BEAAA5431133DD; // 0x78

		static ::System::Void BB41322D553FFB1A()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_BB41322D553FFB1A_OFFSET))();
		}

		::Cinemachine::CinemachineStoryboard_AA722F894A1D50FF* E509B798973BF212(::Cinemachine::CinemachineBrain* EFE497ABF6BF98D8, ::System::Boolean B5ED09FB177B0FDC)
		{
			return ((::Cinemachine::CinemachineStoryboard_AA722F894A1D50FF*(*)(::PVOID, ::Cinemachine::CinemachineBrain*, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_E509B798973BF212_OFFSET))(this, EFE497ABF6BF98D8, B5ED09FB177B0FDC);
		}

		::System::String* B22AE558B0196E47()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_B22AE558B0196E47_OFFSET))(this);
		}

		::System::Void B8034D3338163EFA(::Cinemachine::CinemachineVirtualCameraBase* E4C30FC54E27903D, ::E7ED61E0B00DDE0C::FDBF4FD73B809E89_ED81FC0B9291B906 B67042457177A43B, ::BCE1737A98084F1E& E5EB06E4FD2C32F7, ::System::Single EB5670302F34D4B7)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::E7ED61E0B00DDE0C::FDBF4FD73B809E89_ED81FC0B9291B906, ::BCE1737A98084F1E&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_B8034D3338163EFA_OFFSET))(this, E4C30FC54E27903D, B67042457177A43B, E5EB06E4FD2C32F7, EB5670302F34D4B7);
		}

		::System::Void B499618C9CE71F81(::Cinemachine::CinemachineStoryboard_AA722F894A1D50FF* FA38878D12F78876)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineStoryboard_AA722F894A1D50FF*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_B499618C9CE71F81_OFFSET))(this, FA38878D12F78876);
		}

		::System::Void FB12588B8C38E887(::Cinemachine::CinemachineBrain* B991C972BD954EC6)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_FB12588B8C38E887_OFFSET))(this, B991C972BD954EC6);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD__CTOR_OFFSET))(this);
		}

		::System::Void FCEF5A55295ED2B7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_FCEF5A55295ED2B7_OFFSET))(this);
		}

		::System::Void FE7B60E47CA59550()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_FE7B60E47CA59550_OFFSET))(this);
		}

		::System::Void A51F3E16F656152E(::Cinemachine::CinemachineStoryboard_AA722F894A1D50FF* FA38878D12F78876, ::System::Single B293560EBB811EA6)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineStoryboard_AA722F894A1D50FF*, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_A51F3E16F656152E_OFFSET))(this, FA38878D12F78876, B293560EBB811EA6);
		}

		static ::System::Void B2E623FDDB0F1D26(::Cinemachine::CinemachineBrain* B991C972BD954EC6)
		{
			return ((::System::Void(*)(::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_B2E623FDDB0F1D26_OFFSET))(B991C972BD954EC6);
		}

		::System::Void BDD274F8AB63E176(::System::Boolean E63D5023A548AF9C)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_BDD274F8AB63E176_OFFSET))(this, E63D5023A548AF9C);
		}
	};
}
