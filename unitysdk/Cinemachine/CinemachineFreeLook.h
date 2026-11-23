#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCE1737A98084F1E.h"
#include "unitysdk/Cinemachine/AxisState.h"
#include "unitysdk/Cinemachine/AxisState_Recentering.h"
#include "unitysdk/Cinemachine/CinemachineOrbitalTransposer_Heading.h"
#include "unitysdk/Cinemachine/CinemachineTransposer_BE5C8EB13C96636C.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase_B2274BBBB52C08C1.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase_TransitionParams.h"
#include "unitysdk/Cinemachine/LensSettings.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"
#include "unitysdk/Cinemachine/CinemachineFreeLook_BADEA0A13F342408.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AFA07AD8C31ACCA1;
class E1006F41E839665A;
namespace Cinemachine { class CinemachineFreeLook_AC53B47E24AC3B16; }
namespace Cinemachine { class CinemachineFreeLook_BFC0539CDD7D9E4A; }
namespace Cinemachine { class CinemachineOrbitalTransposer; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_CINEMACHINEFREELOOK_A4268472B2D5AF66_OFFSET UNITYSDK_OFFSET(0x2A511A0)
#define CINEMACHINE_CINEMACHINEFREELOOK_A57B3738D409005B_OFFSET UNITYSDK_OFFSET(0x2A50430)
#define CINEMACHINE_CINEMACHINEFREELOOK_A5D81F813EBDF91A_OFFSET UNITYSDK_OFFSET(0x2A50A80)
#define CINEMACHINE_CINEMACHINEFREELOOK_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x2A4F1F0)
#define CINEMACHINE_CINEMACHINEFREELOOK_ACB298BF5EBBA6A3_OFFSET UNITYSDK_OFFSET(0x2A2FD00)
#define CINEMACHINE_CINEMACHINEFREELOOK_AD5BE3833CEBC624_OFFSET UNITYSDK_OFFSET(0x2A4F560)
#define CINEMACHINE_CINEMACHINEFREELOOK_AE19B491CACEB8CA_OFFSET UNITYSDK_OFFSET(0x2A505D0)
#define CINEMACHINE_CINEMACHINEFREELOOK_AEA307543D83F8EF_OFFSET UNITYSDK_OFFSET(0x2A4EAC0)
#define CINEMACHINE_CINEMACHINEFREELOOK_B2B25DF77B133E98_OFFSET UNITYSDK_OFFSET(0x2A51120)
#define CINEMACHINE_CINEMACHINEFREELOOK_B2C1B58B06A9E364_OFFSET UNITYSDK_OFFSET(0x2A4CF80)
#define CINEMACHINE_CINEMACHINEFREELOOK_B5C85668C1DFCA8C_OFFSET UNITYSDK_OFFSET(0x2A4FBF0)
#define CINEMACHINE_CINEMACHINEFREELOOK_B71B2C6552B0F380_OFFSET UNITYSDK_OFFSET(0x2A2FCE0)
#define CINEMACHINE_CINEMACHINEFREELOOK_B846D409C37E60D9_OFFSET UNITYSDK_OFFSET(0x2A4F120)
#define CINEMACHINE_CINEMACHINEFREELOOK_BA017F989086762A_OFFSET UNITYSDK_OFFSET(0x2A4F3F0)
#define CINEMACHINE_CINEMACHINEFREELOOK_BC5FC01AE53FF41F_OFFSET UNITYSDK_OFFSET(0x2A50410)
#define CINEMACHINE_CINEMACHINEFREELOOK_BC97F3832072C035_OFFSET UNITYSDK_OFFSET(0x17F7050)
#define CINEMACHINE_CINEMACHINEFREELOOK_BD1E72F619F6C13F_OFFSET UNITYSDK_OFFSET(0x1678550)
#define CINEMACHINE_CINEMACHINEFREELOOK_BD37954A2A747B80_OFFSET UNITYSDK_OFFSET(0x2A4DB30)
#define CINEMACHINE_CINEMACHINEFREELOOK_BE7D2F23D235544D_OFFSET UNITYSDK_OFFSET(0x2A4E200)
#define CINEMACHINE_CINEMACHINEFREELOOK_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x2A4F340)
#define CINEMACHINE_CINEMACHINEFREELOOK_BF79025FE8104B41_OFFSET UNITYSDK_OFFSET(0x2A4EAE0)
#define CINEMACHINE_CINEMACHINEFREELOOK_E00599B83FAF6B3D_OFFSET UNITYSDK_OFFSET(0x2A51E60)
#define CINEMACHINE_CINEMACHINEFREELOOK_E0473BC64B0A9B38_OFFSET UNITYSDK_OFFSET(0x2A51F20)
#define CINEMACHINE_CINEMACHINEFREELOOK_E13E11E08ECE60EC_OFFSET UNITYSDK_OFFSET(0x2A51610)
#define CINEMACHINE_CINEMACHINEFREELOOK_E25F83180723A165_OFFSET UNITYSDK_OFFSET(0x2A51E80)
#define CINEMACHINE_CINEMACHINEFREELOOK_E40E88FFF527DD81_OFFSET UNITYSDK_OFFSET(0x2A4C4C0)
#define CINEMACHINE_CINEMACHINEFREELOOK_E582EDE9C3D8207B_OFFSET UNITYSDK_OFFSET(0x2A50A10)
#define CINEMACHINE_CINEMACHINEFREELOOK_E59ACDB41F27C047_OFFSET UNITYSDK_OFFSET(0x2A4D860)
#define CINEMACHINE_CINEMACHINEFREELOOK_E728DAE663865997_OFFSET UNITYSDK_OFFSET(0x2A4D4B0)
#define CINEMACHINE_CINEMACHINEFREELOOK_EB57995F88D2D36E_OFFSET UNITYSDK_OFFSET(0x2A4EC90)
#define CINEMACHINE_CINEMACHINEFREELOOK_ED17D690C6D5853F_OFFSET UNITYSDK_OFFSET(0x2A4E1D0)
#define CINEMACHINE_CINEMACHINEFREELOOK_EDA3416D1480731C_OFFSET UNITYSDK_OFFSET(0x2A4EAC0)
#define CINEMACHINE_CINEMACHINEFREELOOK_EDACA8863D41E796_OFFSET UNITYSDK_OFFSET(0x180F000)
#define CINEMACHINE_CINEMACHINEFREELOOK_EE473AE35358F853_OFFSET UNITYSDK_OFFSET(0x2A4C210)
#define CINEMACHINE_CINEMACHINEFREELOOK_F07B35BB15E6928B_OFFSET UNITYSDK_OFFSET(0x2A51D70)
#define CINEMACHINE_CINEMACHINEFREELOOK_F3A8F1704ED6CE9C_OFFSET UNITYSDK_OFFSET(0x2A4DBA0)
#define CINEMACHINE_CINEMACHINEFREELOOK_FAAA6472CED0B243_OFFSET UNITYSDK_OFFSET(0x2A50690)
#define CINEMACHINE_CINEMACHINEFREELOOK_FE0C4BACA9717677_OFFSET UNITYSDK_OFFSET(0x2A4FA40)
#define CINEMACHINE_CINEMACHINEFREELOOK_FF8F85E216392168_OFFSET UNITYSDK_OFFSET(0x2361E40)
#define CINEMACHINE_CINEMACHINEFREELOOK__CTOR_OFFSET UNITYSDK_OFFSET(0x2A517E0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineFreeLook_TypeDefinitionIndex = 18389;

