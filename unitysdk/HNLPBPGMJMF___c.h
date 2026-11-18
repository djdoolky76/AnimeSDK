#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayCase/DisplayBaseTransformData.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class GFBEPBHPKKF;
class HNPJNICKLOJ;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HNLPBPGMJMF___C_CLFNAFBBHLI_OFFSET UNITYSDK_OFFSET(0x16D003C0)
#define HNLPBPGMJMF___C_DKKONNHKHPH_OFFSET UNITYSDK_OFFSET(0x16D003E0)
#define HNLPBPGMJMF___C_FDEJJFOHKMI_OFFSET UNITYSDK_OFFSET(0x16D00400)
#define HNLPBPGMJMF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D00370)
#define HNLPBPGMJMF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16D003B0)

inline static constexpr unsigned int HNLPBPGMJMF___c_TypeDefinitionIndex = 86290;

class HNLPBPGMJMF___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::HNPJNICKLOJ*>** StaticGet___9__16_0()
	{
		return (::System::Predicate_1<::HNPJNICKLOJ*>**)Il2CppClass::FromTypeDefinitionIndex(HNLPBPGMJMF___c_TypeDefinitionIndex)->GetStaticField(0x37BB0);
	}
	static ::System::Predicate_1<::GFBEPBHPKKF*>** StaticGet___9__16_1()
	{
		return (::System::Predicate_1<::GFBEPBHPKKF*>**)Il2CppClass::FromTypeDefinitionIndex(HNLPBPGMJMF___c_TypeDefinitionIndex)->GetStaticField(0x37BB8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HNLPBPGMJMF___c_TypeDefinitionIndex)->GetStaticField(0x37BC0);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::DisplayCase::DisplayBaseTransformData>*>, ::System::Boolean>** StaticGet___9__28_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::DisplayCase::DisplayBaseTransformData>*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HNLPBPGMJMF___c_TypeDefinitionIndex)->GetStaticField(0x37BC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNLPBPGMJMF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLPBPGMJMF___C__CTOR_OFFSET))(this);
	}

	::System::Boolean CLFNAFBBHLI(::HNPJNICKLOJ* JNDDJMAHNAI)
	{
		return ((::System::Boolean(*)(::PVOID, ::HNPJNICKLOJ*))((::PBYTE)hIl2Cpp + HNLPBPGMJMF___C_CLFNAFBBHLI_OFFSET))(this, JNDDJMAHNAI);
	}

	::System::Boolean DKKONNHKHPH(::GFBEPBHPKKF* JNDDJMAHNAI)
	{
		return ((::System::Boolean(*)(::PVOID, ::GFBEPBHPKKF*))((::PBYTE)hIl2Cpp + HNLPBPGMJMF___C_DKKONNHKHPH_OFFSET))(this, JNDDJMAHNAI);
	}

	::System::Boolean FDEJJFOHKMI(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::DisplayCase::DisplayBaseTransformData>*> JNDDJMAHNAI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::DisplayCase::DisplayBaseTransformData>*>))((::PBYTE)hIl2Cpp + HNLPBPGMJMF___C_FDEJJFOHKMI_OFFSET))(this, JNDDJMAHNAI);
	}
};
