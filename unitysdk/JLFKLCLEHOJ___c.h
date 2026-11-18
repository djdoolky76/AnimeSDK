#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JLFKLCLEHOJ___C_GHDBELBMBMN_OFFSET UNITYSDK_OFFSET(0x1EFA54E0)
#define JLFKLCLEHOJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFA5490)
#define JLFKLCLEHOJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFA54D0)

inline static constexpr unsigned int JLFKLCLEHOJ___c_TypeDefinitionIndex = 28678;

class JLFKLCLEHOJ___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JLFKLCLEHOJ___c_TypeDefinitionIndex)->GetStaticField(0x25D70);
	}
	static ::System::Func_2<::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::WeakReference_1<::System::Collections::Generic::HashSet_1<::System::UInt32>*>*>** StaticGet___9__8_0()
	{
		return (::System::Func_2<::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::WeakReference_1<::System::Collections::Generic::HashSet_1<::System::UInt32>*>*>**)Il2CppClass::FromTypeDefinitionIndex(JLFKLCLEHOJ___c_TypeDefinitionIndex)->GetStaticField(0x25D78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLFKLCLEHOJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLFKLCLEHOJ___C__CTOR_OFFSET))(this);
	}

	::System::WeakReference_1<::System::Collections::Generic::HashSet_1<::System::UInt32>*>* GHDBELBMBMN(::System::Collections::Generic::HashSet_1<::System::UInt32>* IPMMCGDMODG)
	{
		return ((::System::WeakReference_1<::System::Collections::Generic::HashSet_1<::System::UInt32>*>*(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + JLFKLCLEHOJ___C_GHDBELBMBMN_OFFSET))(this, IPMMCGDMODG);
	}
};
