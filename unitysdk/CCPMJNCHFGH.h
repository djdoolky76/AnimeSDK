#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define CCPMJNCHFGH_NDLHPJGNKDI_OFFSET UNITYSDK_OFFSET(0x1C450900)

	class CCPMJNCHFGH : public ::System::Object
	{
	public:
		static ::System::Void NDLHPJGNKDI(::System::String* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CCPMJNCHFGH_NDLHPJGNKDI_OFFSET))(a1, a2, a3);
		}

	};
