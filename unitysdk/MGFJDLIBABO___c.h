#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGFJDLIBABO;
namespace System { class Object; }

#define MGFJDLIBABO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD74FF0)
#define MGFJDLIBABO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD75030)
#define MGFJDLIBABO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FD75040)

inline static constexpr unsigned int MGFJDLIBABO___c_TypeDefinitionIndex = 29418;

	class MGFJDLIBABO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54790);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGFJDLIBABO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFJDLIBABO___C_CTOR_OFFSET))(this);
		}

		::MGFJDLIBABO* __cctor_b__33_0()
		{
			return ((::MGFJDLIBABO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFJDLIBABO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
