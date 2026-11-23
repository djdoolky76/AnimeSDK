#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/AxisState.h"
#include "unitysdk/Cinemachine/AxisState_Recentering.h"
#include "unitysdk/Cinemachine/CinemachineComponentBase.h"
#include "unitysdk/Cinemachine/CinemachinePOV_FDA9F153F44B45D4.h"
#include "unitysdk/E7ED61E0B00DDE0C/FDBF4FD73B809E89_ED81FC0B9291B906.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/BCE1737A98084F1E.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase_TransitionParams.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AFA07AD8C31ACCA1;

#define CINEMACHINE_CINEMACHINEPOV_AAEEF94BBC598824_OFFSET UNITYSDK_OFFSET(0x2A53210)
#define CINEMACHINE_CINEMACHINEPOV_AD5BE3833CEBC624_OFFSET UNITYSDK_OFFSET(0x2A53980)
#define CINEMACHINE_CINEMACHINEPOV_B18944C68DDC2E90_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define CINEMACHINE_CINEMACHINEPOV_B2B25DF77B133E98_OFFSET UNITYSDK_OFFSET(0x2A538A0)
#define CINEMACHINE_CINEMACHINEPOV_B9096A5008098084_OFFSET UNITYSDK_OFFSET(0x1678550)
#define CINEMACHINE_CINEMACHINEPOV_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x2A538A0)
#define CINEMACHINE_CINEMACHINEPOV_E009A9DDC2BDD60B_OFFSET UNITYSDK_OFFSET(0x2A53C00)
#define CINEMACHINE_CINEMACHINEPOV_E238674919E92198_OFFSET UNITYSDK_OFFSET(0x2A54790)
#define CINEMACHINE_CINEMACHINEPOV_E728DAE663865997_OFFSET UNITYSDK_OFFSET(0x2A52ED0)
#define CINEMACHINE_CINEMACHINEPOV_E9D3F3A2E353762F_OFFSET UNITYSDK_OFFSET(0x2A52EF0)
#define CINEMACHINE_CINEMACHINEPOV_EF2C87DCE457013A_OFFSET UNITYSDK_OFFSET(0x2A53870)
#define CINEMACHINE_CINEMACHINEPOV_F8FEF8F5006D5EE3_OFFSET UNITYSDK_OFFSET(0x165D460)
#define CINEMACHINE_CINEMACHINEPOV_FE0C4BACA9717677_OFFSET UNITYSDK_OFFSET(0x2A53B80)
#define CINEMACHINE_CINEMACHINEPOV__CTOR_OFFSET UNITYSDK_OFFSET(0x2A54500)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachinePOV_TypeDefinitionIndex = 18384;

	class CinemachinePOV : public ::Cinemachine::CinemachineComponentBase
	{
	public:
		::Cinemachine::CinemachinePOV_FDA9F153F44B45D4 m_RecenterTarget; // 0x28
		::System::Byte _padding0[0x4];
		::Cinemachine::AxisState m_VerticalAxis; // 0x30
		::Cinemachine::AxisState_Recentering m_VerticalRecentering; // 0xA0
		::Cinemachine::AxisState m_HorizontalAxis; // 0xC0
		::Cinemachine::AxisState_Recentering m_HorizontalRecentering; // 0x130
		::System::Boolean m_ApplyBeforeBody; // 0x150
		::System::Byte _padding1[0x3];
		::UnityEngine::Quaternion ECF00B9953D06733; // 0x154

		::System::Void B2B25DF77B133E98()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_B2B25DF77B133E98_OFFSET))(this);
		}

		::System::Boolean AD5BE3833CEBC624(::AFA07AD8C31ACCA1* B4333AFDED03AD06, ::UnityEngine::Vector3 FF2EA59FD4C4EE89, ::System::Single EB5670302F34D4B7, ::Cinemachine::CinemachineVirtualCameraBase_TransitionParams& A8A6F695733AAF5E)
		{
			return ((::System::Boolean(*)(::PVOID, ::AFA07AD8C31ACCA1*, ::UnityEngine::Vector3, ::System::Single, ::Cinemachine::CinemachineVirtualCameraBase_TransitionParams&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_AD5BE3833CEBC624_OFFSET))(this, B4333AFDED03AD06, FF2EA59FD4C4EE89, EB5670302F34D4B7, A8A6F695733AAF5E);
		}

		::System::Boolean E238674919E92198()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_E238674919E92198_OFFSET))(this);
		}

		::System::Void E728DAE663865997(::UnityEngine::Vector3 A0C1F1E95D5F6CA9, ::UnityEngine::Quaternion FBF9C1F5AF32571D)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_E728DAE663865997_OFFSET))(this, A0C1F1E95D5F6CA9, FBF9C1F5AF32571D);
		}

		::System::Void FE0C4BACA9717677()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_FE0C4BACA9717677_OFFSET))(this);
		}

		::System::Void B18944C68DDC2E90(::BCE1737A98084F1E& E5EB06E4FD2C32F7, ::System::Single EB5670302F34D4B7)
		{
			return ((::System::Void(*)(::PVOID, ::BCE1737A98084F1E&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_B18944C68DDC2E90_OFFSET))(this, E5EB06E4FD2C32F7, EB5670302F34D4B7);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV__CTOR_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Void AAEEF94BBC598824(::BCE1737A98084F1E& BD846FD4D76A39BE, ::System::Single EB5670302F34D4B7)
		{
			return ((::System::Void(*)(::PVOID, ::BCE1737A98084F1E&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_AAEEF94BBC598824_OFFSET))(this, BD846FD4D76A39BE, EB5670302F34D4B7);
		}

		::System::Boolean B9096A5008098084()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_B9096A5008098084_OFFSET))(this);
		}

		static ::System::Single EF2C87DCE457013A(::System::Single AD1329E16AB80F43)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_EF2C87DCE457013A_OFFSET))(AD1329E16AB80F43);
		}

		::E7ED61E0B00DDE0C::FDBF4FD73B809E89_ED81FC0B9291B906 F8FEF8F5006D5EE3()
		{
			return ((::E7ED61E0B00DDE0C::FDBF4FD73B809E89_ED81FC0B9291B906(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_F8FEF8F5006D5EE3_OFFSET))(this);
		}

		::System::Void E009A9DDC2BDD60B(::UnityEngine::Quaternion E68F2ADD3D0D9163)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_E009A9DDC2BDD60B_OFFSET))(this, E68F2ADD3D0D9163);
		}

		::UnityEngine::Vector2 E9D3F3A2E353762F()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_E9D3F3A2E353762F_OFFSET))(this);
		}
	};
}
