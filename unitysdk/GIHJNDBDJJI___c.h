#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIHJNDBDJJI;
namespace System { class Object; }

#define GIHJNDBDJJI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E498020)
#define GIHJNDBDJJI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E498060)
#define GIHJNDBDJJI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E498070)

inline static constexpr unsigned int GIHJNDBDJJI___c_TypeDefinitionIndex = 31724;

	class GIHJNDBDJJI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIHJNDBDJJI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHJNDBDJJI___C_CTOR_OFFSET))(this);
		}

		::GIHJNDBDJJI* __cctor_b__28_0()
		{
			return ((::GIHJNDBDJJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHJNDBDJJI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
