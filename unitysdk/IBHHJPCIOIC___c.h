#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBHHJPCIOIC;
namespace System { class Object; }

#define IBHHJPCIOIC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9133C0)
#define IBHHJPCIOIC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F913400)
#define IBHHJPCIOIC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F913410)

inline static constexpr unsigned int IBHHJPCIOIC___c_TypeDefinitionIndex = 25913;

	class IBHHJPCIOIC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48900);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBHHJPCIOIC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHHJPCIOIC___C_CTOR_OFFSET))(this);
		}

		::IBHHJPCIOIC* __cctor_b__33_0()
		{
			return ((::IBHHJPCIOIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHHJPCIOIC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
