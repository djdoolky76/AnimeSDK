#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGADBGEMDAG;
namespace System { class Object; }

#define FGADBGEMDAG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E34D010)
#define FGADBGEMDAG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E34D050)
#define FGADBGEMDAG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E34D060)

inline static constexpr unsigned int FGADBGEMDAG___c_TypeDefinitionIndex = 28089;

	class FGADBGEMDAG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x550C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGADBGEMDAG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGADBGEMDAG___C_CTOR_OFFSET))(this);
		}

		::FGADBGEMDAG* __cctor_b__28_0()
		{
			return ((::FGADBGEMDAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGADBGEMDAG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
