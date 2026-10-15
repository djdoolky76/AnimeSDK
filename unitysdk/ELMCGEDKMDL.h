#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
namespace System { class String; }

#define ELMCGEDKMDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1551D110)

inline static constexpr unsigned int ELMCGEDKMDL_TypeDefinitionIndex = 63666;

	class ELMCGEDKMDL : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ELMCGEDKMDL_CTOR_OFFSET))(this, a1);
		}

	};
