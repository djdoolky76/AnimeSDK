#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define FFPJOHNFIHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDEA890)

inline static constexpr unsigned int FFPJOHNFIHI_TypeDefinitionIndex = 25029;

	class FFPJOHNFIHI : public ::System::Attribute
	{
	public:
		::System::String* NMJPINAAOLF; // 0x10
		::System::Boolean JGDOAKLJIEH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPJOHNFIHI_CTOR_OFFSET))(this);
		}

	};
