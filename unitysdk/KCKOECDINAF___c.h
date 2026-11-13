#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCKOECDINAF;
namespace System { class Object; }

#define KCKOECDINAF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x203C1DE0)
#define KCKOECDINAF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x203C1E20)
#define KCKOECDINAF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x203C1E30)

inline static constexpr unsigned int KCKOECDINAF___c_TypeDefinitionIndex = 29592;

	class KCKOECDINAF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6A900);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCKOECDINAF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKOECDINAF___C_CTOR_OFFSET))(this);
		}

		::KCKOECDINAF* __cctor_b__28_0()
		{
			return ((::KCKOECDINAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKOECDINAF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
