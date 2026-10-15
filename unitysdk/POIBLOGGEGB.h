#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEMKNPIFMBI.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class DKNHMEHFNDB;
class OONGDLIDJJJ;
namespace RPG::GameCore { class ChoseSequencedSkillAxis; }
namespace System { class Object; }

#define POIBLOGGEGB_CTOR_OFFSET UNITYSDK_OFFSET(0xC35FCF0)
#define POIBLOGGEGB_FPJKDKHNBFP_OFFSET UNITYSDK_OFFSET(0xC360110)
#define POIBLOGGEGB_IOAAJIKPFOA_OFFSET UNITYSDK_OFFSET(0xC3606D0)
#define POIBLOGGEGB_MNAKIEOGPDK_OFFSET UNITYSDK_OFFSET(0xC35FD00)
#define POIBLOGGEGB_OIBBGLOFMPO_OFFSET UNITYSDK_OFFSET(0xC35FF30)

inline static constexpr unsigned int POIBLOGGEGB_TypeDefinitionIndex = 54378;

	class POIBLOGGEGB : public ::BEMKNPIFMBI
	{
	public:
		::RPG::GameCore::ChoseSequencedSkillAxis* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::ChoseSequencedSkillAxis* a1, ::OONGDLIDJJJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChoseSequencedSkillAxis*, ::OONGDLIDJJJ*))((::PBYTE)hIl2Cpp + POIBLOGGEGB_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint MNAKIEOGPDK()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + POIBLOGGEGB_MNAKIEOGPDK_OFFSET))(this);
		}

		::System::Boolean IOAAJIKPFOA(::OONGDLIDJJJ* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::OONGDLIDJJJ*, ::System::UInt32))((::PBYTE)hIl2Cpp + POIBLOGGEGB_IOAAJIKPFOA_OFFSET))(this, a1, a2);
		}

		::System::Void FPJKDKHNBFP(::OONGDLIDJJJ* a1, ::DKNHMEHFNDB* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::OONGDLIDJJJ*, ::DKNHMEHFNDB*, ::System::Object*))((::PBYTE)hIl2Cpp + POIBLOGGEGB_FPJKDKHNBFP_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::DKNHMEHFNDB*>* OIBBGLOFMPO(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::Il2CppArray<::DKNHMEHFNDB*>*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + POIBLOGGEGB_OIBBGLOFMPO_OFFSET))(this, a1);
		}

	};
