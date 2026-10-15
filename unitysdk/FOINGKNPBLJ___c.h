#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOINGKNPBLJ;
namespace System { class Object; }

#define FOINGKNPBLJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3CE830)
#define FOINGKNPBLJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3CE870)
#define FOINGKNPBLJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E3CE880)

inline static constexpr unsigned int FOINGKNPBLJ___c_TypeDefinitionIndex = 33259;

	class FOINGKNPBLJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E720);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOINGKNPBLJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOINGKNPBLJ___C_CTOR_OFFSET))(this);
		}

		::FOINGKNPBLJ* __cctor_b__23_0()
		{
			return ((::FOINGKNPBLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOINGKNPBLJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
