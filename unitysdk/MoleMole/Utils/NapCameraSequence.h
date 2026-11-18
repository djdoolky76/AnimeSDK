#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLGHOFNBMLE.h"

namespace MoleMole::Utils { class NapCameraSequenceDataTable; }
namespace System { class Type; }

#define MOLEMOLE_UTILS_NAPCAMERASEQUENCE_GETCONTEXTTYPE_OFFSET UNITYSDK_OFFSET(0x13EB1E50)
#define MOLEMOLE_UTILS_NAPCAMERASEQUENCE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13EB2100)
#define MOLEMOLE_UTILS_NAPCAMERASEQUENCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x13EB21B0)
#define MOLEMOLE_UTILS_NAPCAMERASEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x13EB2150)
#define MOLEMOLE_UTILS_NAPCAMERASEQUENCE___BASE_GETCONTEXTTYPE_OFFSET UNITYSDK_OFFSET(0x13EB2260)
#define MOLEMOLE_UTILS_NAPCAMERASEQUENCE___BASE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13EB2270)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int NapCameraSequence_TypeDefinitionIndex = 72343;

	class NapCameraSequence
	{
	public:
		static ::System::Type** StaticGet_GenericContextType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(NapCameraSequence_TypeDefinitionIndex)->GetStaticField(0x4C640);
		}
		static ::Il2CppArray<::System::Type*>** StaticGet__typeArgs()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(NapCameraSequence_TypeDefinitionIndex)->GetStaticField(0x4C648);
		}
		static ::System::Type** StaticGet_ContextType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(NapCameraSequence_TypeDefinitionIndex)->GetStaticField(0x4C650);
		}
		::HLGHOFNBMLE slotToPlay; // 0xA8
		::System::Byte _padding0[0x4];
		::MoleMole::Utils::NapCameraSequenceDataTable* configTable; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_NAPCAMERASEQUENCE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_NAPCAMERASEQUENCE__CCTOR_OFFSET))();
		}

		::System::Type* GetContextType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_NAPCAMERASEQUENCE_GETCONTEXTTYPE_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_NAPCAMERASEQUENCE_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Type* __base_GetContextType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_NAPCAMERASEQUENCE___BASE_GETCONTEXTTYPE_OFFSET))(this);
		}

		::System::Void __base_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_NAPCAMERASEQUENCE___BASE_ONBEFORESERIALIZE_OFFSET))(this);
		}
	};
}