	class CinemachineFreeLook : public ::Cinemachine::CinemachineVirtualCameraBase
	{
	public:
		static ::Cinemachine::CinemachineFreeLook_AC53B47E24AC3B16** StaticGet_B7A423B5DE5F62CD()
		{
			return (::Cinemachine::CinemachineFreeLook_AC53B47E24AC3B16**)Il2CppClass::FromTypeDefinitionIndex(CinemachineFreeLook_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Cinemachine::CinemachineFreeLook_BFC0539CDD7D9E4A** StaticGet_E011B4138AB60C60()
		{
			return (::Cinemachine::CinemachineFreeLook_BFC0539CDD7D9E4A**)Il2CppClass::FromTypeDefinitionIndex(CinemachineFreeLook_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		::UnityEngine::Transform* m_LookAt; // 0xA8
		::UnityEngine::Transform* m_Follow; // 0xB0
		::System::Boolean m_CommonLens; // 0xB8
		::System::Byte _padding0[0x3];
		::Cinemachine::LensSettings m_Lens; // 0xBC
		::Cinemachine::CinemachineVirtualCameraBase_TransitionParams m_Transitions; // 0xF0
		::Cinemachine::CinemachineVirtualCameraBase_B2274BBBB52C08C1 m_LegacyBlendHint; // 0x100
		::System::Byte _padding1[0x4];
		::Cinemachine::AxisState m_YAxis; // 0x108
		::Cinemachine::AxisState_Recentering m_YAxisRecentering; // 0x178
		::Cinemachine::AxisState m_XAxis; // 0x198
		::Cinemachine::CinemachineOrbitalTransposer_Heading m_Heading; // 0x208
		::Cinemachine::AxisState_Recentering m_RecenterToTargetHeading; // 0x214
		::Cinemachine::CinemachineTransposer_BE5C8EB13C96636C m_BindingMode; // 0x234
		::System::Single m_SplineCurvature; // 0x238
		::System::Byte _padding2[0x4];
		::Il2CppArray<::System::Object*>* m_Orbits; // 0x240
		::System::Single m_LegacyHeadingBias; // 0x248
		::System::Boolean F5FE8FC91D76675E; // 0x24C
		::System::Boolean A1A69F95852E9853; // 0x24D
		::System::Byte _padding3[0x2];
		::BCE1737A98084F1E F8F80FD201522382; // 0x250
		::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>* m_Rigs; // 0x338
		::Il2CppArray<::Cinemachine::CinemachineOrbitalTransposer*>* A12C123C172BDF31; // 0x340
		::E1006F41E839665A* A313357A1DE6E1CA; // 0x348
		::E1006F41E839665A* F3777805B9AA75C1; // 0x350
		::System::Single A13C89B048870CA5; // 0x358
		::System::Single B589837E7E4E62D8; // 0x35C
		::Il2CppArray<::System::Object*>* B68AF84E19BD7D98; // 0x360
		::System::Single AECFDDF5E99D260B; // 0x368
		::System::Byte _padding4[0x4];
		::Il2CppArray<::UnityEngine::E8984F4E44AE20E5>* ECD899DD90466821; // 0x370
		::Il2CppArray<::UnityEngine::E8984F4E44AE20E5>* ACBB58A53EFFA449; // 0x378
		::Il2CppArray<::UnityEngine::E8984F4E44AE20E5>* FCA3D653002B5AEB; // 0x380

		::Cinemachine::CinemachineVirtualCamera* BD37954A2A747B80(::System::Int32 FC300ADBDFF24726)
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_BD37954A2A747B80_OFFSET))(this, FC300ADBDFF24726);
		}

		::System::Void FE0C4BACA9717677()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_FE0C4BACA9717677_OFFSET))(this);
		}

		::System::Void BC97F3832072C035(::UnityEngine::Transform* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_BC97F3832072C035_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Single FAAA6472CED0B243(::UnityEngine::Vector3 EDDACF6D0ABE6008, ::Cinemachine::CinemachineFreeLook_BADEA0A13F342408& param_1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::Cinemachine::CinemachineFreeLook_BADEA0A13F342408&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_FAAA6472CED0B243_OFFSET))(this, EDDACF6D0ABE6008, param_1);
		}

		::System::Void B2C1B58B06A9E364()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_B2C1B58B06A9E364_OFFSET))(this);
		}

		::BCE1737A98084F1E EE473AE35358F853(::UnityEngine::Vector3 FF2EA59FD4C4EE89, ::System::Single EB5670302F34D4B7)
		{
			return ((::BCE1737A98084F1E(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_EE473AE35358F853_OFFSET))(this, FF2EA59FD4C4EE89, EB5670302F34D4B7);
		}

		::System::Void B5C85668C1DFCA8C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_B5C85668C1DFCA8C_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 E59ACDB41F27C047(::System::Single BBCFEC7DB309E927)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_E59ACDB41F27C047_OFFSET))(this, BBCFEC7DB309E927);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Single A57B3738D409005B(::UnityEngine::Vector3 F3D75F2DEBD02D18)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_A57B3738D409005B_OFFSET))(this, F3D75F2DEBD02D18);
		}

		::System::Void EDA3416D1480731C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_EDA3416D1480731C_OFFSET))(this);
		}

		::System::Void B846D409C37E60D9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_B846D409C37E60D9_OFFSET))(this);
		}

		::System::Single F3A8F1704ED6CE9C(::UnityEngine::Vector3 ADA98589B2733BF9, ::UnityEngine::Vector3 BE38C169EB1E684C)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_F3A8F1704ED6CE9C_OFFSET))(this, ADA98589B2733BF9, BE38C169EB1E684C);
		}

		::System::Void E0473BC64B0A9B38(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_E0473BC64B0A9B38_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Boolean A4268472B2D5AF66()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_A4268472B2D5AF66_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Void AD5BE3833CEBC624(::AFA07AD8C31ACCA1* B4333AFDED03AD06, ::UnityEngine::Vector3 FF2EA59FD4C4EE89, ::System::Single EB5670302F34D4B7)
		{
			return ((::System::Void(*)(::PVOID, ::AFA07AD8C31ACCA1*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_AD5BE3833CEBC624_OFFSET))(this, B4333AFDED03AD06, FF2EA59FD4C4EE89, EB5670302F34D4B7);
		}

		::System::Boolean FF8F85E216392168()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_FF8F85E216392168_OFFSET))(this);
		}

		::System::Single E13E11E08ECE60EC(::Cinemachine::CinemachineOrbitalTransposer* AF1C07501FAA2365, ::System::Single EB5670302F34D4B7, ::UnityEngine::Vector3 BE38C169EB1E684C)
		{
			return ((::System::Single(*)(::PVOID, ::Cinemachine::CinemachineOrbitalTransposer*, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_E13E11E08ECE60EC_OFFSET))(this, AF1C07501FAA2365, EB5670302F34D4B7, BE38C169EB1E684C);
		}

		::System::Void BA017F989086762A(::UnityEngine::Transform* F249A74E7BFBE1A7, ::UnityEngine::Vector3 A79C61B0EE319CDE)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_BA017F989086762A_OFFSET))(this, F249A74E7BFBE1A7, A79C61B0EE319CDE);
		}

		::System::Single ED17D690C6D5853F()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_ED17D690C6D5853F_OFFSET))(this);
		}

		::System::Void A5D81F813EBDF91A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_A5D81F813EBDF91A_OFFSET))(this);
		}

		::System::Void B2B25DF77B133E98()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_B2B25DF77B133E98_OFFSET))(this);
		}

		::BCE1737A98084F1E E25F83180723A165()
		{
			return ((::BCE1737A98084F1E(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_E25F83180723A165_OFFSET))(this);
		}

		::System::Void EDACA8863D41E796(::UnityEngine::Transform* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_EDACA8863D41E796_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Collections::Generic::List_1<::Cinemachine::CinemachineVirtualCamera*>* EB57995F88D2D36E(::System::Boolean EFB609ED1936E77D)
		{
			return ((::System::Collections::Generic::List_1<::Cinemachine::CinemachineVirtualCamera*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_EB57995F88D2D36E_OFFSET))(this, EFB609ED1936E77D);
		}

		::System::Boolean BF79025FE8104B41(::AFA07AD8C31ACCA1* E4C30FC54E27903D, ::System::Boolean E8D8140A53FA162A)
		{
			return ((::System::Boolean(*)(::PVOID, ::AFA07AD8C31ACCA1*, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_BF79025FE8104B41_OFFSET))(this, E4C30FC54E27903D, E8D8140A53FA162A);
		}

		::System::Void BE7D2F23D235544D(::UnityEngine::Vector3 FF2EA59FD4C4EE89, ::System::Single EB5670302F34D4B7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_BE7D2F23D235544D_OFFSET))(this, FF2EA59FD4C4EE89, EB5670302F34D4B7);
		}

		::System::Void E728DAE663865997(::UnityEngine::Vector3 A0C1F1E95D5F6CA9, ::UnityEngine::Quaternion FBF9C1F5AF32571D)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_E728DAE663865997_OFFSET))(this, A0C1F1E95D5F6CA9, FBF9C1F5AF32571D);
		}

		::System::Void AEA307543D83F8EF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_AEA307543D83F8EF_OFFSET))(this);
		}

		::System::Boolean E00599B83FAF6B3D()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_E00599B83FAF6B3D_OFFSET))(this);
		}

		::UnityEngine::Transform* B71B2C6552B0F380()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_B71B2C6552B0F380_OFFSET))(this);
		}

		::System::Single E582EDE9C3D8207B(::System::Single AF4717A1A80FD60F, ::Cinemachine::CinemachineFreeLook_BADEA0A13F342408& param_1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::Cinemachine::CinemachineFreeLook_BADEA0A13F342408&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_E582EDE9C3D8207B_OFFSET))(this, AF4717A1A80FD60F, param_1);
		}

		::System::Boolean BD1E72F619F6C13F()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_BD1E72F619F6C13F_OFFSET))(this);
		}

		static ::Il2CppArray<::System::String*>* F07B35BB15E6928B()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_F07B35BB15E6928B_OFFSET))();
		}

		::System::Single AE19B491CACEB8CA(::System::Single AF4717A1A80FD60F, ::Cinemachine::CinemachineFreeLook_BADEA0A13F342408& param_1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::Cinemachine::CinemachineFreeLook_BADEA0A13F342408&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_AE19B491CACEB8CA_OFFSET))(this, AF4717A1A80FD60F, param_1);
		}

		::System::Void BC5FC01AE53FF41F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_BC5FC01AE53FF41F_OFFSET))(this);
		}

		::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>* E40E88FFF527DD81(::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>* BFE2F60193CF5F8A)
		{
			return ((::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>*(*)(::PVOID, ::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_E40E88FFF527DD81_OFFSET))(this, BFE2F60193CF5F8A);
		}

		::UnityEngine::Transform* ACB298BF5EBBA6A3()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_ACB298BF5EBBA6A3_OFFSET))(this);
		}
	};
}
