#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AHHOCKOFCCI.h"
#include "unitysdk/System/Object.h"

class HDBIKLMCCCK;
class LCDOMEFKJKM;

#define IONMPBFCNPB_FJBMPMNPFNN_FINFPCDCJDA_OFFSET UNITYSDK_OFFSET(0x13825FE0)
#define IONMPBFCNPB_FJBMPMNPFNN__CTOR_OFFSET UNITYSDK_OFFSET(0x13825FD0)

inline static constexpr unsigned int IONMPBFCNPB_FJBMPMNPFNN_TypeDefinitionIndex = 89674;

class IONMPBFCNPB_FJBMPMNPFNN : public ::System::Object
{
public:
	::LCDOMEFKJKM* LOHHAFCFEBJ; // 0x10
	::AHHOCKOFCCI IGAAKDOIPNN; // 0x18
	::System::UInt32 DAMBOLBBLHD; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IONMPBFCNPB_FJBMPMNPFNN__CTOR_OFFSET))(this);
	}

	::HDBIKLMCCCK* FINFPCDCJDA()
	{
		return ((::HDBIKLMCCCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + IONMPBFCNPB_FJBMPMNPFNN_FINFPCDCJDA_OFFSET))(this);
	}
};
