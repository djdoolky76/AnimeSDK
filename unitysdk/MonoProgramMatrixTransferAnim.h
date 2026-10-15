#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MONOPROGRAMMATRIXTRANSFERANIM_BPMMEHNOOFG_OFFSET UNITYSDK_OFFSET(0xBA47ED0)
#define MONOPROGRAMMATRIXTRANSFERANIM_CTOR_OFFSET UNITYSDK_OFFSET(0xBA49090)
#define MONOPROGRAMMATRIXTRANSFERANIM_FMMKMAHFOCF_OFFSET UNITYSDK_OFFSET(0xBA486A0)
#define MONOPROGRAMMATRIXTRANSFERANIM_MFIKKBOJHOG_OFFSET UNITYSDK_OFFSET(0xBA48230)
#define MONOPROGRAMMATRIXTRANSFERANIM_ONENABLE_OFFSET UNITYSDK_OFFSET(0xBA48FF0)
#define MONOPROGRAMMATRIXTRANSFERANIM_UPDATE_OFFSET UNITYSDK_OFFSET(0xBA49040)

inline static constexpr unsigned int MonoProgramMatrixTransferAnim_TypeDefinitionIndex = 47510;

	class MonoProgramMatrixTransferAnim : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* UnitList; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* PaddingList; // 0x20
		::UnityEngine::GameObject* TargetGO; // 0x28
		::System::Single TickTime; // 0x30
		::System::Single UnitSize; // 0x34
		::System::Int32 BackdropThickness; // 0x38
		::System::Single CrossDistance; // 0x3C
		::System::Single FJNMBEPPOCO; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOPROGRAMMATRIXTRANSFERANIM_CTOR_OFFSET))(this);
		}

		::System::Void BPMMEHNOOFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOPROGRAMMATRIXTRANSFERANIM_BPMMEHNOOFG_OFFSET))(this);
		}

		::System::Void MFIKKBOJHOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOPROGRAMMATRIXTRANSFERANIM_MFIKKBOJHOG_OFFSET))(this);
		}

		::System::Void FMMKMAHFOCF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOPROGRAMMATRIXTRANSFERANIM_FMMKMAHFOCF_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOPROGRAMMATRIXTRANSFERANIM_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOPROGRAMMATRIXTRANSFERANIM_UPDATE_OFFSET))(this);
		}

	};
