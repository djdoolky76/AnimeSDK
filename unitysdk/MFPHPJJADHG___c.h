#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MFPHPJJADHG___C_CFPPLNCOIMI_OFFSET UNITYSDK_OFFSET(0x14DE2790)
#define MFPHPJJADHG___C_PEMBEAFBHEI_OFFSET UNITYSDK_OFFSET(0x14DE27A0)
#define MFPHPJJADHG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DE2740)
#define MFPHPJJADHG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14DE2780)

inline static constexpr unsigned int MFPHPJJADHG___c_TypeDefinitionIndex = 58844;

class MFPHPJJADHG___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(MFPHPJJADHG___c_TypeDefinitionIndex)->GetStaticField(0x4F7C0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MFPHPJJADHG___c_TypeDefinitionIndex)->GetStaticField(0x4F7C8);
	}
	static ::System::Action_1<::System::String*>** StaticGet___9__7_0()
	{
		return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MFPHPJJADHG___c_TypeDefinitionIndex)->GetStaticField(0x4F7D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFPHPJJADHG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPHPJJADHG___C__CTOR_OFFSET))(this);
	}

	::System::Void CFPPLNCOIMI(::System::String* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MFPHPJJADHG___C_CFPPLNCOIMI_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void PEMBEAFBHEI(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* LHLPLLCBMBM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*))((::PBYTE)hIl2Cpp + MFPHPJJADHG___C_PEMBEAFBHEI_OFFSET))(this, LHLPLLCBMBM);
	}
};
