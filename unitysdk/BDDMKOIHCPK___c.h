#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDDMKOIHCPK;
namespace System { class Object; }

#define BDDMKOIHCPK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA88D70)
#define BDDMKOIHCPK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA88DB0)
#define BDDMKOIHCPK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FA88DC0)

inline static constexpr unsigned int BDDMKOIHCPK___c_TypeDefinitionIndex = 32310;

	class BDDMKOIHCPK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45B70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDDMKOIHCPK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDMKOIHCPK___C_CTOR_OFFSET))(this);
		}

		::BDDMKOIHCPK* __cctor_b__33_0()
		{
			return ((::BDDMKOIHCPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDMKOIHCPK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
