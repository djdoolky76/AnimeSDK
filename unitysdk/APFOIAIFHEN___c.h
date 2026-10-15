#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APFOIAIFHEN;
namespace System { class Object; }

#define APFOIAIFHEN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E647E90)
#define APFOIAIFHEN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E647ED0)
#define APFOIAIFHEN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E647EE0)

inline static constexpr unsigned int APFOIAIFHEN___c_TypeDefinitionIndex = 25664;

	class APFOIAIFHEN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A370);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APFOIAIFHEN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APFOIAIFHEN___C_CTOR_OFFSET))(this);
		}

		::APFOIAIFHEN* __cctor_b__28_0()
		{
			return ((::APFOIAIFHEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + APFOIAIFHEN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
