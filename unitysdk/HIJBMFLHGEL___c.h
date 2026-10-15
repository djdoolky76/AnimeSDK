#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIJBMFLHGEL;
namespace System { class Object; }

#define HIJBMFLHGEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E597A50)
#define HIJBMFLHGEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E597A90)
#define HIJBMFLHGEL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E597AA0)

inline static constexpr unsigned int HIJBMFLHGEL___c_TypeDefinitionIndex = 31355;

	class HIJBMFLHGEL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D470);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIJBMFLHGEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJBMFLHGEL___C_CTOR_OFFSET))(this);
		}

		::HIJBMFLHGEL* __cctor_b__33_0()
		{
			return ((::HIJBMFLHGEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJBMFLHGEL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
