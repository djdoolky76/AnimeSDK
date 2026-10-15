#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CENBJOMMJGD;
namespace System { class Object; }

#define CENBJOMMJGD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E09CF20)
#define CENBJOMMJGD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E09CF60)
#define CENBJOMMJGD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E09CF70)

inline static constexpr unsigned int CENBJOMMJGD___c_TypeDefinitionIndex = 29660;

	class CENBJOMMJGD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x128E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CENBJOMMJGD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CENBJOMMJGD___C_CTOR_OFFSET))(this);
		}

		::CENBJOMMJGD* __cctor_b__28_0()
		{
			return ((::CENBJOMMJGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CENBJOMMJGD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
