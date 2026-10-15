#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLLCDNDBMFC;
namespace System { class Object; }

#define BLLCDNDBMFC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF66880)
#define BLLCDNDBMFC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF668C0)
#define BLLCDNDBMFC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DF668D0)

inline static constexpr unsigned int BLLCDNDBMFC___c_TypeDefinitionIndex = 35015;

	class BLLCDNDBMFC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D3B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLLCDNDBMFC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLLCDNDBMFC___C_CTOR_OFFSET))(this);
		}

		::BLLCDNDBMFC* __cctor_b__33_0()
		{
			return ((::BLLCDNDBMFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLLCDNDBMFC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
