#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

namespace System { class String; }

#define ADF096EBFBDEB7F6_EDF12FA143184EBB_A7784FCBF21A1BAA_OFFSET UNITYSDK_OFFSET(0x3E63A70)
#define ADF096EBFBDEB7F6_EDF12FA143184EBB_F9AC47B125595363_OFFSET UNITYSDK_OFFSET(0x3E63A60)
#define ADF096EBFBDEB7F6_EDF12FA143184EBB__CCTOR_OFFSET UNITYSDK_OFFSET(0x3E63A80)
#define ADF096EBFBDEB7F6_EDF12FA143184EBB__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int ADF096EBFBDEB7F6_EDF12FA143184EBB_TypeDefinitionIndex = 14853;

class ADF096EBFBDEB7F6_EDF12FA143184EBB : public ::System::Object
{
public:
	static ::ADF096EBFBDEB7F6_EDF12FA143184EBB** StaticGet_FB0A7EB463FA294A()
	{
		return (::ADF096EBFBDEB7F6_EDF12FA143184EBB**)Il2CppClass::FromTypeDefinitionIndex(ADF096EBFBDEB7F6_EDF12FA143184EBB_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADF096EBFBDEB7F6_EDF12FA143184EBB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADF096EBFBDEB7F6_EDF12FA143184EBB__CTOR_OFFSET))(this);
	}

	::System::String* F9AC47B125595363(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*> A6D95DB9C6774967)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>))((::PBYTE)hIl2Cpp + ADF096EBFBDEB7F6_EDF12FA143184EBB_F9AC47B125595363_OFFSET))(this, A6D95DB9C6774967);
	}

	::System::String* A7784FCBF21A1BAA(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*> A6D95DB9C6774967)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>))((::PBYTE)hIl2Cpp + ADF096EBFBDEB7F6_EDF12FA143184EBB_A7784FCBF21A1BAA_OFFSET))(this, A6D95DB9C6774967);
	}
};
