#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PAPOPANPGIJ;
namespace System { class String; }

#define DOEPPCHKFPB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5F7300)
#define DOEPPCHKFPB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C5FA1B0)
#define DOEPPCHKFPB_EPJNHIIKAEJ_OFFSET UNITYSDK_OFFSET(0x1C5FA1F0)
#define DOEPPCHKFPB_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x1C5FA240)

inline static constexpr unsigned int DOEPPCHKFPB_TypeDefinitionIndex = 36965;

	class DOEPPCHKFPB : public ::System::Object
	{
	public:
		::System::String* GIDAEFPOGHI; // 0x10
		::PAPOPANPGIJ* EEFMDEHLLFI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEPPCHKFPB_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEPPCHKFPB_DISPOSE_OFFSET))(this);
		}

		::System::Void EPJNHIIKAEJ(::PAPOPANPGIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAPOPANPGIJ*))((::PBYTE)hIl2Cpp + DOEPPCHKFPB_EPJNHIIKAEJ_OFFSET))(this, a1);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEPPCHKFPB_MLMGEFIOION_OFFSET))(this);
		}

	};
