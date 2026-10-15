#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGKBMLELJDH;
namespace System { class Object; }

#define IGKBMLELJDH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E621AD0)
#define IGKBMLELJDH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E621B10)
#define IGKBMLELJDH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E621B20)

inline static constexpr unsigned int IGKBMLELJDH___c_TypeDefinitionIndex = 34654;

	class IGKBMLELJDH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B840);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGKBMLELJDH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKBMLELJDH___C_CTOR_OFFSET))(this);
		}

		::IGKBMLELJDH* __cctor_b__23_0()
		{
			return ((::IGKBMLELJDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKBMLELJDH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
