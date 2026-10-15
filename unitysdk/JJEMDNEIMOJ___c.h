#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJEMDNEIMOJ;
namespace System { class Object; }

#define JJEMDNEIMOJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E75AC00)
#define JJEMDNEIMOJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E75AC30)
#define JJEMDNEIMOJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E75AC40)

inline static constexpr unsigned int JJEMDNEIMOJ___c_TypeDefinitionIndex = 33017;

	class JJEMDNEIMOJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64FE0);
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
