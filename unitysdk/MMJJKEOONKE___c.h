#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MMJJKEOONKE;
namespace System { class Object; }

#define MMJJKEOONKE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDC4C60)
#define MMJJKEOONKE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDC4C90)
#define MMJJKEOONKE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FDC4CA0)

inline static constexpr unsigned int MMJJKEOONKE___c_TypeDefinitionIndex = 31854;

	class MMJJKEOONKE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E660);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMJJKEOONKE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJJKEOONKE___C_CTOR_OFFSET))(this);
		}

		::MMJJKEOONKE* __cctor_b__33_0()
		{
			return ((::MMJJKEOONKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJJKEOONKE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
