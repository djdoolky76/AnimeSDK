#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PAPOPANPGIJ;
namespace System { class String; }

#define DOEPPCHKFPB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D778A20)
#define DOEPPCHKFPB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D77B8A0)
#define DOEPPCHKFPB_EPJNHIIKAEJ_OFFSET UNITYSDK_OFFSET(0x1D77B8E0)
#define DOEPPCHKFPB_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x1D77B930)

inline static constexpr unsigned int DOEPPCHKFPB_TypeDefinitionIndex = 37893;

	class DOEPPCHKFPB : public ::System::Object
	{
	public:
		::PAPOPANPGIJ* EEFMDEHLLFI; // 0x10
		::System::String* GIDAEFPOGHI; // 0x18
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
