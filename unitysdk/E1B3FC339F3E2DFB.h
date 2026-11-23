#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A0482A0F1C7407FE.h"
#include "unitysdk/A087362547CDC4E5_A4B331D12158DEA4.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputBinding.h"
#include "unitysdk/A5F7BD813DE60ED2.h"
#include "unitysdk/E55CADE42775981D.h"

class A087362547CDC4E5;
class F76307D61BB77EF3;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::InputSystem { class InputActionMap; }
namespace UnityEngine::InputSystem { class InputBindingComposite; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem { class InputProcessor; }

#define E1B3FC339F3E2DFB_A19B4ECEAC26AA27_OFFSET UNITYSDK_OFFSET(0x16D1B90)
#define E1B3FC339F3E2DFB_B0E5719F507AAB59_OFFSET UNITYSDK_OFFSET(0x191BCC0)
#define E1B3FC339F3E2DFB_B449B95D5AA8CC75_OFFSET UNITYSDK_OFFSET(0x1962C90)
#define E1B3FC339F3E2DFB_B93BFF137D7A06C7_OFFSET UNITYSDK_OFFSET(0x3F61910)
#define E1B3FC339F3E2DFB_BE0BA77EC765DAAF_OFFSET UNITYSDK_OFFSET(0x3F61300)
#define E1B3FC339F3E2DFB_BF54EEE892108830_OFFSET UNITYSDK_OFFSET(0x3F60D20)
#define E1B3FC339F3E2DFB_E0E68FA62348AB3C_OFFSET UNITYSDK_OFFSET(0x3F615A0)
#define E1B3FC339F3E2DFB_E7603BC8EA482050_OFFSET UNITYSDK_OFFSET(0x3F5F340)
#define E1B3FC339F3E2DFB_E8AF1E0387A100FA_OFFSET UNITYSDK_OFFSET(0x3F61590)
#define E1B3FC339F3E2DFB_ECC34D507BA5E1E4_OFFSET UNITYSDK_OFFSET(0x18E4420)

inline static constexpr unsigned int E1B3FC339F3E2DFB_TypeDefinitionIndex = 14275;

struct alignas(8) E1B3FC339F3E2DFB
{
	::System::Int32 E358FAEC8428F209; // 0x10
	::System::Int32 BBF77929B52EEFC9; // 0x14
	::System::Int32 AEFB76949CB94FDB; // 0x18
	::System::Byte _padding0[0x4];
	::Il2CppArray<::UnityEngine::InputSystem::InputActionMap*>* F3F60BE6B775CEA4; // 0x20
	::Il2CppArray<::UnityEngine::InputSystem::InputControl*>* EAC31228B301A857; // 0x28
	::A087362547CDC4E5_A4B331D12158DEA4 FD00AA448846F93A; // 0x30
	::Il2CppArray<::F76307D61BB77EF3*>* FEE63AF312DDEE93; // 0xB0
	::Il2CppArray<::UnityEngine::InputSystem::InputProcessor*>* EF090E03A240DD6B; // 0xB8
	::Il2CppArray<::UnityEngine::InputSystem::InputBindingComposite*>* B13B6207DB0BBC0E; // 0xC0
	::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> E62582CA640A895F; // 0xC8
	::System::Byte _padding1[0x58];
	::System::Boolean F017B291676D53E3; // 0x128
	::System::Byte _padding2[0x7];
	::System::Collections::Generic::List_1<::A0482A0F1C7407FE>* A21DBB2A930B40A2; // 0x130

	static ::System::Int32 BE0BA77EC765DAAF(::System::Object* FCA7E035DC455158, ::System::String* F79B4D487F303AB2, ::System::Int32& E5A2D15350031E79)
	{
		return ((::System::Int32(*)(::System::Object*, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + E1B3FC339F3E2DFB_BE0BA77EC765DAAF_OFFSET))(FCA7E035DC455158, F79B4D487F303AB2, E5A2D15350031E79);
	}

	::System::Int32 B0E5719F507AAB59()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + E1B3FC339F3E2DFB_B0E5719F507AAB59_OFFSET))(this);
	}

	static ::System::Void BF54EEE892108830(::A5F7BD813DE60ED2<::E55CADE42775981D> B652C74F012A9C5B, ::System::Object* ABFACF4B79951FBB, ::UnityEngine::InputSystem::InputActionMap* B5F28A6C86DC2293, ::UnityEngine::InputSystem::InputBinding& F14B4FF9E6D09320, ::System::String* A239694B2C78DF1D, ::System::String* FA3F49ABE335DA78)
	{
		return ((::System::Void(*)(::A5F7BD813DE60ED2<::E55CADE42775981D>, ::System::Object*, ::UnityEngine::InputSystem::InputActionMap*, ::UnityEngine::InputSystem::InputBinding&, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + E1B3FC339F3E2DFB_BF54EEE892108830_OFFSET))(B652C74F012A9C5B, ABFACF4B79951FBB, B5F28A6C86DC2293, F14B4FF9E6D09320, A239694B2C78DF1D, FA3F49ABE335DA78);
	}

	::System::Void E8AF1E0387A100FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E1B3FC339F3E2DFB_E8AF1E0387A100FA_OFFSET))(this);
	}

	::System::Void B93BFF137D7A06C7(::A087362547CDC4E5* E5EB06E4FD2C32F7, ::System::Boolean B5CFFBE484CCEC9A)
	{
		return ((::System::Void(*)(::PVOID, ::A087362547CDC4E5*, ::System::Boolean))((::PBYTE)hIl2Cpp + E1B3FC339F3E2DFB_B93BFF137D7A06C7_OFFSET))(this, E5EB06E4FD2C32F7, B5CFFBE484CCEC9A);
	}

	static ::UnityEngine::InputSystem::InputBindingComposite* E0E68FA62348AB3C(::UnityEngine::InputSystem::InputBinding& F14B4FF9E6D09320, ::UnityEngine::InputSystem::InputActionMap* B5F28A6C86DC2293)
	{
		return ((::UnityEngine::InputSystem::InputBindingComposite*(*)(::UnityEngine::InputSystem::InputBinding&, ::UnityEngine::InputSystem::InputActionMap*))((::PBYTE)hIl2Cpp + E1B3FC339F3E2DFB_E0E68FA62348AB3C_OFFSET))(F14B4FF9E6D09320, B5F28A6C86DC2293);
	}

	::System::Void E7603BC8EA482050(::UnityEngine::InputSystem::InputActionMap* B5F28A6C86DC2293)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionMap*))((::PBYTE)hIl2Cpp + E1B3FC339F3E2DFB_E7603BC8EA482050_OFFSET))(this, B5F28A6C86DC2293);
	}

	::System::Int32 A19B4ECEAC26AA27()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + E1B3FC339F3E2DFB_A19B4ECEAC26AA27_OFFSET))(this);
	}

	::System::Int32 B449B95D5AA8CC75()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + E1B3FC339F3E2DFB_B449B95D5AA8CC75_OFFSET))(this);
	}

	::System::Int32 ECC34D507BA5E1E4()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + E1B3FC339F3E2DFB_ECC34D507BA5E1E4_OFFSET))(this);
	}
};
