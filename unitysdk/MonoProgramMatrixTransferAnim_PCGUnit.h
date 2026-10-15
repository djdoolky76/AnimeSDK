#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoProgramMatrixTransferAnim_PCGAction_ActionType.h"
#include "unitysdk/MonoProgramMatrixTransferAnim_PCGUnit_StartPosTypeDrp.h"
#include "unitysdk/MonoProgramMatrixTransferAnim_PCGUnit_StartPosTypeFace.h"
#include "unitysdk/MonoProgramMatrixTransferAnim_PCGUnit_StartPosTypeLR.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MONOPROGRAMMATRIXTRANSFERANIM_PCGUNIT_AAGLONKAAMA_OFFSET UNITYSDK_OFFSET(0xBA490B0)
#define MONOPROGRAMMATRIXTRANSFERANIM_PCGUNIT_AJEDEILKJBM_OFFSET UNITYSDK_OFFSET(0xBA483B0)
#define MONOPROGRAMMATRIXTRANSFERANIM_PCGUNIT_CCTOR_OFFSET UNITYSDK_OFFSET(0xBA49350)
#define MONOPROGRAMMATRIXTRANSFERANIM_PCGUNIT_CTOR_OFFSET UNITYSDK_OFFSET(0xBA49340)
#define MONOPROGRAMMATRIXTRANSFERANIM_PCGUNIT_ECELBKEKNAM_OFFSET UNITYSDK_OFFSET(0xBA484F0)
#define MONOPROGRAMMATRIXTRANSFERANIM_PCGUNIT_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xBA480B0)
#define MONOPROGRAMMATRIXTRANSFERANIM_PCGUNIT_MEIFDMDGNKE_OFFSET UNITYSDK_OFFSET(0xBA49100)
#define MONOPROGRAMMATRIXTRANSFERANIM_PCGUNIT_NNDEACNLIEG_OFFSET UNITYSDK_OFFSET(0xBA48CE0)

inline static constexpr unsigned int MonoProgramMatrixTransferAnim_PCGUnit_TypeDefinitionIndex = 47513;

	class MonoProgramMatrixTransferAnim_PCGUnit : public ::System::Object
	{
	public:
		::MonoProgramMatrixTransferAnim_PCGUnit_StartPosTypeLR StartPosLR; // 0x10
		::MonoProgramMatrixTransferAnim_PCGUnit_StartPosTypeFace StartPosFace; // 0x14
		::MonoProgramMatrixTransferAnim_PCGUnit_StartPosTypeDrp StartPosDrop; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* Actions; // 0x20
		::MonoProgramMatrixTransferAnim_PCGAction_ActionType _LastAction; // 0x28
		::System::Int32 _LastTickDuringAction; // 0x2C
		::System::Int32 _SelfTickID; // 0x30
		::System::Int32 _SelfActionID; // 0x34
		::UnityEngine::Vector4 _LastPos; // 0x38
		::UnityEngine::Vector4 _CurrentPos; // 0x48
		::UnityEngine::GameObject* TargetGO; // 0x58
		static ::Il2CppArray<::UnityEngine::Vector4>** StaticGet_PosLUT()
		{
			return (::Il2CppArray<::UnityEngine::Vector4>**)UnitySDK::FromName("", "PCGUnit")->GetStaticField(0x19630);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOPROGRAMMATRIXTRANSFERANIM_PCGUNIT_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONOPROGRAMMATRIXTRANSFERANIM_PCGUNIT_CCTOR_OFFSET))();
		}

		::System::Void NNDEACNLIEG(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MONOPROGRAMMATRIXTRANSFERANIM_PCGUNIT_NNDEACNLIEG_OFFSET))(this, a1);
		}

		::System::Int32 AAGLONKAAMA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOPROGRAMMATRIXTRANSFERANIM_PCGUNIT_AAGLONKAAMA_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOPROGRAMMATRIXTRANSFERANIM_PCGUNIT_KHGIKBFDLFB_OFFSET))(this);
		}

		::UnityEngine::Vector4 MEIFDMDGNKE(::System::Single a1, ::UnityEngine::Vector4 a2, ::MonoProgramMatrixTransferAnim_PCGAction_ActionType a3)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::UnityEngine::Vector4, ::MonoProgramMatrixTransferAnim_PCGAction_ActionType))((::PBYTE)hIl2Cpp + MONOPROGRAMMATRIXTRANSFERANIM_PCGUNIT_MEIFDMDGNKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AJEDEILKJBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOPROGRAMMATRIXTRANSFERANIM_PCGUNIT_AJEDEILKJBM_OFFSET))(this);
		}

		::System::Void ECELBKEKNAM(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MONOPROGRAMMATRIXTRANSFERANIM_PCGUNIT_ECELBKEKNAM_OFFSET))(this, a1, a2, a3, a4);
		}

	};
