#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Reflection { class F60CD5AA5C2080DF; }

#define EDE697892544C5B7_F5628F8349D4A8A6_FCA7526BA2BBE48B_OFFSET UNITYSDK_OFFSET(0x403C100)
#define EDE697892544C5B7_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x403C580)
#define EDE697892544C5B7_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EDE697892544C5B7_F5628F8349D4A8A6_TypeDefinitionIndex = 20402;

class EDE697892544C5B7_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::EDE697892544C5B7_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::EDE697892544C5B7_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(EDE697892544C5B7_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::System::Reflection::F60CD5AA5C2080DF*, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*>** StaticGet_B44CBF46435FFCA0()
	{
		return (::System::Func_2<::System::Reflection::F60CD5AA5C2080DF*, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*>**)Il2CppClass::FromTypeDefinitionIndex(EDE697892544C5B7_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDE697892544C5B7_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDE697892544C5B7_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Type*>* FCA7526BA2BBE48B(::System::Reflection::F60CD5AA5C2080DF* BBCFEC7DB309E927)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Type*>*(*)(::PVOID, ::System::Reflection::F60CD5AA5C2080DF*))((::PBYTE)hIl2Cpp + EDE697892544C5B7_F5628F8349D4A8A6_FCA7526BA2BBE48B_OFFSET))(this, BBCFEC7DB309E927);
	}
};
