#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class F30685647BD0B802_EA5427DF5BD32841;
namespace System { class Object; }
namespace System { class String; }

#define F30685647BD0B802_A2A2048CB29EA3B8_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7C20)
#define F30685647BD0B802_A2A2048CB29EA3B8__CTOR_OFFSET UNITYSDK_OFFSET(0x38D8BF0)

inline static constexpr unsigned int F30685647BD0B802_A2A2048CB29EA3B8_TypeDefinitionIndex = 11855;

class F30685647BD0B802_A2A2048CB29EA3B8 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F30685647BD0B802_A2A2048CB29EA3B8__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Int32 Invoke(::System::String* B5768161EF7C90ED, ::System::String* A1BAE8DA00165AEB, ::System::String* E277AFDE9327CD5B, ::F30685647BD0B802_EA5427DF5BD32841* E04D2BE64FCE9814)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::F30685647BD0B802_EA5427DF5BD32841*))((::PBYTE)hIl2Cpp + F30685647BD0B802_A2A2048CB29EA3B8_INVOKE_OFFSET))(this, B5768161EF7C90ED, A1BAE8DA00165AEB, E277AFDE9327CD5B, E04D2BE64FCE9814);
	}
};
