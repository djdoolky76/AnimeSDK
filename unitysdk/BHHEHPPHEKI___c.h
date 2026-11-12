#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHHEHPPHEKI;
namespace System { class Object; }

#define BHHEHPPHEKI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F004600)
#define BHHEHPPHEKI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F004640)
#define BHHEHPPHEKI___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F004650)

inline static constexpr unsigned int BHHEHPPHEKI___c_TypeDefinitionIndex = 29220;

	class BHHEHPPHEKI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x480A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHHEHPPHEKI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHHEHPPHEKI___C_CTOR_OFFSET))(this);
		}

		::BHHEHPPHEKI* __cctor_b__18_0()
		{
			return ((::BHHEHPPHEKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHHEHPPHEKI___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
