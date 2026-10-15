#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPPAAKNAEKO;
namespace System { class Object; }

#define FPPAAKNAEKO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E410880)
#define FPPAAKNAEKO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4108C0)
#define FPPAAKNAEKO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E4108D0)

inline static constexpr unsigned int FPPAAKNAEKO___c_TypeDefinitionIndex = 31226;

	class FPPAAKNAEKO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6BB00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPPAAKNAEKO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPAAKNAEKO___C_CTOR_OFFSET))(this);
		}

		::FPPAAKNAEKO* __cctor_b__18_0()
		{
			return ((::FPPAAKNAEKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPAAKNAEKO___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
