#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define B970818F226EAA0C_A4AFEEC66AF419C1_OFFSET UNITYSDK_OFFSET(0x3DE29D0)
#define B970818F226EAA0C_A6AFCBADE9019D2F_OFFSET UNITYSDK_OFFSET(0x3DE2930)
#define B970818F226EAA0C_FB7350910573EAA4_OFFSET UNITYSDK_OFFSET(0x3DE2980)
#define B970818F226EAA0C_FD7D54EDB7873DB9_OFFSET UNITYSDK_OFFSET(0x3DE2A70)

inline static constexpr unsigned int B970818F226EAA0C_TypeDefinitionIndex = 20831;

class B970818F226EAA0C : public ::System::Object
{
public:
	static ::System::Void A6AFCBADE9019D2F(::System::Boolean B37E8E89CDAB6CFC)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + B970818F226EAA0C_A6AFCBADE9019D2F_OFFSET))(B37E8E89CDAB6CFC);
	}

	static ::System::Void A4AFEEC66AF419C1(::System::String* BEA4AEE20812C761, ::System::String* B083BE7841B347C4)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + B970818F226EAA0C_A4AFEEC66AF419C1_OFFSET))(BEA4AEE20812C761, B083BE7841B347C4);
	}

	static ::System::Void FD7D54EDB7873DB9(::System::Boolean B37E8E89CDAB6CFC, ::System::String* BEA4AEE20812C761, ::System::String* B083BE7841B347C4)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + B970818F226EAA0C_FD7D54EDB7873DB9_OFFSET))(B37E8E89CDAB6CFC, BEA4AEE20812C761, B083BE7841B347C4);
	}

	static ::System::Void FB7350910573EAA4(::System::String* BEA4AEE20812C761)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + B970818F226EAA0C_FB7350910573EAA4_OFFSET))(BEA4AEE20812C761);
	}
};
