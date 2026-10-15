#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IIPIFJCOIFO;
namespace System { class Object; }

#define IIPIFJCOIFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E68FDA0)
#define IIPIFJCOIFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E68FDE0)
#define IIPIFJCOIFO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E68FDF0)

inline static constexpr unsigned int IIPIFJCOIFO___c_TypeDefinitionIndex = 29935;

	class IIPIFJCOIFO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51C80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIPIFJCOIFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPIFJCOIFO___C_CTOR_OFFSET))(this);
		}

		::IIPIFJCOIFO* __cctor_b__23_0()
		{
			return ((::IIPIFJCOIFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPIFJCOIFO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
