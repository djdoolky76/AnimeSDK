#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GGFGEIILGFO;
class KNBADLOICGB;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define ALFAPJABJJB___C_DPJPKDKPDLO_OFFSET UNITYSDK_OFFSET(0x135F5E20)
#define ALFAPJABJJB___C_EDMIENNEMHN_OFFSET UNITYSDK_OFFSET(0x135F5D40)
#define ALFAPJABJJB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x135F5CF0)
#define ALFAPJABJJB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x135F5D30)

inline static constexpr unsigned int ALFAPJABJJB___c_TypeDefinitionIndex = 89625;

class ALFAPJABJJB___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::KNBADLOICGB*>** StaticGet___9__62_0()
	{
		return (::System::Comparison_1<::KNBADLOICGB*>**)Il2CppClass::FromTypeDefinitionIndex(ALFAPJABJJB___c_TypeDefinitionIndex)->GetStaticField(0x3D410);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ALFAPJABJJB___c_TypeDefinitionIndex)->GetStaticField(0x3D418);
	}
	static ::System::Func_2<::GGFGEIILGFO*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*>** StaticGet___9__33_0()
	{
		return (::System::Func_2<::GGFGEIILGFO*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(ALFAPJABJJB___c_TypeDefinitionIndex)->GetStaticField(0x3D420);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALFAPJABJJB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB___C__CTOR_OFFSET))(this);
	}

	::System::Int32 EDMIENNEMHN(::KNBADLOICGB* EJCBEJMGFAJ, ::KNBADLOICGB* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::KNBADLOICGB*, ::KNBADLOICGB*))((::PBYTE)hIl2Cpp + ALFAPJABJJB___C_EDMIENNEMHN_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Collections::Generic::IEnumerable_1<::System::UInt32>* DPJPKDKPDLO(::GGFGEIILGFO* HMMMOCJAEOA)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID, ::GGFGEIILGFO*))((::PBYTE)hIl2Cpp + ALFAPJABJJB___C_DPJPKDKPDLO_OFFSET))(this, HMMMOCJAEOA);
	}
};
