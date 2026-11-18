#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class HGAJKHIMKJP;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_BANGKOVREWARDPOPSHOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1218BEE0)
#define MOLEMOLE_BANGKOVREWARDPOPSHOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1218BF20)
#define MOLEMOLE_BANGKOVREWARDPOPSHOW___C__ONPROCESS_B__4_0_OFFSET UNITYSDK_OFFSET(0x1218BF30)

namespace MoleMole
{
	inline static constexpr unsigned int BangKovRewardPopShow___c_TypeDefinitionIndex = 43633;

	class BangKovRewardPopShow___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::HGAJKHIMKJP*, ::System::ValueTuple_2<::System::Int32, ::System::Int32>>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::HGAJKHIMKJP*, ::System::ValueTuple_2<::System::Int32, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(BangKovRewardPopShow___c_TypeDefinitionIndex)->GetStaticField(0x386B0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BangKovRewardPopShow___c_TypeDefinitionIndex)->GetStaticField(0x386B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BANGKOVREWARDPOPSHOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGKOVREWARDPOPSHOW___C__CTOR_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> _OnProcess_b__4_0(::HGAJKHIMKJP* item)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGKOVREWARDPOPSHOW___C__ONPROCESS_B__4_0_OFFSET))(this, item);
		}
	};
}
