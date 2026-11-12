#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"
namespace System { class String; }

#define DJJEAEHOGBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEFC7D0)

inline static constexpr unsigned int DJJEAEHOGBJ_TypeDefinitionIndex = 25521;

	class DJJEAEHOGBJ : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::String* OOMBNFMJLEO; // 0x10
		::System::String* MOPDMGOHKJC; // 0x18
		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + DJJEAEHOGBJ_CTOR_OFFSET))(this, a1, a2);
		}

	};
