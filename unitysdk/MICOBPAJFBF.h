#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client::SwordTraining { class SwordTrainingActionData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MICOBPAJFBF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D040)
#define MICOBPAJFBF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D160)
#define MICOBPAJFBF_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D0C0)
#define MICOBPAJFBF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D1A0)
#define MICOBPAJFBF_RESET_OFFSET UNITYSDK_OFFSET(0x1D220)
#define MICOBPAJFBF_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D110)

inline static constexpr unsigned int MICOBPAJFBF_TypeDefinitionIndex = 75063;

	struct alignas(8) MICOBPAJFBF
	{
		::System::Object* DDHLJAMMCFA; // 0x10
		::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SwordTraining::SwordTrainingActionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SwordTraining::SwordTrainingActionData*>*))((::PBYTE)hIl2Cpp + MICOBPAJFBF_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::SwordTraining::SwordTrainingActionData* get_Current()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingActionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICOBPAJFBF_GET_CURRENT_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICOBPAJFBF_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICOBPAJFBF_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICOBPAJFBF_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICOBPAJFBF_RESET_OFFSET))(this);
		}

	};
