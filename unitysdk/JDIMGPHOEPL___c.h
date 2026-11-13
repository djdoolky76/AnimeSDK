#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDIMGPHOEPL;
namespace System { class Object; }

#define JDIMGPHOEPL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20427D30)
#define JDIMGPHOEPL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20427D70)
#define JDIMGPHOEPL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x20427D80)

inline static constexpr unsigned int JDIMGPHOEPL___c_TypeDefinitionIndex = 32239;

	class JDIMGPHOEPL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CEE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDIMGPHOEPL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIMGPHOEPL___C_CTOR_OFFSET))(this);
		}

		::JDIMGPHOEPL* __cctor_b__33_0()
		{
			return ((::JDIMGPHOEPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIMGPHOEPL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
