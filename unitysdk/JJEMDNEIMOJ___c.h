#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJEMDNEIMOJ;
namespace System { class Object; }

#define JJEMDNEIMOJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA88200)
#define JJEMDNEIMOJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA88230)
#define JJEMDNEIMOJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FA88240)

inline static constexpr unsigned int JJEMDNEIMOJ___c_TypeDefinitionIndex = 33932;

	class JJEMDNEIMOJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4DF50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJEMDNEIMOJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJEMDNEIMOJ___C_CTOR_OFFSET))(this);
		}

		::JJEMDNEIMOJ* __cctor_b__23_0()
		{
			return ((::JJEMDNEIMOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJEMDNEIMOJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
