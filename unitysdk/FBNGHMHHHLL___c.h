#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBNGHMHHHLL;
namespace System { class Object; }

#define FBNGHMHHHLL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F622480)
#define FBNGHMHHHLL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6224C0)
#define FBNGHMHHHLL___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1F6224D0)

inline static constexpr unsigned int FBNGHMHHHLL___c_TypeDefinitionIndex = 29800;

	class FBNGHMHHHLL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57840);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBNGHMHHHLL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBNGHMHHHLL___C_CTOR_OFFSET))(this);
		}

		::FBNGHMHHHLL* __cctor_b__48_0()
		{
			return ((::FBNGHMHHHLL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBNGHMHHHLL___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
