#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBMLONMBLNE;
namespace System { class Object; }

#define CBMLONMBLNE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F332E30)
#define CBMLONMBLNE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F332E70)
#define CBMLONMBLNE___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F332E80)

inline static constexpr unsigned int CBMLONMBLNE___c_TypeDefinitionIndex = 28330;

	class CBMLONMBLNE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A3B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBMLONMBLNE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBMLONMBLNE___C_CTOR_OFFSET))(this);
		}

		::CBMLONMBLNE* __cctor_b__38_0()
		{
			return ((::CBMLONMBLNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBMLONMBLNE___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
