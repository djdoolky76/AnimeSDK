#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MEPPPIFBCFC_CTOR_OFFSET UNITYSDK_OFFSET(0xB8E83E0)
#define MEPPPIFBCFC_GET_DELTA_OFFSET UNITYSDK_OFFSET(0xB8E8510)
#define MEPPPIFBCFC_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB8E83F0)
#define MEPPPIFBCFC_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xB8E84A0)

inline static constexpr unsigned int MEPPPIFBCFC_TypeDefinitionIndex = 67066;

	class MEPPPIFBCFC : public ::System::Object
	{
	public:
		::System::Int32 _Delta_k__BackingField; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MEPPPIFBCFC_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPPPIFBCFC_TOSTRING_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPPPIFBCFC_TRIGGERACTION_OFFSET))(this);
		}

		::System::Int32 get_Delta()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPPPIFBCFC_GET_DELTA_OFFSET))(this);
		}

	};
