#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGAJKHIMKJP;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_BUDDYFASHIONPARTGETITEMLISTSHOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10796F60)
#define MOLEMOLE_BUDDYFASHIONPARTGETITEMLISTSHOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10796FA0)
#define MOLEMOLE_BUDDYFASHIONPARTGETITEMLISTSHOW___C__DOPROCESS_B__1_0_OFFSET UNITYSDK_OFFSET(0x10796FB0)

namespace MoleMole
{
	inline static constexpr unsigned int BuddyFashionPartGetItemListShow___c_TypeDefinitionIndex = 76328;

	class BuddyFashionPartGetItemListShow___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BuddyFashionPartGetItemListShow___c_TypeDefinitionIndex)->GetStaticField(0x34340);
		}
		static ::System::Func_2<::HGAJKHIMKJP*, ::System::Int32>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::HGAJKHIMKJP*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BuddyFashionPartGetItemListShow___c_TypeDefinitionIndex)->GetStaticField(0x34348);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BUDDYFASHIONPARTGETITEMLISTSHOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BUDDYFASHIONPARTGETITEMLISTSHOW___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _DoProcess_b__1_0(::HGAJKHIMKJP* item)
		{
			return ((::System::Int32(*)(::PVOID, ::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + MOLEMOLE_BUDDYFASHIONPARTGETITEMLISTSHOW___C__DOPROCESS_B__1_0_OFFSET))(this, item);
		}
	};
}
