#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/Poser.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_GENERICPOSER_AUTOMAPPING_OFFSET UNITYSDK_OFFSET(0x1FE68980)
#define ROOTMOTION_FINALIK_GENERICPOSER_FIXPOSERTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1FE69670)
#define ROOTMOTION_FINALIK_GENERICPOSER_GETTARGETNAMED_OFFSET UNITYSDK_OFFSET(0x1FE68F70)
#define ROOTMOTION_FINALIK_GENERICPOSER_INITIATEPOSER_OFFSET UNITYSDK_OFFSET(0x1FE692D0)
#define ROOTMOTION_FINALIK_GENERICPOSER_STOREDEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x1FE691D0)
#define ROOTMOTION_FINALIK_GENERICPOSER_UPDATEPOSER_OFFSET UNITYSDK_OFFSET(0x1FE692E0)
#define ROOTMOTION_FINALIK_GENERICPOSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE69830)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int GenericPoser_TypeDefinitionIndex = 36977;

	class GenericPoser : public ::RootMotion::FinalIK::Poser
	{
	public:
		::Il2CppArray<::System::Object*>* maps; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GENERICPOSER__CTOR_OFFSET))(this);
		}

		::System::Void AutoMapping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GENERICPOSER_AUTOMAPPING_OFFSET))(this);
		}

		::System::Void InitiatePoser()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GENERICPOSER_INITIATEPOSER_OFFSET))(this);
		}

		::System::Void UpdatePoser()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GENERICPOSER_UPDATEPOSER_OFFSET))(this);
		}

		::System::Void FixPoserTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GENERICPOSER_FIXPOSERTRANSFORMS_OFFSET))(this);
		}

		::System::Void StoreDefaultState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GENERICPOSER_STOREDEFAULTSTATE_OFFSET))(this);
		}

		::UnityEngine::Transform* GetTargetNamed(::System::String* tName, ::Il2CppArray<::UnityEngine::Transform*>* array)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*, ::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GENERICPOSER_GETTARGETNAMED_OFFSET))(this, tName, array);
		}
	};
}
