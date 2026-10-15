#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CMFFLPBJJKN;
namespace System { class Object; }

#define CMFFLPBJJKN___REFRESHMODELINUSECOROTINE_D__6_CTOR_OFFSET UNITYSDK_OFFSET(0xDA2FE50)
#define CMFFLPBJJKN___REFRESHMODELINUSECOROTINE_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDA30B20)
#define CMFFLPBJJKN___REFRESHMODELINUSECOROTINE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDA30CC0)
#define CMFFLPBJJKN___REFRESHMODELINUSECOROTINE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDA30D20)
#define CMFFLPBJJKN___REFRESHMODELINUSECOROTINE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xDA30CD0)
#define CMFFLPBJJKN___REFRESHMODELINUSECOROTINE_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDA30B10)

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
	class CMFFLPBJJKN___RefreshModelInUseCorotine_d__6 : public ::System::Object
	{
	public:
		::CMFFLPBJJKN* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CMFFLPBJJKN___REFRESHMODELINUSECOROTINE_D__6_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMFFLPBJJKN___REFRESHMODELINUSECOROTINE_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMFFLPBJJKN___REFRESHMODELINUSECOROTINE_D__6_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMFFLPBJJKN___REFRESHMODELINUSECOROTINE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMFFLPBJJKN___REFRESHMODELINUSECOROTINE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMFFLPBJJKN___REFRESHMODELINUSECOROTINE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
