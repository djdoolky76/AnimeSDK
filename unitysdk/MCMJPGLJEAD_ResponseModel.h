#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MCMJPGLJEAD_RESPONSEMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xB889010)

inline static constexpr unsigned int MCMJPGLJEAD_ResponseModel_TypeDefinitionIndex = 49668;

	class MCMJPGLJEAD_ResponseModel : public ::System::Object
	{
	public:
		::System::Int32 retcode; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* message; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMJPGLJEAD_RESPONSEMODEL_CTOR_OFFSET))(this);
		}

	};
