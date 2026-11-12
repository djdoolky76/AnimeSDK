#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDIMGPHOEPL;
namespace System { class Object; }

#define JDIMGPHOEPL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA1A900)
#define JDIMGPHOEPL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA1A940)
#define JDIMGPHOEPL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FA1A950)

inline static constexpr unsigned int JDIMGPHOEPL___c_TypeDefinitionIndex = 32239;

	class JDIMGPHOEPL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E580);
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
