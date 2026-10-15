#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EffectPointsAnimModule.h"
#include "unitysdk/UnityEngine/Vector4.h"
class CEFCMPKCMAF;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_POINTSANIMCUSTOMDATAMODULE_AGHABIKPPNO_OFFSET UNITYSDK_OFFSET(0xDC00420)
#define RPG_CLIENT_POINTSANIMCUSTOMDATAMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0xDC007D0)
#define RPG_CLIENT_POINTSANIMCUSTOMDATAMODULE_KEDAJPMCGOE_OFFSET UNITYSDK_OFFSET(0xDC00770)
#define RPG_CLIENT_POINTSANIMCUSTOMDATAMODULE_MEJPCPBPMNM_OFFSET UNITYSDK_OFFSET(0xDBFFCA0)

namespace RPG::Client
{
	inline static constexpr unsigned int PointsAnimCustomDataModule_TypeDefinitionIndex = 70624;

	class PointsAnimCustomDataModule : public ::RPG::Client::EffectPointsAnimModule
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* Properties; // 0x18
		::Il2CppArray<::Il2CppArray<::UnityEngine::Vector4>*>* _InitialValues; // 0x20
		::Il2CppArray<::Il2CppArray<::UnityEngine::Vector4>*>* _CurrentValues; // 0x28
		::Il2CppArray<::System::Int32>* _PropertyNameIDs; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMCUSTOMDATAMODULE_CTOR_OFFSET))(this);
		}

		::System::Void MEJPCPBPMNM(::CEFCMPKCMAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEFCMPKCMAF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMCUSTOMDATAMODULE_MEJPCPBPMNM_OFFSET))(this, a1);
		}

		::System::Void AGHABIKPPNO(::CEFCMPKCMAF* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::CEFCMPKCMAF*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMCUSTOMDATAMODULE_AGHABIKPPNO_OFFSET))(this, a1, a2);
		}

		::System::Void KEDAJPMCGOE(::CEFCMPKCMAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEFCMPKCMAF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMCUSTOMDATAMODULE_KEDAJPMCGOE_OFFSET))(this, a1);
		}

	};
}
