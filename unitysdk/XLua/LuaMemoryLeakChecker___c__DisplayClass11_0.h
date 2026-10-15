#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/XLua/LuaMemoryLeakChecker_RefInfo.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define XLUA_LUAMEMORYLEAKCHECKER___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0x14DB8240)
#define XLUA_LUAMEMORYLEAKCHECKER___C__DISPLAYCLASS11_0__MEMORYLEAKREPORT_B__5_OFFSET UNITYSDK_OFFSET(0x14DB8320)

namespace XLua
{
	inline static constexpr unsigned int LuaMemoryLeakChecker___c__DisplayClass11_0_TypeDefinitionIndex = 50063;

	class LuaMemoryLeakChecker___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::IntPtr, ::System::Collections::Generic::List_1<::System::Object*>*>* relationshipInfo; // 0x10
		::System::Func_2<::System::Object*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* __9__5; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUAMEMORYLEAKCHECKER___C__DISPLAYCLASS11_0_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Object*>* _MemoryLeakReport_b__5(::XLua::LuaMemoryLeakChecker_RefInfo a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Object*>*(*)(::PVOID, ::XLua::LuaMemoryLeakChecker_RefInfo))((::PBYTE)hIl2Cpp + XLUA_LUAMEMORYLEAKCHECKER___C__DISPLAYCLASS11_0__MEMORYLEAKREPORT_B__5_OFFSET))(this, a1);
		}

	};
}
