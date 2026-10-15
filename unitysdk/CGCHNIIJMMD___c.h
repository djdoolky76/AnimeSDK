#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGCHNIIJMMD;
namespace System { class Object; }

#define CGCHNIIJMMD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E080E00)
#define CGCHNIIJMMD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E080E40)
#define CGCHNIIJMMD___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1E080E50)

inline static constexpr unsigned int CGCHNIIJMMD___c_TypeDefinitionIndex = 30631;

	class CGCHNIIJMMD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12FB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGCHNIIJMMD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGCHNIIJMMD___C_CTOR_OFFSET))(this);
		}

		::CGCHNIIJMMD* __cctor_b__58_0()
		{
			return ((::CGCHNIIJMMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGCHNIIJMMD___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
