#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace System { class String; }
namespace UnityEngine { class GUILayoutOption; }

#define DBJGGNJFJDI_CTOR_OFFSET UNITYSDK_OFFSET(0xDFD9A20)
#define DBJGGNJFJDI_FHKHOKLDGIC_OFFSET UNITYSDK_OFFSET(0xDFD9A90)
#define DBJGGNJFJDI_HAFBDMJEGAG_OFFSET UNITYSDK_OFFSET(0xDFD9BD0)
#define DBJGGNJFJDI_HPCPFBKDDAL_OFFSET UNITYSDK_OFFSET(0xDFD9B30)

inline static constexpr unsigned int DBJGGNJFJDI_TypeDefinitionIndex = 49556;

	class DBJGGNJFJDI : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* PMNMJEKKIJP; // 0x10
		::System::String* IOCBBJLGEAJ; // 0x18
		::System::Int32 MDBPILHONEH; // 0x20
		::System::Single KHBCIBHMIOG; // 0x24
		::System::Boolean LOFJANMAILC; // 0x28
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector2 BKIHBBGJAPK; // 0x2C
		::System::Void _ctor(::Il2CppArray<::System::String*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + DBJGGNJFJDI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void HPCPFBKDDAL(::Il2CppArray<::System::String*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + DBJGGNJFJDI_HPCPFBKDDAL_OFFSET))(this, a1, a2);
		}

		::System::Void FHKHOKLDGIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBJGGNJFJDI_FHKHOKLDGIC_OFFSET))(this);
		}

		::System::Int32 HAFBDMJEGAG(::Il2CppArray<::UnityEngine::GUILayoutOption*>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + DBJGGNJFJDI_HAFBDMJEGAG_OFFSET))(this, a1);
		}

	};
